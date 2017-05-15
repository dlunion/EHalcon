#include "function.impl.h"

#define callHalcon(func, ret, ...) ret=func(__VA_ARGS__)

namespace elib{
	namespace Function{
		defFunctionImplement(__obj_construct){
			*a->m_pInt = (int)ehalcon::Core::newObj();
			//log("new obj: this = 0x%p", *a->m_pInt);
		}

		defFunctionImplement(__obj_copy){
			*a->m_pInt = (int)ehalcon::Core::newObj();
			*((__obj*)*a->m_pInt) = *((__obj*)*a[1].m_pInt);
			//log("copy obj: this = 0x%p, right value = 0x%p", *a->m_pInt, *a[1].m_pInt);
		}

		defFunctionImplement(__obj_free){
			//log("free obj: this = 0x%p", *a->m_pInt);
			ehalcon::Core::freeObj((__obj**)a->m_pInt);
		}

		defFunctionBegin_Try(xx_x_clone_obj);
		__obj* t = ehalcon::Core::newObj();
		*t = a_obj(-1);
		rv_objset(t);
		defFunctionEnd_ReturnObj;

		//这几个是数据类型的基本函数
		defFunctionImplement(__tuple_construct){
			*a->m_pInt = (int)ehalcon::Core::newTuple();
			//log("new tuple: this = 0x%p", *a->m_pInt);
		}

		defFunctionImplement(__tuple_copy){
			*a->m_pInt = (int)ehalcon::Core::newTuple();
			*((__tuple*)*a->m_pInt) = *((__tuple*)*a[1].m_pInt);
			//log("copy tuple: this = 0x%p, right value = 0x%p", *a->m_pInt, *a[1].m_pInt);
		}

		defFunctionImplement(__tuple_free){
			ehalcon::Core::freeTuple((__tuple**)a->m_pInt);
			//log("free tuple: this = 0x%p", *a->m_pInt);
		}

		defFunctionBegin_Try(xx_x_clone_tuple);
		__tuple* t = ehalcon::Core::newTuple();
		*t = a_tuple(-1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;





		/////////////////////////////////////////////////////////
		//作为函数的克隆，不是成员函数哟
		defFunctionBegin_Try(xx_clone_tuple);
		__tuple* t = ehalcon::Core::newTuple();
		*t = a_tuple(0);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_clone_obj);
		__obj* t = ehalcon::Core::newObj();
		*t = a_obj(0);
		rv_objset(t);
		defFunctionEnd_ReturnObj;

		defFunctionBegin_Try(xx_show_obj);
		__obj& obj = a_obj(0);
		__tuple name; if (v_empty(1)) name = "显示对象"; else elib::Utils::fillTuple(a + 1, name);
		ehalcon::WindowManager::showObj(obj, name);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin(xx_get_window_id_from_name);
		__tuple name; if (v_empty(0)) name = "显示对象"; else elib::Utils::fillTuple(a + 0, name);
		rv_int = ehalcon::WindowManager::getIDFromName(name);
		defFunctionEnd;

		defFunctionBegin(xx_debug_config);
		//这个函数实现调试配置项
		// 	__tuple& cfg = a_tuple(0);
		// 	logdbg("调试选项配置总数 = %d", cfg.Num());
		// 	for(int i = 0; i < cfg.Num(); ++i){
		// 		if(cfg[i].I() == dc_err_pause){
		// 			logdbg("调试选项： 发生错误暂停 = %s", cfg[i + 1].I() ? "启用" : "不启用");
		// 			g_debug_config.ispause_for_err = cfg[++i].I();
		// 		}
		// 	}
		ehalcon::Core::setDebugPauseFlagInError(v_empty(0) ? true : v_bool(0));
		defFunctionEnd;

		defFunctionImplement(xx_set_err_callback){
			offsetRemoveThisPtr;
			ehalcon::Core::setErrorCallback((int)a->m_pInt);
		}

		defFunctionBegin_Try(xx_make_error)
		err = read_image(&__obj(), "");   //制造一个错误
		defFunctionEnd_SetErrorCode

		defFunctionBegin_Try(xx_gen_tuple)
		__tuple* t = ehalcon::Core::newTuple();
		autoReleaseTuple(t);

		for (int i = 0; i < c; ++i){
			if (a[i].m_dtDataType & DT_IS_ARY){
				int tpe = a[i].m_dtDataType & (~DT_IS_ARY);
				int num = a[i].m_pInt[1];
				int* p = a[i].m_pInt + 2;
				for (int j = 0; j < num; ++j){
					switch (tpe){
					case SDT_INT:			t->Append(p[j]);	break;
					case SDT_TEXT:			t->Append(p[j] == 0 ? "" : (char*)p[j]);	break;
					case SDT_DOUBLE:	t->Append(*((double*)p + j));	break;
					case SDT_FLOAT:		t->Append(*((float*)p + j));	break;
					case SDT_BOOL:		t->Append(p[j]);	break;
					case SDT_SHORT:		t->Append(*((short*)p + j));	break;
					default:
						//lib2.h中没有说为啥要0xFFFF，自己猜测的，因为每次得到的类型都是0x00020001，而并不是lib2.h中描述的应该是1
						if ((tpe & 0xFFFF) == dataTypeTuple)
							t->Append(*(*((__tuple**)p[j])));    //这里会不会出现undef的情况
						//else 
						//	throwHError(err_unknown_type, "创建tuple赋值时失败，不支持的值类型: 0x%X，注意这里只能是：整数、文本、小数、双精度小数、逻辑、短整数", tpe);

						//对于自定义对象，比如tuple，p[0]存储的是第一个对象的指针，p[1]存储的是第二个对象
						//而*((int*)p[0])，则是对象地址，而对象地址中本身就是一个__tuple对象的指针，所以__tuple* v = (__tuple*)*((int*)p[0]);
						//所以最终的__tuple实体是 *((__tuple*)*((int*)p[j])) = *(*((__tuple**)p[j]));
						break;
					}
				}
			}
			else {
				int tpe = a[i].m_dtDataType;
				switch (a[i].m_dtDataType){
				case SDT_INT:			t->Append(v_int(i));	break;
				case SDT_TEXT:			t->Append(v_string(i) == 0 ? "" : v_string(i));	break;
				case SDT_DOUBLE:	t->Append(v_double(i));	break;
				case SDT_FLOAT:		t->Append(v_float(i));	break;
				case SDT_BOOL:		t->Append(v_bool(i));	break;
				case SDT_SHORT:		t->Append(v_short(i));	break;
				default:
					if ((tpe & 0xFFFF) == dataTypeTuple)
						t->Append(a_tuple(i));    //这里会不会出现undef的情况
					//else
					//	throwHError(err_unknown_type, "创建tuple赋值时失败，不支持的值类型: 0x%X，注意这里只能是：整数、文本、小数、双精度小数、逻辑、短整数", tpe);
					break;
				}
			}
		}
		r->m_dtDataType = dataTypeTuple;
		r->m_pInt = (int*)elib::Core::emalloc(sizeof(int));
		*r->m_pInt = (int)t;
		unAutoRelease(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_tuple_s)
		rv_string = 0;
		__tuple t; elib::Utils::fillTuple(a, t);
		const char* cc = t[v_empty(1) ? 0 : v_int(1)].S();
		rv_string = (char*)elib::Core::emalloc(strlen(cc) + 1);
		strcpy(rv_string, cc);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_tuple_d)
		rv_double = 0;
		__tuple t; elib::Utils::fillTuple(a, t);
		rv_double = t[v_empty(1) ? 0 : v_int(1)].D();
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_tuple_l)
		rv_int = 0;
		__tuple t; elib::Utils::fillTuple(a, t);
		rv_int = t[v_empty(1) ? 0 : v_int(1)].L();
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_tuple_ss)
		rv_string = 0;
		__tuple t; elib::Utils::fillTuple(a, t);
		int idx = v_empty(1) ? 0 : v_int(1);
		int tpe = t[idx].ValType();
		switch (tpe){
		case valTupleString: {
							  const char* cc = t[idx].S();
							  rv_string = (char*)elib::Core::emalloc(strlen(cc) + 1);
							  strcpy(rv_string, cc);
							  break;
		}
		case valTupleDouble:{
							 char buf[128];
							 int n = sprintf(buf, "%lf", t[idx].D());
							 if (n >= 0){
								 rv_string = (char*)elib::Core::emalloc(n + 1);
								 strcpy(rv_string, buf);
							 }
							 break;
		}
		case valTupleLong:{
						   char buf[128];
						   int n = sprintf(buf, "%d", t[idx].L());
						   if (n >= 0){
							   rv_string = (char*)elib::Core::emalloc(n + 1);
							   strcpy(rv_string, buf);
						   }
						   break;
		}
		case valTupleUndef:
			rv_string = 0;  //返回空文本
			break;
		}
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_tuple_dd)
		rv_double = 0;
		__tuple t; elib::Utils::fillTuple(a, t);
		int idx = v_empty(1) ? 0 : v_int(1);
		int tpe = t[idx].ValType();
		switch (tpe){
		case valTupleString:			rv_double = atof(t[idx].S());		break;
		case valTupleDouble:			rv_double = t[idx].D();			break;
		case valTupleLong:			rv_double = t[idx].L();					break;
		case valTupleUndef:			rv_double = 0;											break;
		}
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_tuple_ll)
		rv_int = 0;
		__tuple t; elib::Utils::fillTuple(a, t);
		int idx = v_empty(1) ? 0 : v_int(1);
		int tpe = t[idx].ValType();
		switch (tpe){
		case valTupleString:		rv_int = atoi(t[idx].S());		break;
		case valTupleDouble:		rv_int = t[idx].D();			break;
		case valTupleLong:		rv_int = t[idx].L();					break;
		case valTupleUndef:		rv_int = 0;											break;
		}
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_tuple_num)
		rv_int = tv_count(0);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_get_tuple_element_type);
		rv_int = 0;
		if ((a[0].m_dtDataType & 0xFFFF) == dataTypeTuple)
		rv_int = tv_type(0, v_empty(1) ? 0 : v_int(1));
		else
		rv_int = 0;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_is_true);
		__tuple t; elib::Utils::fillTuple(a, t);
		rv_bool = t.IsNumber() && t.Num() > 0 && (t[0].ValType() == Halcon::DoubleVal ? t[0].D() != 0 : t[0].L() != 0);
		// 	r->m_dtDataType = dataTypeTuple;
		// 	r->m_pInt = (int*)elibCore::emalloc(sizeof(int));
		// 	*r->m_pInt = (int)ehalconCore::newTuple();
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_tuple_reset);
		for (int i = 0; i < c; ++i)  ptr_tuple(i)->Reset();
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_obj_reset);
		for (int i = 0; i < c; ++i)  ptr_obj(i)->Reset();
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_tuple_setter)
		//0 tuple, 1 index, 2 new value
		__tuple& t = var_tuple(0);
		int idx = v_int(1);
		//elibCore::eprintf("setter: v_type(2) = 0x%p", v_type(2));
		switch (v_type(2)){	//new value
		case SDT_INT:			t[idx] = v_int(2);	break;
		case SDT_TEXT:			t[idx] = v_string(2) == 0 ? "" : v_string(2);	break;
		case SDT_DOUBLE:	t[idx] = v_double(2);	break;
		case SDT_FLOAT:		t[idx] = v_float(2);	break;
		case SDT_BOOL:		t[idx] = v_bool(2);	break;
		case SDT_SHORT:		t[idx] = v_short(2);	break;
		default:
			//如果是tuple类型，则填入第0个
			if ((v_type(2) & 0xFFFF) == dataTypeTuple)
				t[idx] = a_tuple(2)[0];
			else
				throwHError(errUnknownType, "tuple赋值失败，不支持的新值类型: 0x%X，注意这里只能是：整数、文本、小数、双精度小数、逻辑、短整数", v_type(2));
		}
		defFunctionEnd_NoSetErrorCode;

		//xx_out
		void xx_out(PMDATA_INF r, INT c, PMDATA_INF a){
			offsetRemoveThisPtr;
			try{
				//输出调试信息
				for (int i = 0; i < c; ++i){
					switch (v_type(i)){
					case SDT_INT:			elib::Core::eprintf("> %d, Integer：%d", i + 1, v_int(i));	break;
					case SDT_TEXT:			elib::Core::eprintf("> %d, String：%s", i + 1, v_string(i));	break;
					case SDT_DOUBLE:	elib::Core::eprintf("> %d, Double：%f", i + 1, v_double(i));	break;
					case SDT_FLOAT:		elib::Core::eprintf("> %d, Float：%f", i + 1, v_float(i));	break;
					case SDT_BOOL:		elib::Core::eprintf("> %d, Logical：%s", i + 1, v_bool(i) ? "真" : "假");	break;
					case SDT_SHORT:		elib::Core::eprintf("> %d, Short：%d", i + 1, v_short(i));	break;
					case SDT_BYTE:			elib::Core::eprintf("> %d, Byte：0x%02X", i + 1, v_byte(i)); break;
					case _SDT_NULL:		elib::Core::eprintf("> %d, ===========================================", i + 1); break;
					default:
						if ((v_type(i) & 0xFFFF) == dataTypeTuple){
							__tuple& v = a_tuple(i);
							elib::Core::eprintf("> %d，tuple：count=%d，pointer：0x%p", i + 1, v.Num(), &v);
							for (int j = 0; j < v.Num(); ++j){
								int vtpe = v[j].ValType();
								switch (vtpe){
								case Halcon::DoubleVal:		elib::Core::eprintf(">>>>> %d --- [%d]，Double：%f", i + 1, j, v[j].D()); break;
								case Halcon::LongVal:			elib::Core::eprintf(">>>>> %d --- [%d]，Long：%d", i + 1, j, v[j].L());	break;
								case Halcon::StringVal:			elib::Core::eprintf(">>>>> %d --- [%d]，String：%s", i + 1, j, v[j].S()); break;
								default:
									elib::Core::eprintf(">>>> %d --- [%d]，Undef(%d)", i + 1, j, vtpe); break;
								}
							}
						}
						else if ((v_type(i) & 0xFFFF) == dataTypeObj)
							elib::Utils::printObjectInfo(a_obj(i), i + 1);
						else
							elib::Core::eprintf("> %d，未能支持的类型：0x%p", i + 1, v_type(i));
					}
				}
			}
			catch (__hException& e){ sysLog(errOutRuntime(e.err, e.message)); }
		}

		defFunctionBegin(xx_wait_key);
		__tuple t; if (v_empty(0)) t = 0; else elib::Utils::fillTuple(a + 0, t);
		rv_int = ehalcon::WindowManager::waitkey(ehalcon::Utils::tupleGetLong(t));
		defFunctionEnd;

		//////////////////////////////////////////////////////////////////////////
		//dev函数
		defFunctionBegin_Try(xx_gen_tuple_const);
		__tuple* np = ehalcon::Core::newTuple();
		__tuple t0, t1;
		elib::Utils::fillTuple(a + 0, t0); elib::Utils::fillTuple(a + 1, t1);
		*np = __tuple(t0, t1);
		rv_tupleset(np);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_dev_set_part);
		__tuple t0; if (v_empty(0))t0 = 0; else elib::Utils::fillTuple(a + 0, t0);
		__tuple t1; if (v_empty(1))t1 = 0; else elib::Utils::fillTuple(a + 1, t1);
		__tuple t2; if (v_empty(2))t2 = -1; else elib::Utils::fillTuple(a + 2, t2);
		__tuple t3; if (v_empty(3))t3 = -1; else elib::Utils::fillTuple(a + 3, t3);
		if (ehalcon::WindowManager::isopen())
		err = set_part(ehalcon::WindowManager::active(), t0, t1, t2, t3);
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_subset);
		__tuple t0; elib::Utils::fillTuple(a -1 , t0);
		__tuple t1; elib::Utils::fillTuple(a, t1);
		__tuple* v = ehalcon::Core::newTuple();
		*v = t0.Subset(t1);
		rv_tupleset(v);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_open_window);
		Hlong h = 0;
		__tuple t0, t1, t2, t3, t4, t5, t6, t7;
		if (v_empty(0))t0 = flagWindowPoseCenter; else elib::Utils::fillTuple(a + 0, t0);
		if (v_empty(1))t1 = flagWindowPoseCenter; else elib::Utils::fillTuple(a + 1, t1);
		if (v_empty(2))t2 = 256; else elib::Utils::fillTuple(a + 2, t2);
		if (v_empty(3))t3 = 256; else elib::Utils::fillTuple(a + 3, t3);
		if (v_empty(4))t4 = 0; else elib::Utils::fillTuple(a + 4, t4);
		if (v_empty(5))t5 = "visible"; else elib::Utils::fillTuple(a + 5, t5);
		if (v_empty(6))t6 = ""; else elib::Utils::fillTuple(a + 6, t6);
		err = ehalcon::WindowManager::open(t0[0], t1[0], t2[0], t3[0], t4[0], t5[0], t6[0], &h);
		elib::Utils::fillVar(__tuple(h), a + 7);
		//err=ehalconWindowManager::open(v_int(0), v_int(1), v_int(2), v_int(3), v_int(4), v_string(5), v_string(6), &h);
		//if(a[7].m_dtDataType != 0)*a[7].m_pInt = h;
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_close_all_window);
		err = ehalcon::WindowManager::closeAll();
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_os_window_hand);
		rv_int = (int)ehalcon::WindowManager::hwnd(v_int(0));
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_aw);
		rv_int = (int)ehalcon::WindowManager::active();
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_close_window);
		err = ehalcon::WindowManager::closeLast();
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_dev_clear_window);
		if (ehalcon::WindowManager::isopen())
		err = clear_window(__tuple(ehalcon::WindowManager::active()));
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_dev_open_window);
		Hlong h = 0;
		__tuple t0, t1, t2, t3, t4;
		if (v_empty(0))t0 = flagWindowPoseCenter; else elib::Utils::fillTuple(a + 0, t0);
		if (v_empty(1))t1 = flagWindowPoseCenter; else elib::Utils::fillTuple(a + 1, t1);
		if (v_empty(2))t2 = 256; else elib::Utils::fillTuple(a + 2, t2);
		if (v_empty(3))t3 = 256; else elib::Utils::fillTuple(a + 3, t3);
		if (v_empty(4))t4 = "black"; else elib::Utils::fillTuple(a + 4, t4);
		set_window_attr("background_color", t4);
		err = ehalcon::WindowManager::open(t0[0], t1[0], t2[0], t3[0], 0, "visible", "", &h);
		elib::Utils::fillVar(__tuple(h), a + 5);
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_dev_set_draw);
		if (ehalcon::WindowManager::isopen()){
			__tuple t; if (v_empty(0))t = "fill"; else elib::Utils::fillTuple(a, t);
			err = set_draw(ehalcon::WindowManager::active(), t);
		}
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_dev_set_color);
		if (ehalcon::WindowManager::isopen()){
			__tuple t; if (v_empty(0)) t = "white"; else elib::Utils::fillTuple(a, t);
			err = set_color(ehalcon::WindowManager::active(), t);
		}
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_dev_set_line_width);
		if (ehalcon::WindowManager::isopen()){
			__tuple t0; if (v_empty(0)) t0 = 1; else elib::Utils::fillTuple(a + 0, t0);
			err = set_line_width(ehalcon::WindowManager::active(), t0);
		}
		defFunctionEnd_SetErrorCode;

		extern Herror set_display_font(__tuple WindowHandle, __tuple Size, __tuple Font,
			__tuple Bold, __tuple Slant);
		defFunctionBegin_Try(xx_set_display_font);
		// 	__tuple t0; if(v_empty(0)) t0 = ehalconWindowManager::active(); else elibCoreUtils::fillTuple(a + 0, t0);
		// 	err = set_display_font(t0, v_int(1), v_string(2), v_string(3), v_string(4));
		__tuple t0; if (v_empty(0)) t0 = ehalcon::WindowManager::active(); else elib::Utils::fillTuple(a + 0, t0);
		__tuple t1; if (v_empty(1)) t1 = 16; else elib::Utils::fillTuple(a + 1, t1);
		__tuple t2; if (v_empty(2)) t2 = "mono"; else elib::Utils::fillTuple(a + 2, t2);
		__tuple t3; if (v_empty(3)) t3 = "true"; else elib::Utils::fillTuple(a + 3, t3);
		__tuple t4; if (v_empty(4)) t4 = "false"; else elib::Utils::fillTuple(a + 4, t4);
		err = set_display_font(t0, t1, t2, t3, t4);
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_dev_display);
		if (ehalcon::WindowManager::isopen())
		err = disp_obj(a_obj(0), ehalcon::WindowManager::active());
		defFunctionEnd_SetErrorCode;

		bool tuple_logical_value(const __tuple& t){
			bool isbox = t.Num() > 0;
			if (isbox){
				switch (t[0].ValType()){
				case Halcon::LongVal:
					isbox = t[0].L() != 0;  break;
				case Halcon::StringVal:
					isbox = strcmp(t[0].S(), "true") == 0;  break;
				case Halcon::DoubleVal:
					isbox = t[0].D() != 0;  break;
				}
			}
			return isbox;
		}

		extern Herror disp_message(__tuple WindowHandle, __tuple String, __tuple CoordSystem,
			__tuple Row, __tuple Column, __tuple Color, bool Box);
		defFunctionBegin_Try(xx_disp_message);
		__tuple t0; if (v_empty(0)) t0 = ehalcon::WindowManager::active(); else elib::Utils::fillTuple(a + 0, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		__tuple t2; if (v_empty(2)) t2 = "window"; else elib::Utils::fillTuple(a + 2, t2);
		__tuple t3; if (v_empty(3)) t3 = 12; else elib::Utils::fillTuple(a + 3, t3);
		__tuple t4; if (v_empty(4)) t4 = 12; else elib::Utils::fillTuple(a + 4, t4);
		__tuple t5; if (v_empty(5)) t5 = "black"; else elib::Utils::fillTuple(a + 5, t5);
		__tuple t6; if (v_empty(6)) t6 = "true"; else elib::Utils::fillTuple(a + 6, t6);
		bool isbox = tuple_logical_value(t6);
		err = disp_message(t0, t1, t2, t3, t4, t5, isbox);
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_dev_set_window);
		__tuple t0; if (v_empty(0)) t0 = ehalcon::WindowManager::active(); else elib::Utils::fillTuple(a + 0, t0);
		err = ehalcon::WindowManager::setActivie(t0[0]) ? errOk : errErr;
		defFunctionEnd_SetErrorCode;

		extern Herror disp_continue_message(__tuple WindowHandle, __tuple Color, bool Box);
		defFunctionBegin_Try(xx_disp_continue_message);
		__tuple t0; if (v_empty(0)) t0 = ehalcon::WindowManager::active(); else elib::Utils::fillTuple(a + 0, t0);
		__tuple t1; if (v_empty(1)) t1 = "black"; else elib::Utils::fillTuple(a + 1, t1);
		__tuple t2; if (v_empty(2)) t2 = "true"; else elib::Utils::fillTuple(a + 2, t2);
		err = disp_continue_message(t0, t1, tuple_logical_value(t2));
		//elibCore::eprintf("等待按键后继续...");
		//ehalconWindowManager::waitkey(t0[0], VK_F5);
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_stop);
		elib::Core::epause();
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_update_window);
		defFunctionEnd_NoSetErrorCode;
		defFunctionBegin_Try(xx_dev_update_var);
		defFunctionEnd_NoSetErrorCode;
		defFunctionBegin_Try(xx_dev_update_pc);
		defFunctionEnd_NoSetErrorCode;
		defFunctionBegin_Try(xx_dev_update_time);
		defFunctionEnd_NoSetErrorCode;
		//
		defFunctionBegin_Try(xx_dev_map_par);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_map_prog);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_map_var);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_unmap_par);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_unmap_prog);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_unmap_var);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_set_window_extents);
		if (ehalcon::WindowManager::isopen()){
			__tuple t0, t1, t2, t3;
			if (v_empty(0)) t0 = flagWindowPoseCenter; else elib::Utils::fillTuple(a + 0, t0);
			if (v_empty(1)) t1 = flagWindowPoseCenter; else elib::Utils::fillTuple(a + 1, t1);
			if (v_empty(2)) t2 = 256; else elib::Utils::fillTuple(a + 2, t2);
			if (v_empty(3)) t3 = 256; else elib::Utils::fillTuple(a + 3, t3);
			err = ehalcon::WindowManager::setExtents(ehalcon::WindowManager::active(), t0[0], t1[0], t2[0], t3[0]);
		}
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_dev_clear_obj);
		a_obj(0).Reset();
		//clear_obj(a_obj(0)); 异常
		defFunctionEnd_SetErrorCode;

		void xx_dev_error_var(PMDATA_INF r, INT c, PMDATA_INF a){
			offsetRemoveThisPtr;
			__tuple* t = ptr_tuple(0);
			__tuple t1; if (v_empty(1)) t1 = 1; else elib::Utils::fillTuple(a + 1, t1);
			if (0 != t1){
				ehalcon::Core::setSystemCheckErrorVar(t);
				//xx_set_error_var(t);
			}
			else{
				ehalcon::Core::setSystemCheckErrorVar(0);
				//xx_set_error_var(0);
			}
		};

		defFunctionBegin_Try(xx_dev_get_exception_data);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_set_check);
		__tuple t; if (v_empty(0)) t = "give_error"; else elib::Utils::fillTuple(a, t);
		err = set_check(t);
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_dev_close_inspect_ctrl);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_get_preferences);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_inspect_ctrl);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_set_colored);
		if (ehalcon::WindowManager::isopen()){
			__tuple t; if (v_empty(0)) t = 6; else elib::Utils::fillTuple(a, t);
			err = set_colored(ehalcon::WindowManager::active(), t);
		}
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_dev_set_lut);
		if (ehalcon::WindowManager::isopen()){
			__tuple t; if (v_empty(0)) t = "default"; else elib::Utils::fillTuple(a, t);
			err = set_lut(ehalcon::WindowManager::active(), t);
		}
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_dev_set_paint);
		if (ehalcon::WindowManager::isopen()){
			__tuple v; elib::Utils::fillTuple(a, v);
			err = set_paint(ehalcon::WindowManager::active(), v);
		}
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_dev_set_preferences);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_set_shape);
		if (ehalcon::WindowManager::isopen()){
			__tuple t; if (v_empty(0)) t = "original"; else elib::Utils::fillTuple(a, t);
			err = set_shape(ehalcon::WindowManager::active(), t);
		}
		defFunctionEnd_SetErrorCode;

		//////////////////////////////////////////////////////////////////////////
		//tuple的成员函数
		defFunctionBegin_Try(xx_x_strlen);
		__tuple* t = ehalcon::Core::newTuple();
		*t = a_tuple(-1).Strlen();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_insert);
		__tuple t0, t1;
		if (v_empty(0)) t0 = 0; else elib::Utils::fillTuple(a + 0, t0);
		if (v_empty(1)) t1 = 1; else elib::Utils::fillTuple(a + 1, t1);
		a_tuple(-1) = a_tuple(-1).Insert(t0, t1);
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_x_split);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		*t = a_tuple(-1).Split(t0);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_uniq);
		__tuple* t = ehalcon::Core::newTuple();
		*t = a_tuple(-1).Uniq();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_remove);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		*t = a_tuple(-1).Remove(t0);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_strchr);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		*t = a_tuple(-1).Strchr(t0);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_regexp_select);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		*t = a_tuple(-1).RegexpSelect(t0);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_strstr);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		*t = a_tuple(-1).Strstr(t0);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_lsh);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		tuple_lsh(a_tuple(-1), t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_rsh);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		tuple_rsh(a_tuple(-1), t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_find);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		*t = a_tuple(-1).Find(t0);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_set);
		a_tuple(-1).Reset();
		elib::Utils::fillTuple(a, a_tuple(-1));
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_x_not);
		__tuple* t = ehalcon::Core::newTuple();
		*t = a_tuple(-1).Not();
		//tuple_not(t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_bnot);
		__tuple* t = ehalcon::Core::newTuple();
		tuple_bnot(a_tuple(-1), t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_getcount);
		rv_int = 0;
		Hlong count = 0;
		tuple_length(a_tuple(-1), &count);
		rv_int = count;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_x_get_value);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0);
		tuple_select(a_tuple(-1), t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_get_value_range);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0, t1;
		elib::Utils::fillTuple(a + 0, t0);
		elib::Utils::fillTuple(a + 1, t1);
		//tuple_select_range(a_tuple(0), t1, t2, t);
		*t = a_tuple(-1)(t0, t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_get_value_string);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_str_bit_select(a_tuple(-1), t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_get_value_string_range);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0, t1;
		elib::Utils::fillTuple(a + 0, t0);
		elib::Utils::fillTuple(a + 1, t1); 
		*t = a_tuple(-1).Substring(t0, t1);
		//tuple_select_range(a_tuple(0), t1, t2, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_add);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_add(a_tuple(-1), t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_sub);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_sub(a_tuple(-1), t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_mul);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_mult(a_tuple(-1), t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_div);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_div(a_tuple(-1), t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_mod);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_mod(a_tuple(-1), t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		//=~特指的是regmatch
		defFunctionBegin_Try(xx_x_regexp);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		//tuple_regexp_match(t0, t1, t);
		*t = a_tuple(-1).RegexpMatch(t0);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_band);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_band(a_tuple(-1), t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_bxor);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_bxor(a_tuple(-1), t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_bor);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_bor(a_tuple(-1), t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_format);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		//tuple_string(t0, t1, t);
		*t = a_tuple(-1).ToString(t0);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_and);
		__tuple t;
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		//tuple_and(t0, t1, &t);
		t = a_tuple(-1).And(t0);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_x_or);
		__tuple t;
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_or(a_tuple(-1), t0, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_x_xor);
		__tuple t;
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_xor(a_tuple(-1), t0, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_x_less);
		__tuple t;
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_less(a_tuple(-1), t0, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_x_greater);
		__tuple t;
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_greater(a_tuple(-1), t0, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_x_less_equal);
		__tuple t;
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_less_equal(a_tuple(-1), t0, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_x_greater_equal);
		__tuple t;
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_greater_equal(a_tuple(-1), t0, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_x_equal);
		__tuple t;
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_equal(a_tuple(-1), t0, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_x_not_equal);
		__tuple t;
		__tuple t0;
		elib::Utils::fillTuple(a + 0, t0); 
		tuple_not_equal(a_tuple(-1), t0, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;


		defFunctionBegin_Try(xx_x_sin);
		__tuple* t = ehalcon::Core::newTuple();
		//tuple_sin(v, t);
		*t = a_tuple(-1).Sin();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_cos);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_cos(v, t);
		*t = a_tuple(-1).Cos();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_tan);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_tan(v, t);
		*t = a_tuple(-1).Tan();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_asin);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_asin(v, t);
		*t = a_tuple(-1).Asin();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_acos);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_acos(v, t);
		*t = a_tuple(-1).Acos();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_atan);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_atan(v, t);
		*t = a_tuple(-1).Atan();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_atan2);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple v1; elib::Utils::fillTuple(a-1, v1);
		__tuple v2; elib::Utils::fillTuple(a, v2);
		//tuple_atan2(v1, v2, t);
		*t = v1.Atan2(v2);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_sinh);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_sinh(v, t);
		*t = a_tuple(-1).Sinh();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_cosh);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_cosh(v, t);
		*t = a_tuple(-1).Cosh();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_tanh);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_tanh(v, t);
		*t = a_tuple(-1).Tanh();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_exp);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_exp(v, t);
		*t = a_tuple(-1).Exp();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_log);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_log(v, t);
		*t = a_tuple(-1).Log();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_log10);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_log10(v, t);
		*t = a_tuple(-1).Log10();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_pow);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple v1; elib::Utils::fillTuple(a-1, v1);
		__tuple v2; elib::Utils::fillTuple(a, v2);
		//tuple_pow(v1, v2, t);
		*t = v1.Pow(v2);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_ldexp);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple v1; elib::Utils::fillTuple(a-1, v1);
		__tuple v2; elib::Utils::fillTuple(a, v2);
		//tuple_ldexp(v1, v2, t);
		*t = v1.Ldexp(v2);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_min);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_min(v, t);
		*t = a_tuple(-1).Min();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_min2);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple v1; elib::Utils::fillTuple(a-1, v1);
		__tuple v2; elib::Utils::fillTuple(a, v2);
		//tuple_min2(v1, v2, t);
		*t = v1.Min2(v2);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_max);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_max(v, t);
		*t = a_tuple(-1).Max();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_max2);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple v1; elib::Utils::fillTuple(a-1, v1);
		__tuple v2; elib::Utils::fillTuple(a, v2);
		//tuple_max2(v1, v2, t);
		*t = v1.Max2(v2);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_sum);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_sum(v, t);
		*t = a_tuple(-1).Sum();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_mean);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_mean(v, t);
		*t = a_tuple(-1).Mean();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_deviation);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_deviation(v, t);
		*t = a_tuple(-1).Deviation();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_cumul);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_cumul(v, t);
		*t = a_tuple(-1).Cumul();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_median);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_median(v, t);
		*t = a_tuple(-1).Median();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_select_rank);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple v1; elib::Utils::fillTuple(a-1, v1);
		__tuple v2; elib::Utils::fillTuple(a, v2);
		//tuple_select_rank(v1, v2, t);
		*t = v1.SelectRank(v2);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_sqrt);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_sqrt(v, t);
		*t = a_tuple(-1).Sqrt();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_deg);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_deg(v, t);
		*t = a_tuple(-1).Deg();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_rad);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_rad(v, t);
		*t = a_tuple(-1).Rad();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_real);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_real(v, t);
		*t = a_tuple(-1).Real();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_int);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_int(v, t);
		*t = a_tuple(-1).Int();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_round);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_round(v, t);
		*t = a_tuple(-1).Round();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_abs);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_abs(v, t);
		*t = a_tuple(-1).Abs();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_fabs);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_fabs(v, t);
		*t = a_tuple(-1).Abs();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_ceil);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_ceil(v, t);
		*t = a_tuple(-1).Ceil();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_floor);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_floor(v, t);
		*t = a_tuple(-1).Floor();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_fmod);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple v1; elib::Utils::fillTuple(a-1, v1);
		__tuple v2; elib::Utils::fillTuple(a, v2);
		//tuple_fmod(v1, v2, t);
		*t = v1.Fmod(v2);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_sgn);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_sgn(v, t);
		*t = a_tuple(-1).Sgn();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_sort);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_sort(v, t);
		*t = a_tuple(-1).Sort();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_sort_index);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_sort_index(v, t);
		*t = a_tuple(-1).SortIndex();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_inverse);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_inverse(v, t);
		*t = a_tuple(-1).Inverse();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_is_number);
		__tuple t;
		
		//tuple_is_number(v, &t);
		t = a_tuple(-1).IsNumber();
		rv_bool = t[0].L();
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_x_number);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_number(v, t);
		*t = a_tuple(-1).Number();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_environment);
		__tuple* t = ehalcon::Core::newTuple();
		
		tuple_environment(a_tuple(-1), t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_ord);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_ord(v, t);
		*t = a_tuple(-1).Ord();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_chr);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_chr(v, t);
		*t = a_tuple(-1).Chr();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_ords);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_ords(v, t);
		*t = a_tuple(-1).Ords();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_chrt);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_chrt(v, t);
		*t = a_tuple(-1).Chrt();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_rand);
		__tuple* t = ehalcon::Core::newTuple();
		
		//tuple_rand(v, t);
		*t = a_tuple(-1).Rand();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_regexp_test);
		__tuple t0; 
		elib::Utils::fillTuple(a, t0); 
		rv_int = a_tuple(-1).RegexpTest(t0);
		defFunctionEnd_NoSetErrorCode;
		/////////////////////////tuple成员函数
		//////////////////////////////////////////////////////////////////////////

		defFunctionBegin_Try(xx_dev_update_off);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_dev_update_on);
		defFunctionEnd_NoSetErrorCode;

		extern void dev_display_shape_matching_results(__tuple ModelID, __tuple Color, __tuple Row,
			__tuple Column, __tuple Angle, __tuple ScaleR, __tuple ScaleC, __tuple Model);
		defFunctionBegin_Try(xx_dev_display_shape_matching_results);
		__tuple t0, t1, t2, t3, t4, t5, t6, t7;
		elib::Utils::fillTuple(a + 0, t0);
		if (v_empty(1))t1 = "red"; else elib::Utils::fillTuple(a + 1, t1);
		elib::Utils::fillTuple(a + 2, t2);
		elib::Utils::fillTuple(a + 3, t3);
		elib::Utils::fillTuple(a + 4, t4);
		if (v_empty(5))t5 = 1.0; else elib::Utils::fillTuple(a + 5, t5);
		if (v_empty(6))t6 = 1.0; else elib::Utils::fillTuple(a + 6, t6);
		if (v_empty(7))t7 = 0; else elib::Utils::fillTuple(a + 7, t7);
		dev_display_shape_matching_results(t0, t1, t2, t3, t4, t5, t6, t7);
		defFunctionEnd_NoSetErrorCode;

		extern Herror dev_open_window_fit_image(__obj Image, __tuple Row, __tuple Column,
			__tuple WidthLimit, __tuple HeightLimit, __tuple *WindowHandle);
		defFunctionBegin_Try(xx_dev_open_window_fit_image);
		__tuple t1, t2, t3, t4, t5;
		if (v_empty(1))t1 = 0; else elib::Utils::fillTuple(a + 1, t1);
		if (v_empty(2))t2 = 0; else elib::Utils::fillTuple(a + 2, t2);
		if (v_empty(3))t3 = -1; else elib::Utils::fillTuple(a + 3, t3);
		if (v_empty(4))t4 = -1; else elib::Utils::fillTuple(a + 4, t4);
		err = dev_open_window_fit_image(a_obj(0), t1, t2, t3, t4, &t5);
		elib::Utils::fillVar(t5, a + 5);
		defFunctionEnd_NoSetErrorCode;

		extern Herror dev_open_window_fit_size(__tuple Row, __tuple Column, __tuple Width,
			__tuple Height, __tuple WidthLimit, __tuple HeightLimit, __tuple *WindowHandle);
		defFunctionBegin_Try(xx_dev_open_window_fit_size);
		__tuple t0, t1, t2, t3, t4, t5, t6;
		if (v_empty(0))t0 = 0; else elib::Utils::fillTuple(a + 0, t0);
		if (v_empty(1))t1 = 0; else elib::Utils::fillTuple(a + 1, t1);
		elib::Utils::fillTuple(a + 2, t2);
		elib::Utils::fillTuple(a + 3, t3);
		if (v_empty(4))t4 = -1; else elib::Utils::fillTuple(a + 4, t4);
		if (v_empty(5))t5 = -1; else elib::Utils::fillTuple(a + 5, t5);
		err = dev_open_window_fit_size(t0, t1, t2, t3, t4, t5, &t6);
		elib::Utils::fillVar(t6, a + 6);
		defFunctionEnd_NoSetErrorCode;

		extern void dev_resize_window_fit_image(__obj Image, __tuple Row, __tuple Column,
			__tuple WidthLimit, __tuple HeightLimit);
		defFunctionBegin_Try(xx_dev_resize_window_fit_image);
		__tuple t1, t2, t3, t4, t5;
		if (v_empty(1))t1 = 0; else elib::Utils::fillTuple(a + 1, t1);
		if (v_empty(2))t2 = 0; else elib::Utils::fillTuple(a + 2, t2);
		if (v_empty(3))t3 = -1; else elib::Utils::fillTuple(a + 3, t3);
		if (v_empty(4))t4 = -1; else elib::Utils::fillTuple(a + 4, t4);
		if (v_empty(5))t5 = ehalcon::WindowManager::active(); else elib::Utils::fillTuple(a + 5, t5);
		dev_resize_window_fit_image(a_obj(0), t1, t2, t3, t4);
		defFunctionEnd_NoSetErrorCode;

		extern void dev_resize_window_fit_size(__tuple Row, __tuple Column, __tuple Width,
			__tuple Height, __tuple WidthLimit, __tuple HeightLimit);
		defFunctionBegin_Try(xx_dev_resize_window_fit_size);
		__tuple t0, t1, t2, t3, t4, t5, t6;
		if (v_empty(0))t0 = 0; else elib::Utils::fillTuple(a + 0, t0);
		if (v_empty(1))t1 = 0; else elib::Utils::fillTuple(a + 1, t1);
		elib::Utils::fillTuple(a + 2, t2);
		elib::Utils::fillTuple(a + 3, t3);
		if (v_empty(4))t4 = -1; else elib::Utils::fillTuple(a + 4, t4);
		if (v_empty(5))t5 = -1; else elib::Utils::fillTuple(a + 5, t5);
		if (v_empty(6))t6 = ehalcon::WindowManager::active(); else elib::Utils::fillTuple(a + 6, t6);
		dev_resize_window_fit_size(t0, t1, t2, t3, t4, t5);
		defFunctionEnd_NoSetErrorCode;

		//////////////////////////////////////////////////////////////////////////
		extern void disp_3d_coord_system(__tuple WindowHandle, __tuple CamParam,
			__tuple Pose, __tuple CoordAxesLength);
		defFunctionBegin_Try(xx_disp_3d_coord_system);
		__tuple t0, t1, t2, t3;
		if (v_empty(0))t0 = ehalcon::WindowManager::active(); else elib::Utils::fillTuple(a + 0, t0);
		if (v_empty(1)){ double vs[] = { 0.012, 0.0, 5e-6, 5e-6, 320, 240, 640, 480 }; ehalcon::Utils::arr2TupleDouble(vs, sizeof(vs) / sizeof(vs[0]), t1); }
		else elib::Utils::fillTuple(a + 1, t1);
		if (v_empty(2)){ double vs[] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0 }; ehalcon::Utils::arr2TupleDouble(vs, sizeof(vs) / sizeof(vs[0]), t2); }
		else elib::Utils::fillTuple(a + 2, t2);
		if (v_empty(3)){ t3 = 0.05; }
		else elib::Utils::fillTuple(a + 3, t3);
		disp_3d_coord_system(t0, t1, t2, t3);
		defFunctionEnd_NoSetErrorCode;

		extern void gen_arrow_contour_xld(__obj *Arrow, __tuple Row1, __tuple Column1,
			__tuple Row2, __tuple Column2, __tuple HeadLength, __tuple HeadWidth);
		defFunctionBegin_Try(xx_gen_arrow_contour_xld);
		__tuple t1, t2, t3, t4, t5, t6;
		if (v_empty(1))t1 = 100; else elib::Utils::fillTuple(a + 1, t1);
		if (v_empty(2))t2 = 100; else elib::Utils::fillTuple(a + 2, t2);
		if (v_empty(3))t3 = 200; else elib::Utils::fillTuple(a + 3, t3);
		if (v_empty(4))t4 = 200; else elib::Utils::fillTuple(a + 4, t4);
		if (v_empty(5))t5 = 5; else elib::Utils::fillTuple(a + 5, t5);
		if (v_empty(6))t6 = 5; else elib::Utils::fillTuple(a + 6, t6);
		gen_arrow_contour_xld(varp_obj(0), t1, t2, t3, t4, t5, t6);
		defFunctionEnd_NoSetErrorCode;

		extern void list_image_files(__tuple ImageDirectory, __tuple Extensions,
			__tuple Options, __tuple *ImageFiles);
		defFunctionBegin_Try(xx_list_image_files);
		__tuple t1, t2, t3, t0;
		elib::Utils::fillTuple(a + 0, t0);
		if (v_empty(1))t1 = "default"; else elib::Utils::fillTuple(a + 1, t1);
		if (!v_empty(2))elib::Utils::fillTuple(a + 2, t2);
		list_image_files(t0, t1, t2, &t3);
		elib::Utils::fillVar(t3, a + 3);
		defFunctionEnd_NoSetErrorCode;

		extern void parse_filename(__tuple FileName, __tuple *BaseName,
			__tuple *Extension, __tuple *Directory);
		defFunctionBegin_Try(xx_parse_filename);
		__tuple t1, t2, t3, t0;
		elib::Utils::fillTuple(a + 0, t0);
		parse_filename(t0, &t1, &t2, &t3);
		elib::Utils::fillVar(t1, a + 1); elib::Utils::fillVar(t2, a + 2); elib::Utils::fillVar(t3, a + 3);
		defFunctionEnd_NoSetErrorCode;

		extern void scale_image_range(__obj Image, __obj *ImageScaled,
			__tuple Min, __tuple Max);
		defFunctionBegin_Try(xx_scale_image_range);
		__tuple t2, t3;
		if (!v_empty(2))elib::Utils::fillTuple(a + 2, t2);
		if (!v_empty(3))elib::Utils::fillTuple(a + 3, t3);
		scale_image_range(a_obj(0), varp_obj(1), t2, t3);
		defFunctionEnd_NoSetErrorCode;

		extern void sort_pairs(__tuple T1, __tuple T2,
			__tuple SortMode, __tuple *Sorted1, __tuple *Sorted2);
		defFunctionBegin_Try(xx_sort_pairs);
		__tuple t0, t1, t2, t3, t4;
		elib::Utils::fillTuple(a + 0, t0);
		elib::Utils::fillTuple(a + 1, t1);
		if (v_empty(2))t2 = 1; else elib::Utils::fillTuple(a + 2, t2);
		sort_pairs(t0, t1, t2, &t3, &t4);
		elib::Utils::fillVar(t3, a + 3); elib::Utils::fillVar(t4, a + 4);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_tuple_gen_sequence);
		__tuple t0, t1, t2;
		__tuple* t = ehalcon::Core::newTuple();
		if (v_empty(0))t0 = 1.0; else elib::Utils::fillTuple(a + 0, t0);
		if (v_empty(1))t1 = 10.0; else elib::Utils::fillTuple(a + 1, t1);
		if (v_empty(2))t2 = 1.0; else elib::Utils::fillTuple(a + 2, t2);
		tuple_gen_sequence(t0, t1, t2, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_x_obj_width);
		__obj* p = ptr_obj(0);
		__tuple w, h;
		get_image_size(*p, &w, &h);
		rv_int = w[0].L();
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_x_obj_height);
		__obj* p = ptr_obj(0);
		__tuple w, h;
		get_image_size(*p, &w, &h);
		rv_int = h[0].L();
		defFunctionEnd_NoSetErrorCode;

		void xx_x_read_image(PMDATA_INF r, INT c, PMDATA_INF a){
			offsetRemoveThisPtr;
			Herror err = errOk;
			__tuple file_name;
			try{
				if (v_empty(1))file_name = "fabrik"; else elib::Utils::fillTuple(a + 1, file_name);
				err = read_image(varp_obj(0), file_name);
			}
			catch (__hException& e){
				err = e.err;
				if (file_name.Num() == 1){
					sysLog("发生错误(编号 = 0x%X, 所处函数 = %s)：%s，图像路径：%s", e.err, __FUNCTION__, e.message, file_name[0].S());
				}
				else if (file_name.Num() > 0){
					sysLog("发生错误(编号 = 0x%X, 所处函数 = %s)：%s，图像路径信息如下：", e.err, __FUNCTION__, e.message);
					elib::Utils::printTuple(file_name);
				}
				else {
					sysLog("发生错误(编号 = 0x%X, 所处函数 = %s)：%s，图像路径为空", e.err, __FUNCTION__, e.message);
				}
			}
			r->m_int = err;
			ehalcon::Core::setSystemCheckError(err);
		}

#include "function.halcon.impl.inl"

#if 1
		//////////////////////////////////////////////////////////////////////////
		//扩展的tuple的函数
		defFunctionBegin_Try(xx_ex_strlen);
		__tuple* t = ehalcon::Core::newTuple();
		*t = a_tuple(0).Strlen();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_insert);
		__tuple t0, t1;
		if (v_empty(1)) t0 = 1; else elib::Utils::fillTuple(a + 1, t0);
		if (v_empty(2)) t1 = 2; else elib::Utils::fillTuple(a + 2, t1);
		a_tuple(0) = a_tuple(0).Insert(t0, t1);
		defFunctionEnd_SetErrorCode;

		defFunctionBegin_Try(xx_ex_split);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		*t = t0.Split(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_uniq);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		*t = t0.Uniq();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_remove);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		*t = t0.Remove(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_strchr);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		*t = t0.Strchr(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		/*
		defFunctionBegin_Try(xx_ex_regexp_select);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		*t = t0.RegexpSelect(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;
		*/

		defFunctionBegin_Try(xx_ex_strstr);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		*t = t0.Strstr(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_lsh);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_lsh(t0, t1, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_rsh);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_rsh(t0, t1, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_find);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		*t = t0.Find(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_set);
		a_tuple(0).Reset();
		elib::Utils::fillTuple(a+1, a_tuple(0));
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_ex_not);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		*t = t0.Not();
		//tuple_not(t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_bnot);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		tuple_bnot(t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_getcount);
		rv_int = 0;
		Hlong count = 0;
		__tuple t0; elib::Utils::fillTuple(a, t0);
		tuple_length(t0, &count);
		rv_int = count;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_ex_get_value);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_select(t0, t1, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_get_value_range);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0, t1;
		elib::Utils::fillTuple(a + 1, t0);
		elib::Utils::fillTuple(a + 2, t1);
		//tuple_select_range(a_tuple(0), t0, t1, t);
		*t = a_tuple(0)(t0, t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_get_value_string);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_str_bit_select(t0, t1, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_get_value_string_range);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0, t1;
		elib::Utils::fillTuple(a + 1, t0);
		elib::Utils::fillTuple(a + 2, t1);
		*t = a_tuple(0).Substring(t0, t1);
		//tuple_select_range(a_tuple(0), t1, t2, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_add);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_add(t0, t1, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_sub);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_sub(t0, t1, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_mul);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_mult(t0, t1, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_div);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_div(t0, t1, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_mod);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_mod(t0, t1, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		//=~特指的是regmatch
		defFunctionBegin_Try(xx_ex_regexp);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		//tuple_regexp_match(t0, t1, t);
		*t = t0.RegexpMatch(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_band);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_band(t0, t1, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_bxor);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_bxor(t0, t1, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_bor);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_bor(t0, t1, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_format);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		//tuple_string(t0, t1, t);
		*t = t0.ToString(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_and);
		__tuple t;
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		//tuple_and(t0, t1, &t);
		t = t0.And(t1);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_ex_or);
		__tuple t;
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_or(t0, t1, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_ex_xor);
		__tuple t;
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_xor(t0, t1, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_ex_less);
		__tuple t;
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_less(t0, t1, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_ex_greater);
		__tuple t;
		__tuple t0, t1;
		elib::Utils::fillTuple(a, t0);
		elib::Utils::fillTuple(a + 1, t1);
		tuple_greater(t0, t1, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_ex_less_equal);
		__tuple t;
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_less_equal(t0, t1, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_ex_greater_equal);
		__tuple t;
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_greater_equal(t0, t1, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_ex_equal);
		__tuple t;
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_equal(t0, t1, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_ex_not_equal);
		__tuple t;
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		tuple_not_equal(t0, t1, &t);
		rv_bool = t[0].L() ? true : false;
		defFunctionEnd_NoSetErrorCode;


		defFunctionBegin_Try(xx_ex_sin);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_sin(v, t);
		*t =t0.Sin();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_cos);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_cos(v, t);
		*t = t0.Cos();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_tan);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_tan(v, t);
		*t = t0.Tan();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_asin);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_asin(v, t);
		*t = t0.Asin();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_acos);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_acos(v, t);
		*t = t0.Acos();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_atan);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_atan(v, t);
		*t = t0.Atan();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_atan2);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		//tuple_atan2(v1, v2, t);
		*t = t0.Atan2(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_sinh);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_sinh(v, t);
		*t = t0.Sinh();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_cosh);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_cosh(v, t);
		*t = t0.Cosh();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_tanh);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_tanh(v, t);
		*t = t0.Tanh();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_exp);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_exp(v, t);
		*t = t0.Exp();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_log);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_log(v, t);
		*t = t0.Log();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_log10);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_log10(v, t);
		*t = t0.Log10();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_pow);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		//tuple_pow(v1, v2, t);
		*t = t0.Pow(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_ldexp);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		//tuple_ldexp(v1, v2, t);
		*t = t0.Ldexp(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_min);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_min(v, t);
		*t = t0.Min();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_min2);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		//tuple_min2(v1, v2, t);
		*t = t0.Min2(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_max);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_max(v, t);
		*t = t0.Max();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_max2);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		//tuple_max2(v1, v2, t);
		*t = t0.Max2(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_sum);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_sum(v, t);
		*t = t0.Sum();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_mean);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_mean(v, t);
		*t = t0.Mean();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_deviation);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_deviation(v, t);
		*t = t0.Deviation();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_cumul);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_cumul(v, t);
		*t = t0.Cumul();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_median);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_median(v, t);
		*t = t0.Median();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_select_rank);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		//tuple_select_rank(v1, v2, t);
		*t = t0.SelectRank(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_sqrt);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_sqrt(v, t);
		*t = t0.Sqrt();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_deg);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_deg(v, t);
		*t = t0.Deg();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_rad);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_rad(v, t);
		*t = t0.Rad();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_real);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_real(v, t);
		*t = t0.Real();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_int);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_int(v, t);
		*t = t0.Int();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_round);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_round(v, t);
		*t = t0.Round();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_abs);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_abs(v, t);
		*t = t0.Abs();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_fabs);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_fabs(v, t);
		*t = t0.Abs();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_ceil);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_ceil(v, t);
		*t = t0.Ceil();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_floor);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_floor(v, t);
		*t = t0.Floor();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_fmod);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		//tuple_fmod(v1, v2, t);
		*t = t0.Fmod(t1);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_sgn);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_sgn(v, t);
		*t = t0.Sgn();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_sort);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_sort(v, t);
		*t = t0.Sort();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_sort_index);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_sort_index(v, t);
		*t = t0.SortIndex();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_inverse);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_inverse(v, t);
		*t = t0.Inverse();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_is_number);
		__tuple t;
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_is_number(v, &t);
		t = t0.IsNumber();
		rv_bool = t[0].L();
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_ex_number);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_number(v, t);
		*t = t0.Number();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_environment);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		tuple_environment(t0, t);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_ord);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_ord(v, t);
		*t = t0.Ord();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_chr);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_chr(v, t);
		*t = t0.Chr();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_ords);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_ords(v, t);
		*t = t0.Ords();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_chrt);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_chrt(v, t);
		*t = t0.Chrt();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_rand);
		__tuple* t = ehalcon::Core::newTuple();
		__tuple t0; elib::Utils::fillTuple(a, t0);
		//tuple_rand(v, t);
		*t = t0.Rand();
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_subset);
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		__tuple* v = ehalcon::Core::newTuple();
		*v = t0.Subset(t1);
		rv_tupleset(v);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_regexp_test);
		__tuple t0; elib::Utils::fillTuple(a, t0);
		__tuple t1; elib::Utils::fillTuple(a + 1, t1);
		rv_int = t0.RegexpTest(t1);
		defFunctionEnd_NoSetErrorCode;

		defFunctionBegin_Try(xx_ex_regexp_match);
		__tuple t0; elib::Utils::fillTuple(a + 0, t0);
		__tuple t1; if (v_empty(1))t1 = ".*"; else elib::Utils::fillTuple(a + 1, t1);
		__tuple* t = ehalcon::Core::newTuple();
		//callHalcon(tuple_regexp_match, err, t0, t1, t);
		*t = t0.RegexpMatch(t1);
		//elib::Utils::fillVar(t2, a + 2);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_regexp_replace);
		__tuple t0; elib::Utils::fillTuple(a + 0, t0);
		__tuple t1; if (v_empty(1))t1 = ".*"; else elib::Utils::fillTuple(a + 1, t1);
		__tuple t2; elib::Utils::fillTuple(a + 2, t2);
		__tuple* t = ehalcon::Core::newTuple();
		//callHalcon(tuple_regexp_replace, err, t0, t1, t2, t);
		*t = t0.RegexpReplace(t1, t2);
		//elib::Utils::fillVar(t3, a + 3);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;

		defFunctionBegin_Try(xx_ex_regexp_select);
		__tuple t0; elib::Utils::fillTuple(a + 0, t0);
		__tuple t1; if (v_empty(1))t1 = ".*"; else elib::Utils::fillTuple(a + 1, t1);
		__tuple* t = ehalcon::Core::newTuple();
		//callHalcon(tuple_regexp_select, err, t0, t1, t);
		*t = t0.RegexpSelect(t1);
		//elib::Utils::fillVar(t2, a + 2);
		rv_tupleset(t);
		defFunctionEnd_ReturnTuple;
		/////////////////////////扩展的tuple函数
		//////////////////////////////////////////////////////////////////////////


		/////////////////////////////////////////////////////////////////////////////////
		//扩展的halcon库函数
		extern void display_found_data_codes(
			__obj& ho_SymbolXLDs,
			__tuple hv_WindowHandle,
			__tuple hv_DecodedDataStrings,
			__tuple hv_TitleMessage,
			__tuple hv_ResultMessage,
			__tuple hv_ColorDecodedStrings,
			__tuple hv_ColorResult);
		defFunctionBegin_Try(x_ex_display_found_data_codes);
			
			__tuple t1; if (v_empty(1))t1 = ehalcon::WindowManager::active(); else elib::Utils::fillTuple(a + 1, t1);
			__tuple t2; if (v_empty(1))t2 = ""; else elib::Utils::fillTuple(a + 2, t2);
			__tuple t3; if (v_empty(1))t3 = ""; else elib::Utils::fillTuple(a + 3, t3);
			__tuple t4; if (v_empty(1))t4 = ""; else elib::Utils::fillTuple(a + 4, t4);
			__tuple t5; if (v_empty(1))t5 = ""; else elib::Utils::fillTuple(a + 5, t5);
			__tuple t6; if (v_empty(1))t6 = ""; else elib::Utils::fillTuple(a + 6, t6);

			display_found_data_codes(a_obj(0), t1, t2, t3, t4, t5, t6);
		defFunctionEnd_NoSetErrorCode;
#endif
	}
}