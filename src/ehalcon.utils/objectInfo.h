#pragma once
#include "def.h"
#include <string>

namespace ehalcon{
	namespace ObjectInfo{
		enum ObjType{
			ObjTypeUnknown,
			ObjTypeRegion,
			ObjTypeImage,
			ObjTypeXldCont,
			ObjTypeXldPoly,
			ObjTypeXldPara,
			ObjTypeXldModPara,
			ObjTypeXldExtPara
		};

		void initialize();
		ObjType getObjectClass(const __obj& obj, std::string& className = std::string());
	}
}