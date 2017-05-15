#include "objectInfo.h"
#include <map>

using namespace std;

namespace ehalcon{
	namespace ObjectInfo{
		map<string, ObjType> obj_class_id;
		const char* classes[] = {
			"unknown", "region", "image", "xld_cont", "xld_poly", "xld_para", "xld_mod_para", "xld_ext_para"
		};

		ObjType tps[] = {
			ObjTypeUnknown, ObjTypeRegion, ObjTypeImage, ObjTypeXldCont, ObjTypeXldPoly, ObjTypeXldPara, ObjTypeXldModPara,
			ObjTypeXldExtPara
		};

		void initialize(){
			for (int i = 0; i < sizeof(classes) / sizeof(classes[0]); ++i)
				obj_class_id[classes[i]] = tps[i];
		}

		ObjType getObjectClass(const __obj& obj, string& className){
			__tuple t; get_obj_class(obj, &t);
			className = t[0].S();
			map<string, ObjType>::iterator itr = obj_class_id.find(className);
			if (itr == obj_class_id.end()) return ObjTypeUnknown;
			return itr->second;
		}
	}
}