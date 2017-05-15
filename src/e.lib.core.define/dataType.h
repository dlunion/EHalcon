#pragma once
#include "eDefine.h"
#include "def.h"

//定义属性，隐藏的，用户看不到
static LIB_DATA_TYPE_ELEMENT __dataTypeElements [] ={defDataTypeElement_Hide(SDT_INT, "nativePtr", 0)};

//对于数据类型的索引定义，请使用数据类型的中文名称来设置并放在这下面
#define dataTypeTuple						1		//这个是tuple的类型索引，在edef_DataTypeInfo中，以1开始数
#define dataTypeObj							2		//这个是obj的类型索引，在edef_DataTypeInfo中，以1开始数

//tuple的函数也由后边初始化的时候定义 
//static int __tupleFunc[]		= {0, 1, 2};		//这个是tuple类型的相关成员函数(构造、复制、析构)在cmd中的索引，0开始算
static int __objFunc[]			= {0, 1, 2, 3};		//这个是obj类型的相关成员函数(构造、复制、析构)在cmd中的索引，0开始算
static int __emptyFunc[]		= {6};				//这个是halcon这个类的cmd定义，这个值无效，会在Core::initialize的时候修改赋值

#define indexOfHalconDataType				2		//halcon的索引在edef_DataTypeInfo中的索引
#define indexOfTupleDataType				0		//tuple的索引在edef_DataTypeInfo中的索引

//数据类型定义
static LIB_DATA_TYPE_INFO edef_DataTypeInfo[] = 
{
	defDataType("视觉元组", "tuple", __emptyFunc, __dataTypeElements, "数据类型，与halcon交互时的所有数据以这个类型传递"),
	defDataType("视觉对象", "obj", __objFunc, __dataTypeElements, "对象类型，比如region、xld、image等对象以这个类型传递"),
	defDataType("Halcon12", "Halcon12", __emptyFunc, __dataTypeElements, "这个是根本的halcon类类型")
};