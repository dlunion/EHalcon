#pragma once
#include "def.h"

namespace ehalcon{
	namespace Core{
		bool isPauseForError();
		void throwError(const char* file, int line, const char* func, int code, const char* message, ...);
		void setSystemCheckErrorVar(__tuple* var);
		void setSystemCheckError(Hlong err);
		void setErrorCallback(int callbackPtr);
		void setDebugPauseFlagInError(bool isUsed);

		__tuple* newTuple();
		__obj* newObj();
		void freeTuple(__tuple** pptr);
		void freeObj(__obj** pptr);

		void initialize();
		void uninitialize();
	}
}