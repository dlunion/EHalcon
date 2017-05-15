#pragma once
#include "def.h"
#include "eDefine.h"
#include "dataType.h"

#define defARGINFO		static ARG_INFO

defARGINFO __argTupleCopy[] = { defArg_InputTuple("this", "") };
defARGINFO __argObjCopy[] = { defArg_InputObj("this", "") };
defARGINFO __argShowObj[] = {
	defArg_InputObj("需要显示的对象", "对象"),
	defArg_Empty("窗口名称", SDT_TEXT, "默认为空，则表示固定名称为：\"显示对象\"。输入窗口名称，作为标识，如果该标识的窗口已经显示则操作这个窗口")
};
defARGINFO __argGetWindowIdFromName[] = {
	defArg_Empty("窗口名称", SDT_TEXT, "默认为空，则表示固定名称为：\"显示对象\"。输入窗口名称，返回该窗口的id")
};
defARGINFO __argConfig[] = { defArg_Empty("启用吗？", SDT_BOOL, "默认为真。如果指定为真，则当发生错误时会暂停程序，相当于打断点了，否则不会") };
defARGINFO __argset_err_callback[] = { defArg_InputValue("回调函数指针", SDT_SUB_PTR, "指定一个函数回调指针，当错误发生的时候，这个函数应该具备两个参数(否则会挂掉喔)，一个是整数型，错误代码。另一个是文本型，错误消息。") };
defARGINFO __arggen_tuple[] = { defArg_InputAllTypeOrArray("数值", "输入双精度、小数、整数、文本、逻辑、数组、htuple都是可以哒") };
defARGINFO __argtuple_sdl[] = {defArg("数值", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "输入一个值"),  defArg("索引", SDT_INT, 0, AS_DEFAULT_VALUE_IS_EMPTY, "输入需要获取元素的索引值，0开始算啊，别搞错了")};
defARGINFO __argtuple_single_param[] = {defArg("数据元组", dataTypeTuple, 0, 0, "输入一个数据元组类型值")};
defARGINFO __argall_single_param[] = {defArg("值", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "输入一个值")};
defARGINFO __argobj_single_param[] = {defArg("操作对象", dataTypeObj, 0, 0, "输入一个操作对象")};
defARGINFO __argtuple_setter[] = {defArg("数据元组", dataTypeTuple, 0, AS_RECEIVE_VAR, "输入一个数据元组类型值"), defArg("索引", SDT_INT, 0, AS_DEFAULT_VALUE_IS_EMPTY, "输入修改元素的索引，0开始"), defArg("新值", _SDT_ALL, 0, 0, "输入新的值，可以是tuple类型（如果有多个元素则只取第0个）或者其他值")};

//如果定义了opencv解码器，那么解码图像格式丰富，否则只支持bmp
#ifdef USE_OPENCV
	defARGINFO __argcvt_bytes2hImage[] = { defArg("图像字节集", SDT_BIN, 0, 0, "输入一个图像的字节集"), defArg("产生后的通道数", SDT_INT, 0, 0, "输入产生后的图像通道数，如果图像通道不相等会做转换的"), defArg("图像对象存储", dataTypeObj, 0, AS_RECEIVE_VAR, "输入存储图像的对象") };
	//defARGINFO __argcvt_hImage2bmp[] = {defArg("obj图像对象", dataTypeObj, 0, 0, "输入一个obj图像对象"), defArg("存储bmp图像的变量", SDT_BIN, 0, AS_RECEIVE_VAR, "输入变量用来存储BMP图像哟，注意如果是已有对象，则重复存储效率比2号函数高不少呢")};
	defARGINFO __argcvt_hImage2bytes[] = { defArg("视觉对象", dataTypeObj, 0, 0, "输入一个图像的视觉对象"), defArg("图像结果图像格式", SDT_TEXT, 0, 0, "保存的图像字节集的格式，支持：jpg、png、tif、bmp") };
#else
	defARGINFO __argcvt_bytes2hImage[] = { defArg("图像字节集", SDT_BIN, 0, 0, "输入一个bmp的字节集"), defArg("产生后的通道数", SDT_INT, 0, 0, "输入产生后的图像通道数，如果bmp通道不相等会做转换的"), defArg("图像对象存储", dataTypeObj, 0, AS_RECEIVE_VAR, "输入存储图像的对象") };
	//defARGINFO __argcvt_hImage2bmp[] = {defArg("obj图像对象", dataTypeObj, 0, 0, "输入一个obj图像对象"), defArg("存储bmp图像的变量", SDT_BIN, 0, AS_RECEIVE_VAR, "输入变量用来存储BMP图像哟，注意如果是已有对象，则重复存储效率比2号函数高不少呢")};
	defARGINFO __argcvt_hImage2bytes[] = { defArg("视觉对象", dataTypeObj, 0, 0, "输入一个图像的视觉对象") };
#endif

defARGINFO __argx_set[] = {defArg("新值", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "输入双精度、小数、整数、文本、逻辑、数组、htuple都是可以哒")};
defARGINFO __argx_2tuple[] = {defArg("左值", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "输入双精度、小数、整数、文本、逻辑、数组、htuple都是可以哒"), defArg("右值", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "输入双精度、小数、整数、文本、逻辑、数组、htuple都是可以哒")};
defARGINFO __arggen_tuple_const[] = { defArg("个数", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, ""), defArg("值", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "") };
defARGINFO __argx_get_value_range[] = {
	defArg("范围起点", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "输入整数"), 
	defArg("范围终点", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "输入整数")
};
defARGINFO arg_dev_set_part[] = {defArg("Row1", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY|AS_RECEIVE_ALL_TYPE_DATA, " 【默认值】：0 sem_type：rectangle.origin.y 【允许值类型】：integer【描述】：Row of the upper left corner of the chosen image part."),defArg("Column1", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY|AS_RECEIVE_ALL_TYPE_DATA, " 【默认值】：0 sem_type：rectangle.origin.x 【允许值类型】：integer【描述】：Column of the upper left corner of the chosen image part."),defArg("Row2", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY|AS_RECEIVE_ALL_TYPE_DATA, " 【默认值】：-1 【限制】：(Row2 >= Row1) || (Row2 == -1) sem_type：rectangle.corner.y 【允许值类型】：integer【描述】：Row of the lower right corner of the chosen image part."),defArg("Column2", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY|AS_RECEIVE_ALL_TYPE_DATA, " 【默认值】：-1 【限制】：(Column2 >= Column1) || (Column2 == -1) sem_type：rectangle.corner.x 【允许值类型】：integer【描述】：Column of the lower right corner of the chosen image part.")};
defARGINFO __argwait_key[] = {defArg("需要等待的时间ms", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY|AS_RECEIVE_ALL_TYPE_DATA, "默认为0即等待按下键后再继续，时间单位是毫秒，如果指定时间内没有按下键则不会继续等待")};
defARGINFO __argdev_display_shape_matching_results[] = {
	defArg("模型ID", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "需要显示的形状模型的ID组"),// IDs of the shape models for which the results should be displayed
	defArg("可视化颜色", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "匹配结果的可视化颜色，默认值：'red'，建议值：'red', 'green', 'blue', ['red','green','blue'], ['red','green','blue','cyan','magenta','yellow']"),
	defArg("行y", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "模型实例展示的行坐标"),//Row coordinate of the found instances of the models
	defArg("列x", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "模型实例展示的列坐标"),
	defArg("角度", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "模型实例展示时旋转的角度"),//Rotation angle of the found instances of the models
	defArg("行y缩放比例", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "默认为1.0，模型的行方向上的缩放比例"),//Default Value: 1.0，Scale of the found instances of the models inthe row direction
	defArg("列x缩放比例", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "默认为1.0，模型的列方向上的缩放比例"), //Default Value : 1.0，Scale of the found instances of the models inthe column direction"),
	defArg("模型索引", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "默认为0，需要显示的模型实例索引")//Default Value: 0，Index of the found instances of the models
};
defARGINFO __argdev_open_window_fit_image[] = {
	defArg("显示的图像", dataTypeObj, 0, 0, "Image to the size of which the new window is adapted."),
	defArg("y(Row)", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 0，建议值: 0, 10, 50, 100, 150, 200, 500，Row coordinate of the upper left corner of the new window."),
	defArg("x(Column)", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 0，建议值: 0, 10, 50, 100, 150, 200, 500，Column coordinate of the upper left corner of the new window."),
	defArg("宽度限制", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: -1，建议值: 300, 400, 500, 600, 800, 1000, [300,600], [500,800]，Limit for the window width."),
	defArg("高度限制", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: -1，建议值: 300, 400, 500, 600, 800, 1000, [400,600], [500,800]，Limit for the window height."),
	defArg("保存窗口ID", _SDT_ALL, 0, AS_RECEIVE_VAR | AS_DEFAULT_VALUE_IS_EMPTY, "The window handle of the new graphics window.")
};
defARGINFO __argdev_open_window_fit_size[] = {
	defArg("y(Row)", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 0，建议值: 0, 10, 50, 100, 150, 200, 500，Row coordinate of the upper left corner of the new window."),
	defArg("x(Column)", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 0，建议值: 0, 10, 50, 100, 150, 200, 500，Column coordinate of the upper left corner of the new window."),
	defArg("宽度", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "建议值: 640, 800, 1024, 1280, 1400, 1600, 2048, 2800, 3200, 6400，The width of the image to be displayed."),
	defArg("高度", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "建议值: 480, 600, 768, 960, 1050, 1200, 1536, 2100, 2400, 4800，The height of the image to be displayed."),
	defArg("宽度限制", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: -1，建议值: 300, 400, 500, 600, 800, 1000, [300,600], [500,800]，Limit for the window width."),
	defArg("高度限制", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: -1，建议值: 300, 400, 500, 600, 800, 1000, [400,600], [500,800]，Limit for the window height."),
	defArg("保存窗口ID", _SDT_ALL, 0, AS_RECEIVE_VAR | AS_DEFAULT_VALUE_IS_EMPTY, "The window handle of the new graphics window.")
};
defARGINFO __argdev_resize_window_fit_image[] = {
	defArg("图像", dataTypeObj, 0, 0, "Image to the size of which the window is adapted."),
	defArg("y(Row)", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 0，建议值: 0, 10, 50, 100, 150, 200, 500，Row coordinate of the upper left corner of the new window."),
	defArg("x(Column)", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 0，建议值: 0, 10, 50, 100, 150, 200, 500，Column coordinate of the upper left corner of the new window."),
	defArg("宽度限制", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: -1，建议值: 300, 400, 500, 600, 800, 1000, [300,600], [500,800]，Limit for the window width."),
	defArg("高度限制", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: -1，建议值: 300, 400, 500, 600, 800, 1000, [400,600], [500,800]，Limit for the window height."),
	defArg("保存窗口ID", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "The window handle of the new graphics window.")
};
defARGINFO __argdev_resize_window_fit_size[] = {
	defArg("y(Row)", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 0，建议值: 0, 10, 50, 100, 150, 200, 500，Row coordinate of the upper left corner of the new window."),
	defArg("x(Column)", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 0，建议值: 0, 10, 50, 100, 150, 200, 500，Column coordinate of the upper left corner of the new window."),
	defArg("宽度", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "建议值: 640, 800, 1024, 1280, 1400, 1600, 2048, 2800, 3200, 6400，The width of the image to be displayed."),
	defArg("高度", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "建议值: 480, 600, 768, 960, 1050, 1200, 1536, 2100, 2400, 4800，The height of the image to be displayed."),
	defArg("宽度限制", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: -1，建议值: 300, 400, 500, 600, 800, 1000, [300,600], [500,800]，Limit for the window width."),
	defArg("高度限制", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: -1，建议值: 300, 400, 500, 600, 800, 1000, [400,600], [500,800]，Limit for the window height."),
	defArg("保存窗口ID", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "The window handle of the new graphics window.")
};
defARGINFO __argdisp_3d_coord_system[] = {
	defArg("保存窗口ID", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "The window where the coordinate system shall be displayed"),
	defArg("相机参数", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: [0.012,0.0,5e-6,5e-6,320,240,640,480]，Interior camera parameters"),
	defArg("姿态", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: [0.0,0.0,1.0,0.0,0.0,0.0,0]，The pose to be displayed"),
	defArg("坐标轴长度", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "Default Value: 0.05，建议值: 0.01, 0.02, 0.05, 0.1, 0.2, 0.5，The length of the coordinate axes in world coordinates.")
};	
defARGINFO __arggen_arrow_contour_xld[] = {
	defArg("Arrow", dataTypeObj, 0, AS_RECEIVE_VAR, "The generated xld"),
	defArg("Row1", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 100，The row coordinate of the starting point"),
	defArg("Column1", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 100，The column coordinate of the starting point"),
	defArg("Row2", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 200，The row coordinate of the end point"),
	defArg("Column2", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 200，The column coordinate of the end point"),
	defArg("HeadLength", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 5，建议值: [2,3,5,10,20]，The length of the arrow head in pixels"),
	defArg("HeadWidth", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 5，建议值: [2,3,5,10,20]，The width of the arrow head in pixels")
};	
defARGINFO __arglist_image_files[] = {
	defArg("ImageDirectory", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "The image directory"),
	defArg("Extensions", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 'default'，建议值: 'ima', 'bmp', 'jpg', 'png', 'tiff', 'tif', 'gif', 'jpeg', 'pcx', 'pgm', 'ppm', 'pbm', 'xwd', 'pnm'，A string tuple containing the extensions to be found e.g. ['png','tif',jpg'] or others"),
	defArg("Options", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: []，建议值: 'recursive', 'follow_links', 'max_depth 5'，Processing options"),
	defArg("ImageFiles", _SDT_ALL, 0, AS_RECEIVE_VAR | AS_DEFAULT_VALUE_IS_EMPTY, "A tuple of all found image file names")
};	
defARGINFO __argparse_filename[] = {
	defArg("FileName", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "The input filename"),
	defArg("BaseName", _SDT_ALL, 0, AS_RECEIVE_VAR | AS_DEFAULT_VALUE_IS_EMPTY, "The filename without directory description and file extension"),
	defArg("Extension", _SDT_ALL, 0, AS_RECEIVE_VAR | AS_DEFAULT_VALUE_IS_EMPTY, "The file extension"),
	defArg("Directory", _SDT_ALL, 0, AS_RECEIVE_VAR | AS_DEFAULT_VALUE_IS_EMPTY, "The directory path")
};	
defARGINFO __argscale_image_range[] = {
	defArg("Image", dataTypeObj, 0, 0, "The input image to be scaled"),
	defArg("ImageScaled", dataTypeObj, 0, AS_RECEIVE_VAR, "The scaled output image"),
	defArg("Min", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 100，The minimum gray value which will be mapped to 0. If a tuple with two values is given, the first value will be mapped to the second value."),
	defArg("Max", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 200，The maximum gray value which will be mapped to 255. If a tuple with two values is given, the first value will be mapped to the second value.")
};	
defARGINFO __argsort_pairs[] = {
	defArg("T1", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "First input tuple of the pair, which shall be sorted."),
	defArg("T2", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Second input tuple of the pair, which shall be sorted."),
	defArg("SortMode", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: '1'，建议值: '1', '2', If set to '1'， sort by the first tuple, if set to '2', sort by the second tuple. "),
	defArg("Sorted1", _SDT_ALL, 0, AS_RECEIVE_VAR | AS_DEFAULT_VALUE_IS_EMPTY, "The first sorted output tuple (corresponding to the input tuple T1)"),
	defArg("Sorted2", _SDT_ALL, 0, AS_RECEIVE_VAR | AS_DEFAULT_VALUE_IS_EMPTY, "The second sorted output tuple (corresponding to the input tuple T2)")
};	
defARGINFO __argtuple_gen_sequence[] = {
	defArg("Start", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 1.0，Start value of the tuple"),
	defArg("End", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 10.0，Maximum value for the last entry. Note, that the last entry of the resulting tuple may be less than End."),
	defArg("Step", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default Value: 1.0，Increment value")
};	
//////////////////////////////////////////////////////////////////////////


defARGINFO __argopen_window[] =
{
	defArg("行(y)", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "开启的窗口的y轴坐标，#视_窗口位置_屏幕居中 则按照fatherwindow计算中央位置，算上高度"),
	defArg("列(x)", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "开启的窗口的x轴坐标，#视_窗口位置_屏幕居中 则按照fatherwindow计算中央位置，算上宽度"),
	defArg("宽度", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "开启的窗口的宽度，默认256"),
	defArg("高度", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "开启的窗口的高度，默认256"),
	defArg("父窗口句柄", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "指定窗口的父窗句柄，如果为0则没有父窗"),
	defArg("模式", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "开启的窗口的x轴坐标，请使用#窗口模式_xxx常量，默认为空即为#窗口模式_可视"),
	defArg("机器名", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "指定需要在指定机器上打开的名称，其他情况为空白"),
	defArg("输出的窗口ID", SDT_INT, 0, AS_RECEIVE_VAR | AS_DEFAULT_VALUE_IS_EMPTY, "指定存储输出的窗口ID")
};
defARGINFO __argos_window_hand[] = {defArg("窗口id", SDT_INT, 0, 0, "输入需要获取的窗口id")};
defARGINFO __argdev_open_window[] =
{
	defArg("行(y)", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "开启的窗口的y轴坐标，#窗口位置_屏幕居中 则按照fatherwindow计算中央位置，算上高度"),
	defArg("列(x)", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "开启的窗口的x轴坐标，#窗口位置_屏幕居中 则按照fatherwindow计算中央位置，算上宽度"),
	defArg("宽度", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "开启的窗口的宽度"),
	defArg("高度", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "开启的窗口的高度"),
	defArg("背景色", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "设定窗口的背景色"),
	defArg("输出的窗口ID", _SDT_ALL, 0, AS_RECEIVE_VAR | AS_DEFAULT_VALUE_IS_EMPTY, "指定存储输出的窗口ID")
};
defARGINFO __argdev_set_draw[] = {defArg("模式", _SDT_ALL, (int)"fill", AS_DEFAULT_VALUE_IS_EMPTY, "默认为填充色，支持fill填充模式、margin线框模式")};
defARGINFO __argdev_set_color[] = {defArg("颜色", _SDT_ALL, (int)"white", AS_DEFAULT_VALUE_IS_EMPTY, " 默认白色，支持：'white', 'black', 'gray', 'red', 'green', 'blue'")};
defARGINFO __argdev_set_line_width[] = {defArg("宽度", _SDT_ALL, 1, AS_DEFAULT_VALUE_IS_EMPTY, "默认1，要求 >= 1")};
defARGINFO __argset_display_font[] = {
	defArg("窗口id", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "窗口id，可以为空，则为当前active窗口"),
	defArg("尺寸", _SDT_ALL, 16, AS_DEFAULT_VALUE_IS_EMPTY, "字体尺寸大小"),
	defArg("字体", _SDT_ALL, (int)"mono", AS_DEFAULT_VALUE_IS_EMPTY, "字体"),
	defArg("加粗", _SDT_ALL, (int)"true", AS_DEFAULT_VALUE_IS_EMPTY, "字体是否加粗"),
	defArg("斜体", _SDT_ALL, (int)"false", AS_DEFAULT_VALUE_IS_EMPTY, "字体是否倾斜")
};
defARGINFO __argdisp_message[] =
{
	defArg("窗口ID", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA|AS_DEFAULT_VALUE_IS_EMPTY, "使用'打开窗口'返回的窗口ID，为空则是当前active窗口"),
	defArg("输出的字符串", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "需要显示的字符串，对于字符串中含有换行的，将自动换行输出"),
	defArg("坐标系统", _SDT_ALL,0, AS_RECEIVE_ALL_TYPE_DATA|AS_DEFAULT_VALUE_IS_EMPTY, "使用#视_坐标系统_窗口或者#视_坐标系统_图像，当基于图像时，这会在图像被放大时比较有用"),
	defArg("行(y)", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA|AS_DEFAULT_VALUE_IS_EMPTY, "默认12，显示消息的所在位置y，建议值：10,12,20,30"),
	defArg("列(x)", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA|AS_DEFAULT_VALUE_IS_EMPTY, "默认12，显示消息的所在位置x，建议值：10,12,20"),
	defArg("文字颜色", _SDT_ALL,0, AS_RECEIVE_ALL_TYPE_DATA|AS_DEFAULT_VALUE_IS_EMPTY, "显示的文本的颜色，如果为空，则将使用当前窗口设置的颜色，请使用#视_颜色_xxx"),
	defArg("绘制文本外框", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA|AS_DEFAULT_VALUE_IS_EMPTY, "true, false, 输出文本的时候是否需要同时绘制包裹文本的白色外框")
};
defARGINFO __argdev_set_window[]={defArg("窗口id", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA|AS_DEFAULT_VALUE_IS_EMPTY, "输入需要设置为激活的窗口id")};
defARGINFO __argdisp_continue_message[] =
{
	defArg("窗口ID", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA|AS_DEFAULT_VALUE_IS_EMPTY, "使用'打开窗口'返回的窗口ID，为空则是当前active窗口"),
	defArg("文字颜色", _SDT_ALL, (int)"black", AS_DEFAULT_VALUE_IS_EMPTY, "显示的文本的颜色，如果为空，则将使用当前窗口设置的颜色，请使用#视_颜色_xxx"),
	defArg("绘制文本外框", _SDT_ALL, (int)"true", AS_DEFAULT_VALUE_IS_EMPTY, "true, false, 输出文本的时候是否需要同时绘制包裹文本的白色外框")
};
defARGINFO __argdev_update_window[] = {defArg("选项", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "选项")};
defARGINFO __argdev_set_window_extents[] = {
	defArg("行(y)", _SDT_ALL, flagWindowPoseCenter, AS_DEFAULT_VALUE_IS_EMPTY, "开启的窗口的y轴坐标，#窗口位置_屏幕居中 则按照fatherwindow计算中央位置，算上高度"),
	defArg("列(x)", _SDT_ALL, flagWindowPoseCenter, AS_DEFAULT_VALUE_IS_EMPTY, "开启的窗口的x轴坐标，#窗口位置_屏幕居中 则按照fatherwindow计算中央位置，算上宽度"),
	defArg("宽度", _SDT_ALL, 256, AS_DEFAULT_VALUE_IS_EMPTY, "窗口的宽度"),
	defArg("高度", _SDT_ALL, 256, AS_DEFAULT_VALUE_IS_EMPTY, "窗口的高度")
};
defARGINFO __argdev_error_var[]={
	defArg("变量", dataTypeTuple, 0, 0, "接受错误编号的变量"),
	defArg("模式", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA|AS_DEFAULT_VALUE_IS_EMPTY, "切换错误状态为开启或不开启，默认为1，支持：0（不开启），1（开启）")
};
defARGINFO __argdev_get_exception_data[]={
	defArg("例外", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "halcon的例外"),
	defArg("名称", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "指定需要获取的名称，支持：'error_code', 'add_error_code', 'error_msg', 'add_error_msg', 'operator', 'procedure', 'proc_line', 'call_stack_depth', 'user_data' "),
	defArg("值", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "存储获取的值")
};
defARGINFO __argdev_set_check[]={defArg("模式", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "异常捕获模式，默认为：#异常捕获模式_捕获异常，参见常量：#异常捕获模式_xx")};
defARGINFO __argdev_close_inspect_ctrl[]={defArg("变量", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "变量")};
defARGINFO __argdev_get_preferences[]={defArg("名称", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "名称"), defArg("值", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "值")};
defARGINFO __argdev_inspect_ctrl[]={defArg("变量", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "变量")};
defARGINFO __argdev_set_colored[]={defArg("颜色数", _SDT_ALL, 6, AS_DEFAULT_VALUE_IS_EMPTY, "设置颜色数，支持：3, 6, 12")};
defARGINFO __argdev_set_lut[]={defArg("Lut名字", _SDT_ALL, (int)"default", AS_DEFAULT_VALUE_IS_EMPTY, "支持值：'default', 'linear', 'inverse', 'sqr', 'inv_sqr', 'cube', 'inv_cube', 'sqrt', 'inv_sqrt', 'cubic_root', 'inv_cubic_root', 'color1', 'color2', 'color3', 'color4', 'three', 'six', 'twelve', 'twenty_four', 'rainbow', 'temperature', 'cyclic_gray', 'cyclic_temperature', 'hsi', 'change1', 'change2', 'change3'")};
defARGINFO __argdev_set_paint[]={defArg("模式", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "支持：'default', 'histogram', 'row', 'column', 'contourline', '3d_plot', '3d_plot_lines', '3d_plot_hidden_lines', '3d_plot_point'")};
defARGINFO __argdev_set_shape[]={defArg("形状", _SDT_ALL, (int)"original", AS_DEFAULT_VALUE_IS_EMPTY, "形状")};
defARGINFO __argout[] = {defArg("输出的值", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY, "")};
defARGINFO __argregexp_test[] = {
	defArg("Expression", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "Regular expression. Default value: '.*' ，Suggested values:'.*', 'invert_match', 'ignore_case', 'multiline', 'dot_matches_all', 'newline_lf', 'newline_crlf', 'newline_cr' ")
};
defARGINFO __arginsert[] = {
	defArg("Index", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA|AS_DEFAULT_VALUE_IS_EMPTY, "Default value: 0，Suggested values: 0, 1, 2, 3, 4, 5, 6，Minimum increment: 1 ，Index position for new value."),
	defArg("Value", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA|AS_DEFAULT_VALUE_IS_EMPTY, "Default value: 1，Value that has to be inserted.Typical range of values: 0 ≤ Value ≤ 1000000 ")
};
defARGINFO __arg_xx_read_image[] = { defArg("结果图像对象", dataTypeObj, 0, AS_RECEIVE_VAR, "存储读取后的图像对象"), defArg("文件名", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_ALL_TYPE_DATA, "默认值：fabrik，读取的图像文件名或者路径") };


//////////////////////////////////
///扩展的tuple函数
#if 1

defARGINFO __arg_ex_insert[] = {
	defArg("数据元组", dataTypeTuple, 0, 0, "输入一个数据元组类型值"),
	defArg("Index", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default value: 0，Suggested values: 0, 1, 2, 3, 4, 5, 6，Minimum increment: 1 ，Index position for new value."),
	defArg("Value", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA | AS_DEFAULT_VALUE_IS_EMPTY, "Default value: 1，Value that has to be inserted.Typical range of values: 0 ≤ Value ≤ 1000000 ")
};

defARGINFO __arg_ex_set[] = { 
	defArg("数据元组", dataTypeTuple, 0, 0, "输入一个数据元组类型值"),
	defArg("新值", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "输入双精度、小数、整数、文本、逻辑、数组、htuple都是可以哒") 
};

defARGINFO __arg_ex_get_value_range[] = {
	defArg("数据元组", dataTypeTuple, 0, 0, "输入一个数据元组类型值"),
	defArg("范围起点", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "输入整数"),
	defArg("范围终点", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "输入整数")
};

defARGINFO __arg_ex_regexp_test[] = {
	defArg("数据元组", dataTypeTuple, 0, 0, "输入一个数据元组类型值"),
	defArg("Expression", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "Regular expression. Default value: '.*' ，Suggested values:'.*', 'invert_match', 'ignore_case', 'multiline', 'dot_matches_all', 'newline_lf', 'newline_crlf', 'newline_cr' ")
};

defARGINFO __arg_ex_regexp_match[] = { defArg("数据", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "Input strings to match."), defArg("正则表达式", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_ALL_TYPE_DATA, "Regular expression.")};
defARGINFO __arg_ex_regexp_replace[] = { defArg("数据", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "Input strings to process."), defArg("正则表达式", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_ALL_TYPE_DATA, "Regular expression."), defArg("替换的表达式", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "Replacement expression.") };
defARGINFO __arg_ex_regexp_select[] = { defArg("数据", _SDT_ALL, 0, AS_RECEIVE_ALL_TYPE_DATA, "Input strings to match."), defArg("正则表达式", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_ALL_TYPE_DATA, "Regular expression.") };
#endif


#if 1
//扩展的库函数
defARGINFO __arg_ex_display_found_data_codes[] = {
	defArg("xld对象", dataTypeObj, 0, 0, "输入xld对象"),
	defArg("窗口ID", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_ALL_TYPE_DATA, "输入窗口ID"),
	defArg("解码的数据文本", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_ALL_TYPE_DATA, ""),
	defArg("标题信息", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_ALL_TYPE_DATA, ""),
	defArg("结果信息", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_ALL_TYPE_DATA, ""),
	defArg("解码文字颜色", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_ALL_TYPE_DATA, ""),
	defArg("结果文字颜色", _SDT_ALL, 0, AS_DEFAULT_VALUE_IS_EMPTY | AS_RECEIVE_ALL_TYPE_DATA, ""),
};

#endif

#include "arg.halcon.h"