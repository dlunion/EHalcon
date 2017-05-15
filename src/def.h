#pragma once
#include <windows.h>
#include <lib2.h>
#include "Halconc.h"
#include "Halconcpp.h"

#pragma comment(lib, "user32.lib")
#pragma comment(lib, "halcon.lib")
#pragma comment(lib, "halconc.lib")
//#pragma comment(lib, "halconcpp.lib")
#pragma comment(lib, "halconcpp10.lib")

#define flagWindowPoseCenter							0x000F0000		//窗口位置屏幕居中
#define flagWindowActivityID							-1				//当前激活敞口ID

#define valTupleString									((int)Halcon::StringVal)
#define valTupleDouble									((int)Halcon::DoubleVal)
#define valTupleLong									((int)Halcon::LongVal)
#define valTupleUndef									((int)Halcon::UndefVal)

//debug config，调试配置
#define flagDebugErrorinterrupt				0			//发生错误暂停

#define flagDebugOpen						1			//确定启用
#define flagDebugClose						0			//不启用


//定义错误的时候，运行时错误输出消息格式
#define errOutRuntime(err, message)			"发生错误(编号 = %d, 所处函数 = %s)：%s", err, __FUNCTION__, message
#define errOk									2
#define errErr									0
#define errBase								0x10000000
#define errUnknownType						(errBase+1)			//未知的类型
#define errUnsupportValue					(errBase+2)			//不支持的值

//这一段代码是移除调用函数中的this指针并减少参数个数
#define offsetRemoveThisPtr					{a++; c--;}

#define inClassHalcon		-1

typedef Halcon::HTuple __tuple;
typedef Halcon::Hobject __obj;
typedef const Halcon::HException __hException;


//定义是否使用opencv的解码器，如果不使用，则解码部分不支持其他格式，只支持bmp
#define USE_OPENCV