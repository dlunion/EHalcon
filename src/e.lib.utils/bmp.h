
#pragma once

//************************************
// Method:    获取bmp图像编码数据长度
// 指定图像宽高和通道数，以获取编码后的bmp
// 数据长度
//************************************
int get_bitmap_encode_bound_size(int w, int h, int channel);

//************************************
// Method:    校验bmp
// 检查bmp数据是否有效，如果无效则返回false
// bmpdata：指定bmp数据指针
// len：指定bmp数据长度（bmpdata长度）
//************************************
bool check_bmp(const char* bmpdata, int len);

//************************************
// Method:    依据rgb编码到bmp
// storage：存储编码后的bmp数据指针，其空间大小必须大于等于get_bitmap_encode_bound_size的返回值
// len : 指示storage的长度，如果长度不够，则抛异常哟
// r，g，b：指定各个通道的数据指针，注意：指向的数据区域必须是没有字节对齐的
//************************************
void encode_to_bitmap3(char* storage, int len, const char* r, const char* g, const char* b, int w, int h);

//同上，只是一通道了
void encode_to_bitmap1(char* storage, int len, const char* gray, int w, int h);

//编码为位图字节集，个易调用的方法，返回的是字节集数据哟
char* encode_tobitmap(const char* r, const char* g, const char* b, int w, int h);
char* encode_tobitmap(const char* gray, int w, int h);

//这里是直接写入到内存里边，易调用的方法，写入指定位置字节集哟
char* encode_tobitmap(char* storage, int len, const char* r, const char* g, const char* b, int w, int h);
char* encode_tobitmap(char* storage, int len, const char* gray, int w, int h);