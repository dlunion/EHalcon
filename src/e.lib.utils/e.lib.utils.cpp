#include "e.lib.utils.h"
#include <string>
#include "ehalcon.core/ehalcon.core.h"
#include "ehalcon.utils/ehalcon.utils.h"
#include "ehalcon.utils/objectInfo.h"

namespace elib{
	namespace Utils{
		int dataTypeBytesSize(int dt){
			switch (dt){
			case SDT_INT:			return sizeof(int);
			case SDT_TEXT:			return sizeof(int);
			case SDT_DOUBLE:	return sizeof(double);
			case SDT_FLOAT:		return sizeof(float);
			case SDT_BOOL:		return sizeof(int);
			case SDT_SHORT:		return sizeof(short);
			}
			throwHError(errUnknownType, "获取长度时，不支持的类型：0x%X，这里仅仅支持基本类型：整数、文本、小数、双精度小数、逻辑、短整数", dt);
			return -1;
		}

		int makeEText(const char* t){
			int l = strlen(t);
			if (l == 0) return 0;
			char* p = (char*)elib::Core::emalloc(l + 1);
			strcpy(p, t);
			return (int)p;
		}

		void fillVar(__tuple& v, PMDATA_INF a){
			//a 是返回值，反向赋值
			if (a->m_dtDataType == _SDT_NULL) return;
			if (a->m_dtDataType & DT_IS_ARY){
				elib::Core::efreeArray(*a->m_ppAryData, a->m_dtDataType);
				int num = v.Num();
				int dtl = dataTypeBytesSize(a->m_dtDataType);
				*((int**)a->m_ppAryData) = (int*)elib::Core::emalloc(dtl * num + 2 * sizeof(int));
				int* p = *((int**)a->m_ppAryData);
				p[0] = 1;
				p[1] = num;
				p += 2;
				int tpe = a->m_dtDataType & (~DT_IS_ARY);
				for (int j = 0; j < num; ++j){
					switch (tpe){
					case SDT_INT:			p[j] = v[j];	break;
					case SDT_TEXT:			p[j] = makeEText(v[j]); break;
					case SDT_DOUBLE:	*((double*)p + j) = v[j];	break;
					case SDT_FLOAT:		*((float*)p + j) = (double)v[j];	break;
					case SDT_BOOL:		*((int*)p + j) = v[j];	break;
					case SDT_SHORT:		*((short*)p + j) = (int)v[j];	break;
					}
				}
			}
			else {
				int tpe = a->m_dtDataType;
				switch (a->m_dtDataType){
				case SDT_INT:			*a->m_pInt = v[0];	break;
				case SDT_TEXT:			*a->m_pText = makeEText(v[0]); break;
				case SDT_DOUBLE:	*a->m_pDouble = v[0];	break;
				case SDT_FLOAT:		*a->m_pFloat = (double)v[0];	break;
				case SDT_BOOL:		*a->m_pBool = v[0];	break;
				case SDT_SHORT:		*a->m_pShort = (int)v[0];	break;
				default:
					if ((tpe & 0xFFFF) == dataTypeTuple)
						var_tuple(0) = v;
					else
						throwHError(errUnknownType, "填充tuple赋值时失败，不支持的值类型: 0x%X，注意这里只能是：整数、文本、小数、双精度小数、逻辑、短整数", tpe);
					break;
				}
			}
		}

		void printObjectInfo(__obj& obj, int idx){
			ehalcon::ObjectInfo::ObjType tp; string className;
			tp = ehalcon::ObjectInfo::getObjectClass(obj, className);
			Halcon::HObjectArray* rootObj = 0;
			switch (tp){
			case ehalcon::ObjectInfo::ObjTypeImage:
				rootObj = new Halcon::HImageArray(obj);   break;
			case ehalcon::ObjectInfo::ObjTypeRegion:
				rootObj = new Halcon::HRegionArray(obj);   break;
			case ehalcon::ObjectInfo::ObjTypeXldCont:
				rootObj = new Halcon::HXLDContArray(obj);   break;
			case ehalcon::ObjectInfo::ObjTypeXldExtPara:
				rootObj = new Halcon::HXLDExtParaArray(obj);   break;
			case ehalcon::ObjectInfo::ObjTypeXldModPara:
				rootObj = new Halcon::HXLDModParaArray(obj);   break;
			case ehalcon::ObjectInfo::ObjTypeXldPara:
				rootObj = new Halcon::HXLDParaArray(obj);   break;
			case ehalcon::ObjectInfo::ObjTypeXldPoly:
				rootObj = new Halcon::HXLDPolyArray(obj);   break;
			default:
				//unknown
				elib::Core::eprintf("> %d，unknown object type：%s ( %d )", idx, className.c_str(), tp);
				return;
			}

			if (rootObj->Num() == 0){
				elib::Core::eprintf("> %d，object ( %s )，empty", idx, className.c_str());
			}
			else if (rootObj->Num() == 1){
				if (tp == ehalcon::ObjectInfo::ObjTypeImage){
					Halcon::HImageArray* arr = (Halcon::HImageArray*)rootObj;
					elib::Core::eprintf("> %d，object ( %s )，width = %d, height = %d, pix_type = %s", idx, className.c_str(), (*arr)[0].Width(), (*arr)[0].Height(), (*arr)[0].PixType());
				}
				else if (tp == ehalcon::ObjectInfo::ObjTypeRegion){
					Halcon::HRegionArray* arr = (Halcon::HRegionArray*)rootObj;
					Halcon::HRegion& preg = (*arr)[0];
					if (preg.IsEmpty()){
						elib::Core::eprintf("> %d，object ( %s )，empty", idx, className.c_str());
					}
					else{
						Halcon::HRectangle1 rc = (*arr)[0].BoundingBox();
						elib::Core::eprintf("> %d，object ( %s )，width = %d, height = %d，center.x = %f, center.y = %f, area = %d", idx, className.c_str(),
							rc.Width(), rc.Height(), preg.X(), preg.Y(), preg.Area());
					}
				}
				else{
					elib::Core::eprintf("> %d，object ( %s )", idx, className.c_str());
				}
			}
			else{
				if (tp != ehalcon::ObjectInfo::ObjTypeImage && tp != ehalcon::ObjectInfo::ObjTypeRegion){
					elib::Core::eprintf("> %d，object ( %s )，count = %d", idx, className.c_str(), rootObj->Num());
				}
				else{
					elib::Core::eprintf("> %d，object ( %s )，count = %d", idx, className.c_str(), rootObj->Num());
					int out_count = min(rootObj->Num(), 10);
					for (int i = 0; i < out_count; ++i){
						if (tp == ehalcon::ObjectInfo::ObjTypeImage){
							Halcon::HImageArray* arr = (Halcon::HImageArray*)rootObj;
							elib::Core::eprintf(">>>>> %d --- [%d]，object ( %s )，width = %d, height = %d, pix_type = %s", idx, i, className.c_str(), (*arr)[i].Width(), (*arr)[i].Height(), (*arr)[i].PixType());
						}
						else if (tp == ehalcon::ObjectInfo::ObjTypeRegion){
							Halcon::HRegionArray* arr = (Halcon::HRegionArray*)rootObj;
							Halcon::HRegion& preg = (*arr)[i];
							if (preg.IsEmpty()){
								elib::Core::eprintf(">>>>> %d --- [%d]，object ( %s )，empty", idx, i, className.c_str());
							}
							else{
								Halcon::HRectangle1 rc = (*arr)[i].BoundingBox();
								elib::Core::eprintf(">>>>> %d --- [%d]，object ( %s )，width = %.3f, height = %.3f，center.x = %.3f, center.y = %.3f, area = %d", idx, i, className.c_str(),
									rc.Width(), rc.Height(), preg.X(), preg.Y(), preg.Area());
							}
						}
					}

					if (out_count < rootObj->Num()){
						elib::Core::eprintf("^^^Too much element [ count = %d ], the remaining [ %d ] no output.", rootObj->Num(), rootObj->Num() - out_count);
					}
				}
			}

			delete rootObj;
		}

		void printTuple(__tuple& v){
			for (int j = 0; j < v.Num(); ++j){
				int vtpe = v[j].ValType();
				switch (vtpe){
				case Halcon::DoubleVal:			elib::Core::eprintf("=====>[%d]，Double：%f", j, v[j].D()); break;
				case Halcon::LongVal:			elib::Core::eprintf("=====>[%d]，Long：%d", j, v[j].L());	break;
				case Halcon::StringVal:			elib::Core::eprintf("=====>[%d]，String：%s", j, v[j].S()); break;
				default:
					elib::Core::eprintf("=====>[%d]，Undef(%d)", j, vtpe); break;
				}
			}
		}

		void fillTuple(PMDATA_INF a, __tuple& t){
			//这个函数是填充tuple的，支持输入参数，不支持输出参数
			// 	if(a->m_dtDataType != _SDT_NULL) t.Reset();   //如果不为空值则清掉现有的值
			// 	else return; // 如果是null则表示为空值，返回就好了
			if (a->m_dtDataType & DT_IS_ARY){
				int tpe = a->m_dtDataType & (~DT_IS_ARY);
				int num = a->m_pInt[1];
				int* p = a->m_pInt + 2;
				for (int j = 0; j < num; ++j){
					switch (tpe){
					case SDT_INT:			t.Append(p[j]);	break;
					case SDT_TEXT:			t.Append(p[j] == 0 ? "" : (char*)p[j]);	break;
					case SDT_DOUBLE:	t.Append(*((double*)p + j));	break;
					case SDT_FLOAT:		t.Append(*((float*)p + j));	break;
					case SDT_BOOL:		t.Append(p[j]);	break;
					case SDT_SHORT:		t.Append(*((short*)p + j));	break;
					default:
						//lib2.h中没有说为啥要0xFFFF，自己猜测的，因为每次得到的类型都是0x00020001，而并不是lib2.h中描述的应该是1
						if ((tpe & 0xFFFF) == dataTypeTuple)
							t.Append(*(*((__tuple**)p[j])));    //这里会不会出现undef的情况
						else
							throwHError(errUnknownType, "填充tuple赋值时失败，不支持的值类型: 0x%X，注意这里只能是：整数、文本、小数、双精度小数、逻辑、短整数", tpe);

						//对于自定义对象，比如tuple，p[0]存储的是第一个对象的指针，p[1]存储的是第二个对象
						//而*((int*)p[0])，则是对象地址，而对象地址中本身就是一个__tuple对象的指针，所以__tuple* v = (__tuple*)*((int*)p[0]);
						//所以最终的__tuple实体是 *((__tuple*)*((int*)p[j])) = *(*((__tuple**)p[j]));
						break;
					}
				}
			}
			else {
				int tpe = a->m_dtDataType;
				switch (a->m_dtDataType){
				case SDT_INT:			t.Append(a->m_int);	break;
				case SDT_TEXT:			t.Append(a->m_pText == 0 ? "" : a->m_pText);	break;
				case SDT_DOUBLE:	t.Append(a->m_double);	break;
				case SDT_FLOAT:		t.Append(a->m_float);	break;
				case SDT_BOOL:		t.Append(a->m_bool);	break;
				case SDT_SHORT:		t.Append(a->m_short);	break;
				default:
					if ((tpe & 0xFFFF) == dataTypeTuple)
						t.Append(a_tuple(0));    //这里会不会出现undef的情况
					else
						throwHError(errUnknownType, "填充tuple赋值时失败，不支持的值类型: 0x%X，注意这里只能是：整数、文本、小数、双精度小数、逻辑、短整数", tpe);
					break;
				}
			}
		}
	}
}