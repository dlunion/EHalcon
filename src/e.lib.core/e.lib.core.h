#pragma once
#include "def.h"

namespace elib{
	namespace Core{
		INT WINAPI onNotify(INT nMsg, DWORD dwParam1, DWORD dwParam2);
		void* emalloc(int size);
		void efree(void* p);
		void efreeArray(void* p, int type);
		void eprintf(const char* fmt, ...);
		void eprint(const char* str);
		void epause();

		void initialize();
		void uninitialize();
	}
}