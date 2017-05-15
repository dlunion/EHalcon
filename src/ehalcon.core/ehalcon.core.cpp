#include "ehalcon.core.h"
#include "ehalcon.utils\windowManager.h"
#include "ehalcon.utils\objectInfo.h"
#include "e.lib.core\e.lib.core.h"
#include "e.lib.core.define\function.cmd.h"
#include "e.lib.core.define\dataType.h"

namespace ehalcon{
	namespace Core{
		//halcon中有个dev_error_var函数，他需要用一个变量存储最后发生错误的信息
		volatile __tuple* checkErrorVar = 0;

		static struct debugConfig{
			volatile int isPauseForError;    //是否在发生错误的情况下暂停
		}__debugConfig = { 0 };

		typedef void(__cdecl* CMD_ERROR_CALLBACK)(int, const char*);
		static CMD_ERROR_CALLBACK errorCallback = 0;
		CMD_ERROR_CALLBACK getErrorCallback()
		{
			return errorCallback;
		}

		void setErrorCallback(int callbackPtr)
		{
			errorCallback = (CMD_ERROR_CALLBACK)callbackPtr;
		}

		bool isPauseForError()
		{
			return __debugConfig.isPauseForError ? true : false;
		}

		void setDebugPauseFlagInError(bool isUsed){
			__debugConfig.isPauseForError = isUsed;
		}

		void defaultExceptionHandler(const Halcon::HException& except)
		{
			CMD_ERROR_CALLBACK cmd = getErrorCallback();
			if (cmd != 0)
				cmd(except.err, except.message);

			//是否在发生错误的时候暂停掉
			if (isPauseForError())
				elib::Core::epause();
			throw except;
		}

		const __tuple* getSystemCheckErrorVar(){
			return (__tuple*)checkErrorVar;
		}

		void setSystemCheckError(Hlong err){
			if (checkErrorVar != 0) *(__tuple*)checkErrorVar = err;
		}

		void setSystemCheckErrorVar(__tuple* var){
			checkErrorVar = var;
		}

		void throwError(const char* file, int line, const char* func, int code, const char* message, ...){
			static char v[1024];
			va_list vl;
			va_start(vl, message);
			vsprintf(v, message, vl);

			defaultExceptionHandler(__hException(file, line, func, code, v));
		}

		__tuple* newTuple(){
			return new __tuple;
		}

		__obj* newObj(){
			return new __obj;
		}

		void freeTuple(__tuple** pptr){
			if (pptr){
				__tuple* ptr = *pptr;
				if (ptr){
					if (ptr == getSystemCheckErrorVar()) setSystemCheckErrorVar(0);
					delete ptr;
				}
				*pptr = 0;
			}
		}

		void freeObj(__obj** pptr){
			if (pptr){
				__obj* ptr = *pptr;
				if (ptr)
					delete ptr;

				*pptr = 0;
			}
		}

		void initialize(){
			//这里先安装异常捕获函数，这样就可以实现转发控制了
			Halcon::HException::InstallHHandler(&defaultExceptionHandler);
			ehalcon::WindowManager::intialize();   //对窗口操作初始化
			ehalcon::ObjectInfo::initialize();
		}

		void uninitialize(){
			ehalcon::WindowManager::closeAll();
			ehalcon::WindowManager::uninitialize();
		}
	}
}