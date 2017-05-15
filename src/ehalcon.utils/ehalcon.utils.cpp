#include "ehalcon.utils.h"

namespace ehalcon{
	namespace Utils{
		int tupleGetLong(__tuple& t){
			if (t.Num() < 1) return 0;
			switch (t[0].ValType()){
			case Halcon::LongVal: return t[0].L();
			case Halcon::DoubleVal: return t[0].D();
			case Halcon::StringVal: return atoi(t[0].S());
			default: return 0;
			}
		}

		void arr2TupleString(const char** v, int n, __tuple& o){
			for (int i = 0; i < n; ++i) o.Append(v[i]);
		}

		void arr2TupleDouble(double* v, int n, __tuple& o){
			for (int i = 0; i < n; ++i) o.Append(v[i]);
		}

		void arr2TupleLong(int* v, int n, __tuple& o){
			for (int i = 0; i < n; ++i) o.Append(v[i]);
		}

		void tupleToString(const __tuple& t, string& str){
			if (t.Num() == 0) { str = ""; return; }
			int tpe = t[0].ValType();
			switch (tpe){
			case valTupleString: {
									 str = t[0].S();
									 break;
			}
			case valTupleDouble:{
									char buf[128];
									int n = sprintf(buf, "%lf", t[0].D());
									if (n >= 0)	str = buf;
									break;
			}
			case valTupleLong:{
								  char buf[128];
								  int n = sprintf(buf, "%d", t[0].L());
								  if (n >= 0)	str = buf;
								  break;
			}
			case valTupleUndef:
			default:
				str = "";
				break;
			}
		}
	}
}