#include "e.lib.core.h"
#include "ehalcon.utils\windowManager.h"
#include "ehalcon.core\ehalcon.core.h"

namespace elib{
	namespace Core{
		//不要修改这个文件，放主要和易打交到的函数
		INT fnLastNotifyResult;//声明变量
		PFN_NOTIFY_SYS fnNotifySys = NULL;//声明变量并初始化变量
		volatile bool libraryExitFlag = false;
		volatile static bool isInitialize = false;
		HMODULE kernelLibHandle;
		PFN_EXECUTE_CMD eDebugPut = 0;
		PFN_EXECUTE_CMD eInterrupt = 0;
		int currentBuildVer = 0;

		INT WINAPI notifyE(INT nMsg, DWORD dwParam1, DWORD dwParam2)
		{
			if (fnNotifySys != NULL)
				return fnLastNotifyResult = fnNotifySys(nMsg, dwParam1, dwParam2);
			else
				return fnLastNotifyResult = 0;
		}

		INT WINAPI onNotify(INT nMsg, DWORD dwParam1, DWORD dwParam2)
		{
			INT nRet = NR_OK;
			switch (nMsg)
			{
			case NL_SYS_NOTIFY_FUNCTION:
				fnNotifySys = (PFN_NOTIFY_SYS)dwParam1;//DWORD
				currentBuildVer = notifyE(NRS_GET_PRG_TYPE, 0, 0);
				if (currentBuildVer == PT_DEBUG_RUN_VER && !isInitialize){  //调试的时候才会有
					//bugfix：v3.0：2015年5月29日 20:48:55：在必要的地方载入krnln.fne，因为发布的时候是不需要调试信息的
					//这里找到krnln.fne的函数
					isInitialize = true;
					kernelLibHandle = LoadLibrary("krnln.fne");
					typedef void(*aaaFunc)(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf);
					typedef LIB_INFO* (WINAPI* getinfo)();
					getinfo proc = (getinfo)GetProcAddress(kernelLibHandle, "GetNewInf");
					LIB_INFO* f = proc();
					eDebugPut = f->m_pCmdsFunc[197];
					eInterrupt = f->m_pCmdsFunc[198];
				}
				break;
			case NL_FREE_LIB_DATA:
				//当收到支持库释放通知后，设置退出标志，以至于让最后能正常的释放掉
				libraryExitFlag = true;
				break;
			default:
				nRet = NR_ERR;
				break;
			}
			return nRet;
		}

		//e的内存分配函数
		void* emalloc(INT nSize)
		{
			return (void*)notifyE(NRS_MALLOC, (DWORD)nSize, 0);
		}

		//e的内存释放函数
		void efree(void* p)
		{
			if (p != 0) notifyE(NRS_MFREE, (DWORD)p, 0);
		}

		//释放e的数组
		void efreeArray(void* p, int type)
		{
			if (p != 0) notifyE(NRS_FREE_ARY, (DWORD)p, type);
		}

		void epause(){
			if (currentBuildVer != PT_DEBUG_RUN_VER || eInterrupt == 0) return;
			eInterrupt(0, 0, 0);
		}

		void eprint(const char* str){
			if (currentBuildVer != PT_DEBUG_RUN_VER || eDebugPut == 0) return;

			MDATA_INF var;
			var.m_dtDataType = SDT_TEXT;
			var.m_pText = (char*)str;
			eDebugPut(0, 1, &var);
		}

		void eprintf(const char* fmt, ...){
			if (currentBuildVer != PT_DEBUG_RUN_VER || eDebugPut == 0) return;

			va_list vl;
			va_start(vl, fmt);
			char buf[1024 * 10];
			buf[1024 * 10 - 1] = 0;
			vsprintf_s(buf, sizeof(buf), fmt, vl);

			MDATA_INF var;
			var.m_dtDataType = SDT_TEXT;
			var.m_pText = buf;
			eDebugPut(0, 1, &var);
		}

		void initialize(){
			ehalcon::Core::initialize();
			eprint("启动啦...~~~");
			//init_method_custom();
			// 	FILE* fff = fopen("c:/a.txt", "wb");
			// 	for(int i = 0; i < sizeof(cmd_info) / sizeof(cmd_info[0]); ++i){
			// 		fprintf(fff, "%s\n", cmd_info[i].m_szName);
			// 	}
			// 	fclose(fff);
		}

		void uninitialize(){
			ehalcon::Core::uninitialize();

			eDebugPut = 0;
			eInterrupt = 0;
			if (kernelLibHandle != 0)
				FreeLibrary(kernelLibHandle);

			if (libraryExitFlag){
				FreeConsole();
				exit(0);
			}
		}
	}
}