#include "WindowManager.h"
#include "windows.h"
#include <vector>
#include <map>
#include "ehalcon.utils.h"
#include "objectInfo.h"

using namespace std;
using namespace Halcon;
//这个文件负责管理窗口的创建、关闭等操作，因为halcon自身的open_window比较扯淡，需要一些配置，以及本身的一些东西无法满足需求而写的这个
#define max(a,b) (((a) > (b)) ? (a) : (b))

namespace ehalcon{
	namespace WindowManager{
		struct enum_info{
			HWND h;
			vector<HWND> wnds;
			DWORD processid;
		};

		struct wnd_info{
			long old_wnd_proc;
			int last_key;
		};

		map<int, wnd_info> wndProcMap;
		vector<Hlong> wndStack;
		map<string, Hlong> wndMap;
		CRITICAL_SECTION cs, procCS;
		int g_current_down_key = 0;
		LRESULT CALLBACK window_proc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam);
		void setHwndMap(HWND hwnd, int l);

		void intialize(){
			InitializeCriticalSection(&cs);
			InitializeCriticalSection(&procCS);
		}

		void uninitialize(){
			DeleteCriticalSection(&cs);
			DeleteCriticalSection(&procCS);
		}

		void attach(Hlong handle)
		{
			//set_part(handle, HTuple(-1), -1, -1, -1);
			set_part(handle, HTuple(0), 0, -1, -1);
			HWND hWnd = hwnd(handle);
			setHwndMap(hWnd, SetWindowLong(hWnd, GWL_WNDPROC, (LPARAM)window_proc));
			EnterCriticalSection(&cs);
			wndStack.push_back(handle);
			LeaveCriticalSection(&cs);
		}

		bool setActivie(Hlong wndID)
		{
			bool ret = false;
			EnterCriticalSection(&cs);
			if (wndStack.size() > 0){
				if (wndStack.back() == wndID) ret = true;
				else{
					for (int i = wndStack.size() - 2; i >= 0; --i){
						if (wndID == wndStack[i]){
							swap(wndStack[i], wndStack.back());
							ret = true;
							HWND h = hwnd(wndID);
							ShowWindow(h, SW_SHOW);
							SetForegroundWindow(h);
							SetActiveWindow(h);
							SetFocus(h);
							break;
						}
					}
				}
			}
			LeaveCriticalSection(&cs);
			return true;
		}

		void setHwndMap(HWND hwnd, int l){
			EnterCriticalSection(&procCS);
			wnd_info& info = wndProcMap[(int)hwnd];
			info.old_wnd_proc = l;
			info.last_key = 0;
			LeaveCriticalSection(&procCS);
		}

		int getLastKeyWnd(HWND hwnd){
			int last_key = 0;
			EnterCriticalSection(&procCS);
			map<int, wnd_info>::iterator itr = wndProcMap.find((int)hwnd);
			if (itr != wndProcMap.end())
				last_key = itr->second.last_key;
			LeaveCriticalSection(&procCS);
			return last_key;
		}

		void deleteHwndMap(HWND hwnd){
			EnterCriticalSection(&procCS);
			map<int, wnd_info>::iterator itr = wndProcMap.find((int)hwnd);
			if (itr != wndProcMap.end()){
				SetWindowLong(hwnd, GWL_WNDPROC, itr->second.old_wnd_proc);
				wndProcMap.erase(itr);
			}
			LeaveCriticalSection(&procCS);
		}

		LRESULT CALLBACK window_proc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam){

			map<int, wnd_info>::iterator itr = wndProcMap.find((int)hwnd);
			if (itr == wndProcMap.end())
				return DefWindowProc(hwnd, message, wparam, lparam);

			if (message == WM_KEYDOWN)
				itr->second.last_key = wparam;
			else if (message == WM_KEYUP)
				itr->second.last_key = 0;

			WNDPROC p = (WNDPROC)itr->second.old_wnd_proc;
			return p(hwnd, message, wparam, lparam);
		}

		Herror open(int y, int x, int w, int h, Hlong fatherwindow, const char* mode, const char* machine, Hlong* handleID)
		{
			Hlong handle = 0;
			if (x == flagWindowPoseCenter || y == flagWindowPoseCenter){
				int sx = GetSystemMetrics(SM_CXSCREEN);
				int sy = GetSystemMetrics(SM_CYSCREEN);
				if (fatherwindow != 0){
					RECT rcfather_client;
					GetClientRect((HWND)fatherwindow, &rcfather_client);
					sx = rcfather_client.right - rcfather_client.left + 1;
					sy = rcfather_client.bottom - rcfather_client.top + 1;
				}

				x = x == flagWindowPoseCenter ? ((sx - w) * 0.5) : x;
				y = y == flagWindowPoseCenter ? ((sy - h) * 0.5) : y;
			}
			//eprintf("y = %d, x = %d, w = %d, h = %d, father = %d, mode = %s, machine = %s", y, x, w, h, fatherwindow, mode, machine);
			Herror err = open_window(y, HTuple(x), w, h, fatherwindow, mode, machine, &handle);
			set_part(handle, HTuple(0), 0, -1, -1);
			HWND hWnd = hwnd(handle);
			setHwndMap(hWnd, SetWindowLong(hWnd, GWL_WNDPROC, (LPARAM)window_proc));
			//set_part(handle, HTuple(-1), -1, -1, -1);
			if (handleID != 0) *handleID = handle;

			EnterCriticalSection(&cs);
			wndStack.push_back(handle);
			LeaveCriticalSection(&cs);
			return err;
		}

		Herror closeLast()
		{
			if (isopen())
				return close(wndStack.back());
			else
				return errOk;
		}

		Herror close(Hlong wndID)
		{
			Herror err = 0;
			EnterCriticalSection(&cs);
			if (wndStack.size() > 0){
				deleteHwndMap(hwnd(wndID));
				err = Halcon::close_window(wndID);
			}

			for (int i = 0; i < wndStack.size(); ++i){
				if (wndID == wndStack[i]){
					wndStack.erase(wndStack.begin() + i);
					break;
				}
			}
			map<string, Hlong>::iterator itr = wndMap.begin();
			for (; itr != wndMap.end();){
				if (itr->second == wndID){
					wndMap.erase(itr++);
				}
				else{
					itr++;
				}
			}
			LeaveCriticalSection(&cs);
			return err;
		}

		bool isopen(){
			bool isopenv = false;
			EnterCriticalSection(&cs);
			isopenv = wndStack.size() > 0;
			LeaveCriticalSection(&cs);
			return isopenv;
		}

		Hlong active()
		{
			Hlong wnd = 0;
			EnterCriticalSection(&cs);
			if (wndStack.size() > 0)
				wnd = wndStack.back();
			LeaveCriticalSection(&cs);
			return wnd;
		}

		Herror closeAll()
		{
			EnterCriticalSection(&cs);
			Herror err = 0;
			for (int i = 0; i < wndStack.size(); ++i){
				deleteHwndMap(hwnd(wndStack[i]));
				err = Halcon::close_window(wndStack[i]);
			}

			wndMap.clear();
			wndStack.clear();
			LeaveCriticalSection(&cs);
			return err;
		}

		HWND hwnd(Hlong wndID)
		{
			__tuple win, disp;
			get_os_window_handle(wndID, &win, &disp);
			return (HWND)win[0].L();
		}

		int CALLBACK WndEnumProc(HWND h, LPARAM a){
			DWORD processid = 0;
			enum_info* inf = (enum_info*)a;
			GetWindowThreadProcessId(h, &processid);
			if (h != inf->h && processid == inf->processid){
				EnableWindow(h, false);
				inf->wnds.push_back(h);
			}
			return 1;
		}

		// void waitkey(Hlong wndID, int key, const char* fmt)
		// {
		// 	HWND h = hwnd(wndID);
		// 	enum_info ei; ei.h = h;  GetWindowThreadProcessId(h, &ei.processid);
		// 	EnumWindows(WndEnumProc, (LPARAM)&ei);
		// 
		// 	char oldtitle[260], newtitle[512];
		// 	GetWindowText(h, oldtitle, sizeof(oldtitle));
		// 
		// 	sprintf(newtitle, fmt, oldtitle);
		// 	SetWindowText(h, newtitle);
		// 	SetForegroundWindow(h);
		// 	::SetWindowPos(h,HWND_TOPMOST,-1,-1,-1,-1,SWP_NOMOVE|SWP_NOSIZE);
		// 
		// 	MSG msg;
		// 	while(GetMessage(&msg, 0, 0, 0)){
		// 		TranslateMessage(&msg);
		// 		DispatchMessage(&msg);
		// 		if(msg.message == WM_KEYDOWN)
		// 			if(msg.wParam == key) break;
		// 		if(msg.message == WM_CLOSE) break;
		// 	}
		// 	SetWindowText(h, oldtitle);
		// 	::SetWindowPos(h,HWND_NOTOPMOST,-1,-1,-1,-1,SWP_NOMOVE|SWP_NOSIZE);
		// 	for(int i = 0; i < ei.wnds.size(); ++i) EnableWindow(ei.wnds[i], true);
		// }

		inline unsigned __int64 GetCycleCount()
		{
			__asm _emit 0x0F
			__asm _emit 0x31
		}

		// LARGE_INTEGER t_start, t_stop, tt;
		// void wait_start(){
		// 	QueryPerformanceFrequency(&tt); 
		// 	QueryPerformanceCounter(&t_start); 
		// }
		// 
		// int wait_stop(){
		// 	QueryPerformanceCounter(&t_stop); 
		// 	return (double)(t_stop.QuadPart-t_start.QuadPart) / (double)tt.QuadPart * 1000;
		// }

#define QueryMS(start, stop, tt)    ((double)(stop.QuadPart-start.QuadPart) / (double)tt.QuadPart * 1000)

		int waitkey(int time)
		{
			int down_key = 0;
			if (!isopen()) return down_key;

			bool is_longwait = time <= 0;
			LARGE_INTEGER t_start, t_stop, tt;
			QueryPerformanceFrequency(&tt);
			QueryPerformanceCounter(&t_start);
			HWND h = hwnd(active());
			down_key = getLastKeyWnd(h);
			// 	enum_info ei; ei.h = h;  GetWindowThreadProcessId(h, &ei.processid);
			// 	EnumWindows(WndEnumProc, (LPARAM)&ei);

			char oldtitle[260], newtitle[512];
			if (is_longwait){
				GetWindowText(h, oldtitle, sizeof(oldtitle));
				sprintf(newtitle, "请按下任意键后继续... - %s", oldtitle);
				SetWindowText(h, newtitle);
				//SetForegroundWindow(h);
				//::SetWindowPos(h,HWND_TOPMOST,-1,-1,-1,-1,SWP_NOMOVE|SWP_NOSIZE);
			}
			// 	else
			// 		sprintf(newtitle, "请按任意键或者稍等 %.2f 秒后继续... - %s", time / 1000.0, oldtitle);


			MSG msg;
			bool isbreak = false;
			QueryPerformanceCounter(&t_stop);
			while (is_longwait || QueryMS(t_start, t_stop, tt) < time){
				while (PeekMessage(&msg, 0, 0, 0, PM_REMOVE)){
					TranslateMessage(&msg);
					DispatchMessage(&msg);
					if (msg.message == WM_KEYDOWN && msg.hwnd == h)
					{
						isbreak = true; down_key = msg.wParam; break;
					}
					if (msg.message == WM_CLOSE)
					{
						isbreak = true; break;
					}
				}
				if (isbreak) break;
				Sleep(1);
				QueryPerformanceCounter(&t_stop);
			}

			if (is_longwait){
				SetWindowText(h, oldtitle);
				//::SetWindowPos(h,HWND_NOTOPMOST,-1,-1,-1,-1,SWP_NOMOVE|SWP_NOSIZE);
			}
			return down_key;
		}

		Herror setExtents(Hlong wndID, int y, int x, int w, int h)
		{
			Hlong handle = 0;
			if (x == flagWindowPoseCenter || y == flagWindowPoseCenter){
				int sx = GetSystemMetrics(SM_CXSCREEN);
				int sy = GetSystemMetrics(SM_CYSCREEN);
				x = x == flagWindowPoseCenter ? ((sx - w) * 0.5) : x;
				y = y == flagWindowPoseCenter ? ((sy - h) * 0.5) : y;
			}
			Herror err = set_window_extents(wndID, HTuple(y), x, w, h);
			set_part(wndID, HTuple(0), 0, -1, -1);
			//set_part(handle, HTuple(-1), -1, -1, -1);
			return err;
		}

		Hlong getIDFromName(const __tuple& name)
		{
			string name_str;
			ehalcon::Utils::tupleToString(name, name_str);
			if (wndMap.find(name_str) == wndMap.end()) return 0;
			return wndMap[name_str];
		}

		void showObj(const __obj& obj, const __tuple& name)
		{
			string name_str;
			ehalcon::Utils::tupleToString(name, name_str);
			__tuple width, height, check;
			bool isImage = false;
			Hlong wndID;

			//get_check(&check);
			//set_check(HTuple("~give_error"));
			//Hkey k = obj.Id();
			string obj_class_name;
			ehalcon::ObjectInfo::ObjType ot = ehalcon::ObjectInfo::getObjectClass(obj, obj_class_name);
			__tuple cnt; int obj_count = 0;
			count_obj(obj, &cnt);
			obj_count = cnt[0].L();
			bool is_empty = obj_count == 0;
			width = 500;
			height = 500;

			if (!is_empty){
				switch (ot){
				case ehalcon::ObjectInfo::ObjTypeImage:
					get_image_size(obj, &width, &height); break;
				case ehalcon::ObjectInfo::ObjTypeRegion:
				{
														   HRegionArray arr(obj);
														   if (arr.Num() > 0){
															   width = 0;
															   height = 0;
															   for (int i = 0; i < arr.Num(); ++i){
																   width = max(width, arr[i].BoundingBox().Width());
																   height = max(height, arr[i].BoundingBox().Height());
															   }
														   }
														   break;
				}
				}
			}

			if (wndMap.find(name_str) != wndMap.end()){
				//已经存在
				wndID = wndMap[name_str];
				if (isImage) {
					__tuple row, col;
					get_window_extents(wndID, &row, &col, 0, 0);
					setExtents(wndID, row[0], col[0], width[0], height[0]);
				}
			}
			else{
				//如果没有，则显示新的窗口
				open(flagWindowPoseCenter, flagWindowPoseCenter, width[0], height[0], 0, "visible", "", &wndID);
			}

			disp_obj(obj, wndID);
			setActivie(wndID);
			char title_[1024] = { 0 };
			if (obj_count < 1)
				sprintf(title_, "%s ( %s ) - 空白的对象", name_str.c_str(), obj_class_name.c_str());
			else if (obj_count == 1){
				sprintf(title_, "%s ( %s ) - ( %.2f * %.2f )", name_str.c_str(), obj_class_name.c_str(), width[0].D(), height[0].D());
			}
			else if (obj_count > 1){
				sprintf(title_, "%s ( %s , count = %d ) - ( %.2f * %.2f )", name_str.c_str(), obj_class_name.c_str(), obj_count, width[0].D(), height[0].D());
			}
			SetWindowText(hwnd(wndID), title_);
			wndMap[name_str] = wndID;
		}
	}
}