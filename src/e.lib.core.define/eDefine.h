#pragma once

#define _T
#define _WT

//参数的定义
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
//def_argx
#define defArg(name, dataType, defaultValue, mask, descriptor)	\
{\
	/*参数名称*/name, \
	/*参数解释*/descriptor, \
	/*图像索引*/0, \
	/*图像数目*/0, \
	/*DATA_TYPE*/dataType, \
	/*默认值*/defaultValue, \
	/*mask*/mask\
}

//定义参数，允许为空
#define defArg_Empty(name, dataType, descriptor)	\
{\
	/*参数名称*/name, \
	/*参数解释*/descriptor, \
	/*图像索引*/0, \
	/*图像数目*/0, \
	/*DATA_TYPE*/dataType, \
	/*默认值*/0, \
	/*mask*/AS_DEFAULT_VALUE_IS_EMPTY\
}

//定义个参数，类型为ALL，无默认值，接受变量输入，默认值为空
//输出值用的
#define defArg_OutputValue(name, descriptor)	\
{\
	/*参数名称*/name, \
	/*参数解释*/descriptor, \
	/*图像索引*/0, \
	/*图像数目*/0, \
	/*DATA_TYPE*/_SDT_ALL, \
	/*默认值*/0, \
	/*mask*/AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_VAR\
}

//定义个参数，无默认值，接受变量输入，默认值为空
//输出obj用的
#define defArg_OutputObj(name, descriptor)	\
{\
	/*参数名称*/name, \
	/*参数解释*/descriptor, \
	/*图像索引*/0, \
	/*图像数目*/0, \
	/*DATA_TYPE*/ dataTypeObj, \
	/*默认值*/0, \
	/*mask*/AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_VAR\
}

//定义个参数，无默认值，接受变量输入，默认值为空
//输出Tuple用的
#define defArg_OutputTuple(name, descriptor)	\
{\
	/*参数名称*/name, \
	/*参数解释*/descriptor, \
	/*图像索引*/0, \
	/*图像数目*/0, \
	/*DATA_TYPE*/ dataTypeTuple, \
	/*默认值*/0, \
	/*mask*/AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_VAR\
}

//定义个参数，无默认值，接受变量输入，默认值为空
//输出obj用的
#define defArg_InputObj(name, descriptor)	\
{\
	/*参数名称*/name, \
	/*参数解释*/descriptor, \
	/*图像索引*/0, \
	/*图像数目*/0, \
	/*DATA_TYPE*/ dataTypeObj, \
	/*默认值*/0, \
	/*mask*/0\
}

//定义个参数，无默认值，接受变量输入，默认值为空
//输出Tuple用的
#define defArg_InputTuple(name, descriptor)	\
{\
	/*参数名称*/name, \
	/*参数解释*/descriptor, \
	/*图像索引*/0, \
	/*图像数目*/0, \
	/*DATA_TYPE*/ dataTypeTuple, \
	/*默认值*/0, \
	/*mask*/0\
}

#define defArg_InputValue(name, dataType, descriptor)	\
{\
	/*参数名称*/name, \
	/*参数解释*/descriptor, \
	/*图像索引*/0, \
	/*图像数目*/0, \
	/*DATA_TYPE*/dataType, \
	/*默认值*/0, \
	/*mask*/0\
}

//定义一个参数，接受任何类型数组和非数组
// AS_DEFAULT_VALUE_IS_EMPTY|AS_RECEIVE_ALL_TYPE_DATA
#define defArg_InputAllTypeOrArray(name, descriptor)	\
{\
	/*参数名称*/name, \
	/*参数解释*/descriptor, \
	/*图像索引*/0, \
	/*图像数目*/0, \
	/*DATA_TYPE*/_SDT_ALL, \
	/*默认值*/0, \
	/*mask*/ AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_ALL_TYPE_DATA\
}
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////



//函数的定义
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
//带参数的函数(def_methodarg_cc)
#define defMethod_TakeArgs(inClass, returnType, args, chName, enName, descriptor)		\
	{ \
	/*中文名称*/	_WT(chName), \
	/*英文名称*/	_WT(enName), \
	/*详细解释*/	_WT(descriptor), \
	/*所属类别*/	-1/*inClass*/, \
	/*命令状态*/	_CMD_OS(__OS_WIN) + NULL, \
	/*返回类型*/	returnType, \
	/*此值保留*/	0, \
	/*学习难度*/	LVL_SIMPLE, \
	/*图像索引*/	0, \
	/*图像数目*/	0, \
	/*参数个数*/	sizeof(args) / sizeof(args[0]), \
	/*参数信息*/	args, \
	}

#define defMethod_Halcon(args, chName, enName, descriptor)		\
	{ \
	/*中文名称*/	_WT(chName), \
	/*英文名称*/	_WT(enName), \
	/*详细解释*/	_WT(descriptor), \
	/*所属类别*/ - 1/*inClass*/, \
	/*命令状态*/	_CMD_OS(__OS_WIN) + NULL, \
	/*返回类型*/	SDT_INT, \
	/*此值保留*/	0, \
	/*学习难度*/	LVL_SIMPLE, \
	/*图像索引*/	0, \
	/*图像数目*/	0, \
	/*参数个数*/	sizeof(args) / sizeof(args[0]), \
	/*参数信息*/	args, \
}

#define defMethod_HalconNoArg(chName, enName, descriptor)		\
	{ \
	/*中文名称*/	_WT(chName), \
	/*英文名称*/	_WT(enName), \
	/*详细解释*/	_WT(descriptor), \
	/*所属类别*/ - 1/*inClass*/, \
	/*命令状态*/	_CMD_OS(__OS_WIN) + NULL, \
	/*返回类型*/	SDT_INT, \
	/*此值保留*/	0, \
	/*学习难度*/	LVL_SIMPLE, \
	/*图像索引*/	0, \
	/*图像数目*/	0, \
	/*参数个数*/	0, \
	/*参数信息*/	0, \
	}

//定义函数，原本的
#define defMethod_Raw(inClass, statusMask, returnType, args, chName, enName, descriptor)		\
	{ \
	/*中文名称*/	_WT(chName), \
	/*英文名称*/	_WT(enName), \
	/*详细解释*/	_WT(descriptor), \
	/*所属类别*/	-1/*inClass*/, \
	/*命令状态*/	_CMD_OS(__OS_WIN) + statusMask, \
	/*返回类型*/	returnType, \
	/*此值保留*/	0, \
	/*学习难度*/	LVL_SIMPLE, \
	/*图像索引*/	0, \
	/*图像数目*/	0, \
	/*参数个数*/	sizeof(args) / sizeof(args[0]), \
	/*参数信息*/	args, \
}

//没有参数的(def_method_cc)
#define defMethod(inClass, returnType, chName, enName, descriptor)		\
	{ \
	/*中文名称*/	_WT(chName), \
	/*英文名称*/	_WT(enName), \
	/*详细解释*/	_WT(descriptor), \
	/*所属类别*/	-1/*inClass*/, \
	/*命令状态*/	_CMD_OS(__OS_WIN) + NULL, \
	/*返回类型*/	returnType, \
	/*此值保留*/	0, \
	/*学习难度*/	LVL_SIMPLE, \
	/*图像索引*/	0, \
	/*图像数目*/	0, \
	/*参数个数*/	0, \
	/*参数信息*/	0, \
}

//带参数的，发布模式无效(def_methodarg_cc_disablerelease)
#define defMethod_TakeArgs_DisabledInRelease(inClass, returnType, args, chName, enName, descriptor)		\
{ \
	/*中文名称*/	_WT(chName), \
	/*英文名称*/	_WT(enName), \
	/*详细解释*/	_WT(descriptor), \
	/*所属类别*/	-1/*inClass*/, \
	/*命令状态*/	_CMD_OS(__OS_WIN) + CT_DISABLED_IN_RELEASE, \
	/*返回类型*/	returnType, \
	/*此值保留*/	0, \
	/*学习难度*/	LVL_SIMPLE, \
	/*图像索引*/	0, \
	/*图像数目*/	0, \
	/*参数个数*/	sizeof(args) / sizeof(args[0]), \
	/*参数信息*/	args, \
	}

//没有参数的，发布模式无效的(def_method_cc_disablerelease)
#define defMethod_DisabledInRelease(inClass, returnType, chName, enName, descriptor)		\
{ \
	/*中文名称*/	_WT(chName), \
	/*英文名称*/	_WT(enName), \
	/*详细解释*/	_WT(descriptor), \
	/*所属类别*/	-1/*inClass*/, \
	/*命令状态*/	_CMD_OS(__OS_WIN) + CT_DISABLED_IN_RELEASE, \
	/*返回类型*/	returnType, \
	/*此值保留*/	0, \
	/*学习难度*/	LVL_SIMPLE, \
	/*图像索引*/	0, \
	/*图像数目*/	0, \
	/*参数个数*/	0, \
	/*参数信息*/	0, \
}

//动态参数类型的
#define defMethod_DynamicParemeter(inClass, returnType, args, chName, enName, descriptor)		\
	{ \
	/*中文名称*/	_WT(chName), \
	/*英文名称*/	_WT(enName), \
	/*详细解释*/	_WT(descriptor), \
	/*所属类别*/	-1/*inClass*/, \
	/*命令状态*/	_CMD_OS(__OS_WIN) + CT_ALLOW_APPEND_NEW_ARG, \
	/*返回类型*/	returnType, \
	/*此值保留*/	0, \
	/*学习难度*/	LVL_SIMPLE, \
	/*图像索引*/	0, \
	/*图像数目*/	0, \
	/*参数个数*/	sizeof(args) / sizeof(args[0]), \
	/*参数信息*/	args, \
	}

//拷贝函数
#define defMemberMethod_Copy(args, chName, enName, descriptor)		\
	{ \
	/*中文名称*/	_WT(chName), \
	/*英文名称*/	_WT(enName), \
	/*详细解释*/	_WT(descriptor), \
	/*所属类别*/	-1, \
	/*命令状态*/	_CMD_OS(__OS_WIN) + CT_IS_OBJ_COPY_CMD + CT_IS_HIDED, \
	/*返回类型*/	_SDT_NULL, \
	/*此值保留*/	0, \
	/*学习难度*/	LVL_SIMPLE, \
	/*图像索引*/	0, \
	/*图像数目*/	0, \
	/*参数个数*/	sizeof(args) / sizeof(args[0]), \
	/*参数信息*/	args, \
}

//构造函数
#define defMemberMethod_Consturct(chName, enName, descriptor)		\
	{ \
	/*中文名称*/	_WT(chName), \
	/*英文名称*/	_WT(enName), \
	/*详细解释*/	_WT(descriptor), \
	/*所属类别*/	-1, \
	/*命令状态*/	_CMD_OS(__OS_WIN) + CT_IS_OBJ_CONSTURCT_CMD + CT_IS_HIDED, \
	/*返回类型*/	_SDT_NULL, \
	/*此值保留*/	0, \
	/*学习难度*/	LVL_SIMPLE, \
	/*图像索引*/	0, \
	/*图像数目*/	0, \
	/*参数个数*/	0, \
	/*参数信息*/	0, \
	}

//析构函数
#define defMemberMethod_Destructor(chName, enName, descriptor)		\
	{ \
	/*中文名称*/	_WT(chName), \
	/*英文名称*/	_WT(enName), \
	/*详细解释*/	_WT(descriptor), \
	/*所属类别*/	-1, \
	/*命令状态*/	_CMD_OS(__OS_WIN) + CT_IS_OBJ_FREE_CMD + CT_IS_HIDED, \
	/*返回类型*/	_SDT_NULL, \
	/*此值保留*/	0, \
	/*学习难度*/	LVL_SIMPLE, \
	/*图像索引*/	0, \
	/*图像数目*/	0, \
	/*参数个数*/	0, \
	/*参数信息*/	0, \
}
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////


//数据类型的定义
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
//定义数据类型的成员，隐藏的用户看不到
#define defDataTypeElement_Hide(dataType, name, descriptor)		\
{\
	/*m_dtType*/            dataType, \
	/*m_pArySpec*/          NULL, \
	/*m_szName*/            _T(name), \
	/*m_szEgName*/          _T(name), \
	/*m_szExplain*/         _T(descriptor), \
	/*m_dwState*/           LES_HIDED, \
	/*m_nDefault*/          0, \
	}

//定义数据类型
#define defDataType(chName, enName, cmdsIndex, elements, descriptor)			\
		{\
		/*m_szName*/                _T(chName), \
		/*m_szEgName*/              _T(enName), \
		/*m_szExplain*/             descriptor, \
		/*m_nCmdCount*/             sizeof(cmdsIndex) / sizeof(cmdsIndex[0]), \
		/*m_pnCmdsIndex*/			cmdsIndex, \
		/*m_dwState*/               _DT_OS(__OS_WIN), \
		/*m_dwUnitBmpID*/           0, \
		/*m_nEventCount*/           0, \
		/*m_pEventBegin*/           NULL, \
		/*m_nPropertyCount*/        0, \
		/*m_pPropertyBegin*/        NULL, \
		/*m_pfnGetInterface*/       NULL, \
		/*m_nElementCount*/         sizeof (elements) / sizeof (elements[0]), \
		/*m_pElementBegin*/         elements\
}
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////