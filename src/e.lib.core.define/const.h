#pragma once
#include "def.h"
#include "eDefine.h"

#define defConstText(n, v)  {    n,						NULL,   NULL,       1,  CT_TEXT,     v,						0}
#define defConstNumber(n, v)  {    n,						NULL,   NULL,       1,  CT_NUM,     0,					v}


//这个文件里面放常量
static LIB_CONST_INFO edef_ConstInfo [] =
{
	defConstNumber("视觉_数据元组_文本", valTupleString),
	defConstNumber("视觉_数据元组_双精度小数", valTupleDouble),
	defConstNumber("视觉_数据元组_整数", valTupleLong),
	defConstNumber("视觉_数据元组_未定义", valTupleUndef),

	defConstNumber("视觉_窗口位置_屏幕居中", flagWindowPoseCenter),
	defConstText("视觉_窗口模式_可视", "visible"),
	defConstText("视觉_窗口模式_不可视", "invisible"),
	defConstText("视觉_窗口模式_透明", "transparent"),
	defConstText("视觉_窗口模式_缓冲", "buffer"),
	defConstText("视觉_异常捕获模式_捕获", "give_error"),
	defConstText("视觉_异常捕获模式_无视", "~give_error"),
	defConstNumber("视觉_错误代码_无错误", errOk),

	defConstText("视觉_坐标系统_窗口", "window"),
	defConstText("视觉_坐标系统_图像", "image"),
	defConstText("视觉_颜色_白色","white"),
	defConstText("视觉_颜色_黑色","black"),
	defConstText("视觉_颜色_红色","red"),
	defConstText("视觉_颜色_绿色","green"),
	defConstText("视觉_颜色_蓝色","blue"),
	defConstText("视觉_颜色_青色","cyan"),
	defConstText("视觉_颜色_洋红","magenta"),
	defConstText("视觉_颜色_黄色","yellow"),
	defConstText("视觉_颜色_灰色朦胧", "dim gray"),
	defConstText("视觉_颜色_灰色","gray"),
	defConstText("视觉_颜色_浅灰色","light gray"),
	defConstText("视觉_颜色_中等石板蓝","medium slate blue"),
	defConstText("视觉_颜色_珊瑚","coral"),
	defConstText("视觉_颜色_石板蓝","slate blue"),
	defConstText("视觉_颜色_春绿","spring green"),
	defConstText("视觉_颜色_橘红","orange red"),
	defConstText("视觉_颜色_橙色","orange"),
	defConstText("视觉_颜色_深橄榄绿","dark olive green"),
	defConstText("视觉_颜色_粉红色","pink"),
	defConstText("视觉_颜色_藏青","cadet blue")
};