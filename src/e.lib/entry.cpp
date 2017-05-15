
#include "e.lib.core/e.lib.core.h"
#include "e.lib.core.define/dataType.h"
#include "e.lib.core.define/const.h"
#include "e.lib.core.define/function.h"

#define _T
#define _WT

static LIB_INFO libInfo =
{
	/*库格式号*/            LIB_FORMAT_VER,  // 保留未用,库格式号,目前为20000101
	//数字签名,对应于本库的唯一GUID串，不能为NULL或空，要防止出现重复。
	/*GUID串*/              _T("B209D6CD85074ce0BF0D3A1FB41B26A3"),
	//支持库的版本信息
	/*主版本号*/            1,//本库的主版本号，必须大于0。
	/*次版本号*/            0,//本库的次版本号。
	/*构建版本号*/          0,//构建版本号。

	/*系统主版本号*/        4,//所需要易语言系统的主版本号。
	/*系统次版本号*/        0,//所需要易语言系统的次版本号。
	/*核心库主版本号*/      4,//所需要的系统核心支持库的主版本号。
	/*核心库次版本号*/      0,//所需要的系统核心支持库的次版本号。

	/*支持库名*/            _WT("Halcon12.0支持库 V1.0"),//本支持库在易IDE中显示的名称，不能为空。
	/*支持库语言*/          1,//本支持库所支持的语言，__GBK_LANG_VER为中文,
	/*详细解释*/            _WT("一起学Halcon，人工智能、机器视觉你也可以，你需要的只是会用易语言以及有这学习的心思就能搞定那些牛x的功能。这是一个永远免费的开源的一厢情愿的项目，楼主会提供和收集很多关于Halcon相关的资源，希望能通过大家一起来完善、学习和实现整个Halcon的学习流程以及问题资源等。"
	"这一切始于易语言，并不会局限于易语言。如果你也认可，欢迎进QQ群讨论：58992113，这个项目主页是：www.zifuture.com"),//关于本支持库的详细说明
	/*支持库状态*/          _LIB_OS(__OS_WIN) + NULL,//状态信息,支持库类型,缺省为NULL

	//支持库的作者信息
	/*作者姓名*/            _WT("Hope"),//作者姓名
	/*邮政编码*/            _WT(""),//邮政编码
	/*通信地址*/            _WT(""),//通信地址
	/*电话号码*/            _WT(""),//电话号码
	/*传真号码*/            _WT(""),//传真号码
	/*电子邮箱*/            _WT("512690069@qq.com"),//电子信箱
	/*主页地址*/            _WT("www.zifuture.com"),//主页地址
	/*其它信息*/            _WT("这个库封装了Halcon12.0的全部函数，欢迎加QQ群讨论：58992113"),//其它信息

	//本库中自定义类型的相关信息
	/*类型数目*/            sizeof(edef_DataTypeInfo) / sizeof(edef_DataTypeInfo[0]),//本库中自定义类型的数目，
	/*类型数组*/            edef_DataTypeInfo,//本库中所有自定义类型定义信息数组的地址指针。

	//全局命令类别信息
	/*命令数目*/        11,// 加了类别需加此值。等同于命令类别数组数目。如无则为NULL。
	/*命令类别*/        _WT("0000支持库基本函数（Library Base）\0" "0000基础框架（Foundation）\0" "0000校准（Calibration）\0" "0000一维度量（1D Metrology）\0"
	"0000二维度量（2D Metrology）\0" "0000三维度量（3D Metrology）\0" // 类别图象索引号(从1开始,0无)
	"0000条码（Bar Code）\0" "0000数据码、二维码（Data Code）\0" "0000光学字符识别（OCR/OCV）\0" "0000匹配（Matching）\0" "0000开发函数（Develop Function）\0"
	"\0"),//全局命令类别定义信息数组的地址指针。

	//本库中提供的所有命令(全局命令及对象方法)的信息
	/*命令总数*/            sizeof (elib::Function::edef_CmdInfo) / sizeof (elib::Function::edef_CmdInfo[0]),//全局命令（及对象方法）的数目。如无则为0。
	/*命令定义*/            elib::Function::edef_CmdInfo,//全局命令（及对象方法）定义信息的地址指针。如无则为NULL。
	/*命令入口*/            elib::Function::edef_CmdRun,//全局命令（及对象方法）函数的入口地址指针。如无则为NULL。

	//用作为易语言IDE提供附加功能的命令的相关信息
	/*附加功能*/            NULL,//附加功能,为易语言IDE提供附加功能的函数入口地址指针。
	/*附加说明*/            NULL,//附加命令说明,指向NULL结尾的字串,两个字符串说明一个功能。

	//提供接收来自易语言IDE或运行环境通知信息的函数
	/*接收函数*/            elib::Core::onNotify,//消息接收

	//超级模板，保留，未用
	/*超级模板*/            NULL,//超级模板,保留未用。必须为NULL
	/*模板说明*/            NULL,//超级模板说明,保留未用。必须为NULL

	//本库中定义的所有常量的信息
	/*常量数目*/            sizeof(edef_ConstInfo) / sizeof(edef_ConstInfo[0]),//本支持库中定义的常量数目。如无则为0。
	/*常量数组*/            edef_ConstInfo,//常量信息,指向常量定义数组的指针,如无则为NULL。

	//本库正常运行所需要依赖的其他文件,一般为NULL
	/*外部文件*/            0,//本库正常运行所需要依赖的其他文件，在制作安装软件时将会自动带上这些文件。
};

static int* pHalconCmdIndex = 0;			//存储halcon的cmd的索引
static int* pTupleCmdIndex = 0;				//存储tuple的cmd的索引
LIB_INFO* WINAPI GetNewInf()
{
	if (pHalconCmdIndex == 0){
		int countCmd = sizeof(elib::Function::edef_CmdInfo) / sizeof(elib::Function::edef_CmdInfo[0]) - cmdHalconBegin;
		pHalconCmdIndex = new int[countCmd];
		edef_DataTypeInfo[indexOfHalconDataType].m_nCmdCount = countCmd;
		edef_DataTypeInfo[indexOfHalconDataType].m_pnCmdsIndex = pHalconCmdIndex;
		for (int i = 0; i < countCmd; ++i)
			pHalconCmdIndex[i] = cmdHalconBegin + i;


		pTupleCmdIndex = new int[cmdTupleCount];
		edef_DataTypeInfo[indexOfTupleDataType].m_nCmdCount = cmdTupleCount;
		edef_DataTypeInfo[indexOfTupleDataType].m_pnCmdsIndex = pTupleCmdIndex;
		for (int i = 0; i < cmdTupleCount; ++i)
			pTupleCmdIndex[i] = cmdTupleBegin + i;
	}
	return &libInfo;
}

void uninitForGetNewInfo(){
	if (pHalconCmdIndex){
		delete[]pHalconCmdIndex;
		delete[]pTupleCmdIndex;
		pHalconCmdIndex = 0;
		pTupleCmdIndex = 0;
	}
}

BOOL WINAPI DllMain(
	HINSTANCE hinstDLL,  // handle to DLL module
	DWORD fdwReason,     // reason for calling function
	LPVOID lpReserved )  // reserved
{
	// Perform actions based on the reason for calling.
	switch( fdwReason ) 
	{ 
	case DLL_PROCESS_ATTACH:
		elib::Core::initialize();
		break;

	case DLL_THREAD_ATTACH:
		// Do thread-specific initialization.
		break;

	case DLL_THREAD_DETACH:
		// Do thread-specific cleanup.
		break;

	case DLL_PROCESS_DETACH:
		uninitForGetNewInfo();
		elib::Core::uninitialize();
		break;
	}
	return TRUE;  // Successful DLL_PROCESS_ATTACH.
}

void main(){
	printf("aaa");
}