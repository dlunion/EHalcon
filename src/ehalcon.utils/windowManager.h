#pragma once
#include "def.h"

namespace ehalcon{
	namespace WindowManager
	{
		bool isopen();
		void intialize();
		void uninitialize();
		Herror open(int y, int x, int w, int h, Hlong fatherWindow, const char* mode, const char* machine, Hlong* handleID);
		Herror close(Hlong wndID);
		Herror closeAll();
		Hlong active();
		Herror closeLast();
		void attach(Hlong wndID);
		bool setActivie(Hlong wndID);
		HWND hwnd(Hlong wndID);
		int waitkey(int time);
		Herror setExtents(Hlong wndID, int y, int x, int w, int h);
		void showObj(const __obj& obj, const __tuple& name);
		Hlong getIDFromName(const __tuple& name);
	};
}