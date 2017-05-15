#pragma once
#include "def.h"
#include <string>

using std::string;

#define align4(l)	(((int)(l) + 3) / 4 * 4)
#define throwHError(code, message, ...)		ehalcon::Core::throwError(__FILE__, __LINE__,__FUNCTION__, code, message, __VA_ARGS__)
#define sysLog(t, ...)							elib::Core::eprintf(t, __VA_ARGS__)

//由于需要自动释放某些对象（抛出异常后为了不影响异常）
#define autoRelease(p)						__autoRelease<void> __autoRelease_##p((void**)&p);
#define unAutoRelease(p)					{__autoRelease_##p.objptr = 0;}
#define autoReleaseTuple(p)					__autoRelease<__tuple> __autoRelease_##p((__tuple**)&p, true);

template<class _datatype>
struct __autoRelease{
	_datatype** objptr; bool isobj;
	__autoRelease(_datatype** ptr, bool obj = false) :objptr(ptr), isobj(obj){}
	~__autoRelease(){ 
		if (objptr){ 
			if (isobj) delete *objptr; 
			else free(*objptr);
		}
	}
};

namespace ehalcon{
	namespace Utils{
		void arr2TupleString(const char** v, int n, __tuple& o);
		void arr2TupleDouble(double* v, int n, __tuple& o);
		void arr2TupleLong(int* v, int n, __tuple& o);
		void tupleToString(const __tuple& t, string& str);
		int tupleGetLong(__tuple& t);
	}
}