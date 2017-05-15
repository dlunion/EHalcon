#pragma once

#include "def.h"
#include "e.lib.core.define/dataType.h"
#include "e.lib.core/e.lib.core.h"

using namespace std;

//当提供的是一个变量类型时，这几个宏是取得类型指针和类型对象的
#define varp_obj(n)					(*(__obj**)*a[n].m_pInt)			//获取对象指针
#define varp_tuple(n)				(*(__tuple**)*a[n].m_pInt)			//获取对象指针
#define var_obj(n)					(**(__obj**)*a[n].m_pInt)			//获取对象实体
#define var_tuple(n)				(**(__tuple**)*a[n].m_pInt)			//获取对象实体

//当提供的对象非变量类型时
#define ptr_obj(n)					((__obj*)*a[n].m_pInt)				//获取对象指针
#define ptr_tuple(n)				((__tuple*)*a[n].m_pInt)			//获取tuple指针
#define a_obj(n)					(*ptr_obj(n))						//获取对象引用
#define a_tuple(n)					(*ptr_tuple(n))						//获取tuple引用
#define v_double(n)					(a[n].m_double)
#define v_float(n)					(a[n].m_float)
#define v_string(n)					(a[n].m_pText)
#define v_int(n)					(a[n].m_int)
#define v_bin(n)					(a[n].m_pBin)
#define v_bool(n)					(a[n].m_bool)
#define v_short(n)					(a[n].m_short)
#define v_byte(n)					(a[n].m_byte)
#define v_type(n)					(a[n].m_dtDataType)
#define v_empty(n)					(a[n].m_dtDataType==_SDT_NULL)

#define rv_bin						(r->m_pBin)
#define rv_double					(r->m_double)
#define rv_string					(r->m_pText)
#define rv_int						(r->m_int)
#define rv_bool						(r->m_bool)
#define rv_short					(r->m_short)

//为返回值设置一个tuple值
#define rv_tupleset(tuplePtr)		{r->m_dtDataType = dataTypeTuple;r->m_pInt = (int*)elib::Core::emalloc(sizeof(int));*r->m_pInt = (int)tuplePtr;}

//为返回值设置一个obj值
#define rv_objset(objPtr)			{r->m_dtDataType = dataTypeObj;r->m_pInt = (int*)elib::Core::emalloc(sizeof(int));*r->m_pInt = (int)objPtr;}

//tuple value
#define tv(n, i)					(a_tuple(n)[i])						//获取tuple的值
#define tv_type(n, i)				(tv(n, i).ValType())				//获取tuple的类型
#define tv_double(n, i)				(tv(n, i).D())						//获取tuple的指定元素double值
#define tv_string(n, i)				(tv(n, i).S())						//获取tuple的指定元素string值
#define tv_int(n, i)				(tv(n, i).I())						//获取tuple的指定元素int值
#define tv_count(n)					(ptr_tuple(n)->Num())				//获取tuple的元素总数
#define sysLog(t, ...)					elib::Core::eprintf(t, __VA_ARGS__)

namespace elib{
	namespace Utils{
		int dataTypeBytesSize(int dt);
		int makeEText(const char* t);
		void fillVar(__tuple& v, PMDATA_INF a);
		void fillTuple(PMDATA_INF a, __tuple& t);
		void printTuple(__tuple& v);
		void printObjectInfo(__obj& obj, int idx);
	}
}