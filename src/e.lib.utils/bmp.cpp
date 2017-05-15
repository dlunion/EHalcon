#include "def.h"
#include "bmp.h"
#include <exception>
#include "ehalcon.utils/ehalcon.utils.h"
#include "e.lib.core/e.lib.core.h"
#include "e.lib.core/function.impl.h"
#include <string.h>

#ifdef USE_OPENCV
#include <cv.h>
#include <highgui.h>
using namespace cv;
#endif

#define throwLengthError					throw(__hException(__FILE__, __LINE__, __FUNCTION__, -1, "错误的存储区长度，在编码到bmp的时候"))



#ifdef USE_OPENCV

char* package_edata(const char* data, int len)
{
	int* p = (int*)elib::Core::emalloc(len + 2 * sizeof(int));
	p[0] = 1;
	p[1] = len;
	memcpy(p + 2, data, len);
	return (char*)p;
}

namespace elib{
	namespace Function{
		defFunctionBegin_Try(xx_cvt_bytes2hImage);
		//将bmp转换为image对象
		char* data = (char*)v_bin(0) + 8;		//偏移掉前面几个字节，前面8字节存的是长度
		int datalen = *((int*)(data - 4));
		int channel = v_int(1);
		if(channel != 1 && channel != 3) throwHError(errUnsupportValue, "不支持的通道数值%d，只能允许1或者3", channel);
		Mat im = cv::imdecode(Mat(1, datalen, CV_8U, data), channel == 3 ? 1 : 0);
		if (im.empty()) throwHError(errUnsupportValue, "字节集解码失败");

		__obj* nimg =varp_obj(2);
		if(channel == 1){
			err = gen_image1(nimg, "byte", im.cols, im.rows, (int)im.data);
		}else{ //3
			Mat rgb[3];
			split(im, rgb);
			err = gen_image3(nimg, "byte", im.cols, im.rows, (int)rgb[2].data, (int)rgb[1].data, (int)rgb[0].data);
		}
		defFunctionEnd_SetErrorCode;

		//将halcon的图像转换为bmp
		defFunctionBegin_Try(xx_cvt_hImage2bytes);
		Hlong channel = 0;
		__obj* img = ptr_obj(0);
		const char* format = v_string(1);
		__tuple imagetype;
		count_channels(*img, &channel);
		if (channel != 1 && channel != 3) throwHError(errUnsupportValue, "不支持的图像通道数%d，只能允许1或者3，这个图像因为通道数将不能够被允许转换为图像字节集", channel);

		get_image_type(*img, &imagetype);
		if (strcmp(imagetype[0].S(), "byte") != 0) throwHError(errUnsupportValue, "不支持的图像类型%s，只能接受byte类型图像转换，这个图像通道数不能够被允许转换为图像字节集", imagetype[0].S());

		char type[32];
		Hlong width = 0;
		Hlong height = 0;
		vector<uchar> dataOut;
		Mat im;
		if (channel == 1)
		{
			Hlong ptr = 0;
			err=get_image_pointer1(*img, &ptr, type, &width, &height);
			im = Mat(height, width, CV_8U, (char*)ptr);
		}else if(channel == 3){
			Hlong rr = 0, g = 0, b = 0;
			err=get_image_pointer3(*img, &rr, &g, &b, type, &width, &height);

			vector<Mat> ms;
			ms.push_back(Mat(height, width, CV_8U, (char*)b));
			ms.push_back(Mat(height, width, CV_8U, (char*)g));
			ms.push_back(Mat(height, width, CV_8U, (char*)rr));
			merge(ms, im);
		}

		if (!imencode(string(".") + format, im, dataOut)) throwHError(errUnsupportValue, "编码图像出错，可能不支持的格式：%s", format);
		rv_bin = (LPBYTE)package_edata((char*)&dataOut[0], dataOut.size());
		defFunctionEnd_NoSetErrorCode;
	}
}

#else
//************************************
// Method:    获取bmp图像编码数据长度
// 指定图像宽高和通道数，以获取编码后的bmp
// 数据长度
//************************************
int get_bitmap_encode_bound_size(int w, int h, int channel)
{
	return sizeof(BITMAPFILEHEADER)+sizeof(BITMAPINFOHEADER)+align4(w * channel)*h+(channel == 1 ? 4 * 256 : 0);
}

//************************************
// Method:    校验bmp
// 检查bmp数据是否有效，如果无效则返回false
// bmpdata：指定bmp数据指针
// len：指定bmp数据长度（bmpdata长度）
//************************************
bool check_bmp(const char* bmpdata, int len)
{
	if (len <= sizeof(BITMAPFILEHEADER)+sizeof(BITMAPINFOHEADER)) return false;
	BITMAPFILEHEADER     *bmfHdr = (BITMAPFILEHEADER *)bmpdata;
	BITMAPINFOHEADER     *bi = (BITMAPINFOHEADER*)(bmpdata + sizeof(BITMAPFILEHEADER));
	if (bmfHdr->bfType != 0x4D42) return false;
	if (bi->biBitCount != 8 && bi->biBitCount != 24)return false; //只支持8和24

	//去掉对文件大小的限制，因为文件尾部可能会有多余的数据，47747621<scottjane@vip.qq.com>提供的bug
	//if(bmfHdr->bfSize != len) return false;

	//对于size的大小要求，也被定义为只要文件大小len大于size即可，表示数据可以正常读取，保证即使后面多余数据依旧能够正常
	int size = get_bitmap_encode_bound_size(bi->biWidth, bi->biHeight, bi->biBitCount == 8 ? 1 : 3);
	return len >= size;
}

//************************************
// Method:    依据rgb编码到bmp
// storage：存储编码后的bmp数据指针，其空间大小必须大于get_bitmap_encode_bound_size的返回值
// r，g，b：指定各个通道的数据指针，注意：指向的数据区域必须是没有字节对齐的
//************************************
void encode_to_bitmap3(char* storage, int len, const char* r, const char* g, const char* b, int w, int h)
{
	if(get_bitmap_encode_bound_size(w, h, 3) > len) throwLengthError;

	BITMAPFILEHEADER     bmfHdr;
	BITMAPINFOHEADER     bi;
	DWORD widthstep = align4(w * 3);
	DWORD dwBmBitsSize = widthstep * h;

	memset(&bmfHdr, 0, sizeof(bmfHdr));
	memset(&bi, 0, sizeof(bi));
	bmfHdr.bfSize = sizeof(BITMAPFILEHEADER)+sizeof(BITMAPINFOHEADER) + dwBmBitsSize;
	bmfHdr.bfOffBits = (DWORD)sizeof(BITMAPFILEHEADER)+(DWORD)sizeof(BITMAPINFOHEADER); 
	bmfHdr.bfType = 0x4D42;

	bi.biSize= sizeof(BITMAPINFOHEADER);         
	bi.biWidth = w;        
	bi.biHeight =  h;         
	bi.biPlanes =  1;
	bi.biBitCount = 24;
	bi.biCompression= BI_RGB;         
	bi.biSizeImage=0;         
	bi.biXPelsPerMeter = 0;         
	bi.biYPelsPerMeter = 0;         
	bi.biClrImportant = 0;         
	bi.biClrUsed =  0;   

	char* bmp = storage;
	memcpy(bmp, &bmfHdr, sizeof(bmfHdr));
	memcpy(bmp + sizeof(bmfHdr), &bi, sizeof(bi));
	char* p = bmp + bmfHdr.bfOffBits;
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			p[j * 3] = b[(h - i - 1) * w + j];
			p[j * 3 + 1] = g[(h - i - 1) * w + j];
			p[j * 3 + 2] = r[(h - i - 1) * w + j];
		}
		p += widthstep;
	}
}

void encode_to_bitmap1(char* storage, int len, const char* gray, int w, int h)
{
	if(get_bitmap_encode_bound_size(w, h, 1) > len) throwLengthError;

	BITMAPFILEHEADER     bmfHdr;
	BITMAPINFOHEADER     bi;
	DWORD widthstep = align4(w);
	DWORD dwBmBitsSize = widthstep * h+4*256; 

	memset(&bmfHdr, 0, sizeof(bmfHdr));
	memset(&bi, 0, sizeof(bi));
	bmfHdr.bfSize = sizeof(BITMAPFILEHEADER)+sizeof(BITMAPINFOHEADER) + dwBmBitsSize;
	bmfHdr.bfOffBits = (DWORD)sizeof(BITMAPFILEHEADER)+(DWORD)sizeof(BITMAPINFOHEADER)+4*256; 
	bmfHdr.bfType = 0x4D42;

	bi.biSize= sizeof(BITMAPINFOHEADER); 
	bi.biWidth = w; 
	bi.biHeight =  h;         
	bi.biPlanes =  1;
	bi.biBitCount = 8;
	bi.biCompression= BI_RGB;         
	bi.biSizeImage=0;         
	bi.biXPelsPerMeter = 0;         
	bi.biYPelsPerMeter = 0;         
	bi.biClrImportant = 0;         
	bi.biClrUsed =  0;

	char* bmp = storage;
	memcpy(bmp, &bmfHdr, sizeof(bmfHdr));
	memcpy(bmp + sizeof(bmfHdr), &bi, sizeof(bi));
	char* p = bmp + bmfHdr.bfOffBits;
	char* clr = p - 4 * 256;
	//调色板
	for(int i = 0; i < 256; ++i){
		memset(clr, i, 3);
		*(clr + 3) = 0;
		clr += 4;
	}

	gray += (h - 1) * w;
	for (int i = 0; i < h; ++i){
		memcpy(p, gray, w);
		p += widthstep;
		gray -= w;
	}
}

char* encode_tobitmap(const char* r, const char* g, const char* b, int w, int h)
{
	int len = get_bitmap_encode_bound_size(w, h, 3);
	int* p = (int*)elib::Core::emalloc(len + 2 * sizeof(int));
	p[0] = 1;
	p[1] = len;
	encode_to_bitmap3((char*)(p + 2), len + 2 * sizeof(int), r, g, b, w, h);
	return (char*)p;
}

char* encode_tobitmap(const char* gray, int w, int h)
{
	int len = get_bitmap_encode_bound_size(w, h, 1);
	int* p = (int*)elib::Core::emalloc(len + 2 * sizeof(int));
	p[0] = 1;
	p[1] = len;
	encode_to_bitmap1((char*)(p + 2), len + 2 * sizeof(int), gray, w, h);
	return (char*)p;
}

char* encode_tobitmap(char* storage, int len, const char* r, const char* g, const char* b, int w, int h)
{
	int vl = get_bitmap_encode_bound_size(w, h, 3);
	if(vl+2*sizeof(int) > len) throwLengthError;

	int* p = (int*)storage;
	p[0] = 1;
	p[1] = vl;
	encode_to_bitmap3((char*)(p + 2), len, r, g, b, w, h);
	return storage;
}

char* encode_tobitmap(char* storage, int len, const char* gray, int w, int h)
{
	int vl = get_bitmap_encode_bound_size(w, h, 1);
	if(vl+2*sizeof(int) > len) throwLengthError;

	int* p = (int*)storage;
	p[0] = 1;
	p[1] = vl;
	encode_to_bitmap1((char*)(p + 2), len, gray, w, h);
	return storage;
}

namespace elib{
	namespace Function{
		defFunctionBegin_Try(xx_cvt_bytes2hImage);
			//将bmp转换为image对象
			BITMAPFILEHEADER     bmfHdr;
			BITMAPINFOHEADER     bi;

			char* data = (char*)v_bin(0) + 8;		//偏移掉前面几个字节，前面8字节存的是长度
			int datalen = *((int*)(data - 4));
			int channel = v_int(1);
			if(channel != 1 && channel != 3) throwHError(errUnsupportValue, "不支持的通道数值%d，只能允许1或者3", channel);
			if (!check_bmp(data, datalen)) throwHError(errUnsupportValue, "不支持或者错误的bmp图像数据，bmp检测不通过在check_bmp函数里面");
	
			memcpy(&bmfHdr, data, sizeof(bmfHdr));
			memcpy(&bi, data + sizeof(bmfHdr), sizeof(bi));

			unsigned char* px = (unsigned char*)data + bmfHdr.bfOffBits;
			__obj* nimg =varp_obj(2);
			if(channel == 1){
				unsigned char* d = (unsigned char*)malloc(bi.biWidth * bi.biHeight); autoRelease(d);
				unsigned char* pd = d + (bi.biHeight - 1) * bi.biWidth;
				if(bi.biBitCount == 8){
					unsigned char* clrplane = px - 4 * 256;  //在这里不理会调色板，就当他是0-255就好了
					int widthstep = align4(bi.biWidth);

					for(int h = 0; h < bi.biHeight; ++h){
						memcpy(pd, px, bi.biWidth);
						pd -= bi.biWidth;
						px += widthstep;
					}
				}else{ //24
					//int wplus = 4 - bi.biWidth * 3 % 4;
					int wplus = align4(bi.biWidth*3)-bi.biWidth*3;  //bugfix：v3.0：2015年5月24日 22:39:06：当为1通道的时候会异常
					for(int h = 0; h < bi.biHeight; ++h){
						for(int i = 0; i < bi.biWidth; ++i){
							int b = *px++;
							int g = *px++;
							int r = *px++;
							*pd++ = r*0.299 + g*0.587 + b*0.114;
						}
						pd -= (bi.biWidth << 1);
						px += wplus;
					}
				}
				err = gen_image1(nimg, "byte", bi.biWidth, bi.biHeight, (int)d);
			}else{ //3
				/*
				* 需要转换到3通道时
				*/
				unsigned char* buf = (unsigned char*)malloc(bi.biWidth * bi.biHeight * 3);  autoRelease(buf);
				unsigned char* d[3] = {buf, buf + bi.biWidth * bi.biHeight, buf + bi.biWidth * bi.biHeight * 2};
				unsigned char* pd[3] = {
					d[0] + (bi.biHeight - 1) * bi.biWidth, 
					d[1] + (bi.biHeight - 1) * bi.biWidth,
					d[2] + (bi.biHeight - 1) * bi.biWidth};

				/*
				* 需要转换到3通道时，这时候的bmp却只是1通道的
				*/
				if(bi.biBitCount == 8){
					unsigned char* clrplane = px - 4 * 256;  //在这里不理会调色板，就当他是0-255就好了
					int widthstep = align4(bi.biWidth);

					for(int h = 0; h < bi.biHeight; ++h){
						for(int i = 0; i < 3; ++i){
							memcpy(pd[i], px, bi.biWidth);
							pd[i] -= bi.biWidth;
						}
						px += widthstep;
					}
				}else{ //24
				/*
				* 需要转换到3通道时，这时候的bmp是3通道的，bmp的数据存储是bgr格式，并且上下正好和halcon相反
				*/
					int pluscc = align4(bi.biWidth*3)-bi.biWidth*3;
					for(int h = 0; h < bi.biHeight; ++h){
						for(int i = 0; i < bi.biWidth; ++i){
							*pd[0]++ = *px++;  //b
							*pd[1]++ = *px++;  //g
							*pd[2]++ = *px++;  //r
						}
						for(int i =0 ; i < 3; ++i)
							pd[i] -= bi.biWidth*2;  //因为上面代码加上去了，现在又得减回去两倍才对
						px += pluscc;
					}
				}
				err=gen_image3(nimg, "byte", bi.biWidth, bi.biHeight, (int)d[2], (int)d[1], (int)d[0]);
			}
		defFunctionEnd_SetErrorCode;

		//将halcon的图像转换为bmp
		defFunctionBegin_Try(xx_cvt_hImage2bytes);
			Hlong channel = 0;
			__obj* img = ptr_obj(0);
			__tuple imagetype;
			count_channels(*img, &channel);
			if (channel != 1 && channel != 3) throwHError(errUnsupportValue, "不支持的图像通道数%d，只能允许1或者3，这个图像因为通道数将不能够被允许转换为bmp", channel);
	
			get_image_type(*img, &imagetype);
			if (strcmp(imagetype[0].S(), "byte") != 0) throwHError(errUnsupportValue, "不支持的图像类型%s，只能接受byte类型图像转换，这个图像通道数不能够被允许转换为bmp", imagetype[0].S());

			char type[32];
			Hlong width = 0;
			Hlong height = 0;
			if (channel == 1)
			{
				Hlong ptr = 0;
				err=get_image_pointer1(*img, &ptr, type, &width, &height);
				rv_bin = (LPBYTE)encode_tobitmap((char*)ptr, width, height);
			}else if(channel == 3){
				Hlong rr = 0, g = 0, b = 0;
				err=get_image_pointer3(*img, &rr, &g, &b, type, &width, &height);
				rv_bin = (LPBYTE)encode_tobitmap((char*)rr, (char*)g, (char*)b, width, height);
			}
		defFunctionEnd_NoSetErrorCode;
	}
}
#endif