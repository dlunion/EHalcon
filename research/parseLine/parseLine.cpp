#include <string> 
#include <vector>
#include <map>
#include <stack>
using namespace  std;

#define pfx			"hal."

#define Str_RangeSetter   pfx "赋值元组元素"
#define Str_VarSetter     pfx "赋值"
#define Str_IsTrue        pfx "是否为真"
#define Str_Getter        pfx "取元素"
#define Str_UnsupportPlus "*' 不支持的方法："
#define Str_Norecommended "' 不建议使用下面这个函数，他的做法并不好，严重影响效率，所以还请手动修改逻辑\n* '"
#define Str_Not           pfx "取反"
#define Str_BNot          pfx "位取反"
#define Str_GetCount      pfx "取元素总数"
#define Str_StringGet     pfx "取文本"
#define Str_StringGetRange pfx "取文本范围"
#define Str_ElementRange   pfx "取元素范围"
#define Const_Err_OK       "#视觉_错误代码_无错误"
//#define Debug_ErrStop  "#视觉_异常捕获模式_捕获"
//#define Debug_Used     "#调试_启用"
//#define Debug_Config   "调试配置"
//#define Str_LessEqual		 "小于等于"
//#define Str_GreaterEqual	 "大于等于"
#define Str_CloneTuple		pfx "克隆元组"
#define Str_CloneObj		pfx "克隆对象"
#define Str_GetElementLong	pfx "取元组整数"
#define Str_GetElementDouble pfx "取元组小数"
#define Str_GeneralTuple     pfx "创建元组"
#define Str_TupleGenSequence  pfx "创建序列"

static char* table_opr[] = {
	"+", "-", "*", "/", "%", "=~", "band", "bxor", "bor", "$", "and", "or", "xor", "<=", ">=", ">", "<", /*"=", "#",*/ "==", "!=", "[!=]"
};
static char* table_func[] = {
	"加", "减", "乘", "除", "求模", "正则", "位与", "位异或", "位或", "文本格式化", "且", "或", "异或", "小于等于", "大于等于", "大于", "小于", /*"等于", "不等于", */ "等于", "不等于", "元组不等于元素"
};
static int table_level[]={
	//"+", "-", "*", "/",   "%",    "=~",     "band",    "bxor",    "bor",  "$",   "and",   "or",   "xor",   "<=",    ">=",    ">", "<",  "==", "!=", "[!=]",
	3,     3,    4,   4,     4,      6,        5,         5,         5,     7,      1,       0,      0,       2,       2,      2,    2,    2,    2 ,   2
};
static const char* table_logic_func[]={
	"且", "或","异或", "小于等于", "大于等于", "大于", "小于", "等于", "不等于"
};

static const char* mappfunc[] = { "find", "exit", "strlen", "insert", "split", "uniq", "regexp_match", "remove", "strchr", "regexp_select", "strstr", "lsh", "rsh", "int", "min", "max", "regexp_replace", "regexp_test", "chr" };
static const char* mappfunc_rep[] = { "查找元素", "结束", "取文本长度", "插入", "分割", "取单一", "regexp_match", "删除元素", "寻找文本", "regexp_select", "正向搜索", "左移", "右移", "元组到整数", "求最小值", "求最大值", "regexp_replace", "regexp_test", "整数到字符" };

//const char* hand=".版本 2\n.支持库 ehalcon\n.程序集 主程序\n.子程序 __启动窗口_创建完毕\n"Debug_Config" (G (" Debug_ErrStop ", "Debug_Used"))'这一行是启用调试的，如果程序中发生执行错误，则会暂停以方便检查异常\n主程序()\n.子程序 主程序\n";
const char* key_word[] = {
	"for=" pfx "赋值 (%0, %1)\n.判断循环首 (%4 (%0, %2))",   //有两个版本，一个是向下一个是向上     .变量循环首 (%1,%2,%3,%0)
	"endfor=%0 ＝ " pfx "加 (%0, %3)\n.判断循环尾 ()", //.变量循环尾 ()
	"break=跳出循环 ()",
	"catch='catch",
	"continue=%0 ＝ " pfx "加 (%0, %3)\n到循环尾 ()",
	"else=.默认",
	"elseif=.判断 (%0)",
	"endif=.判断结束\n",
	"endtry='endtry",
	"try='try",
	"endwhile=.判断循环尾 ()",
	"if=.判断开始 (%0)",
	"ifelse=.判断开始(取反(%0))",
	"repeat=@'repeat",
	"until=@'until",
	"while=.判断循环首 (%0)"
};

//const char* code[] = {
// 	"a:=a$'.2f'+c=~d * bnot ((a+b)*3)",
// 	"a:=[a, 1, 'aaa', 'ccc']",
// 	"a := str{1:gettuple(str{3}, v[0])}",
// 	"stop()",
// 	"for i := str(abc) to 10 by 1",
// 	"open_window()",
// 	"endfor"
//};

enum paramType{
	paramTypeExpression,
	paramTypeFunction,
	paramTypeValue,
	paramTypeGetValue,
	paramTypeGetValueGetString,
	paramTypeGetCount,
	paramTypeNotOpr,
	paramTypeConcat,
	paramTypeFuncGetter,
	paramTypeGenSeq
};

struct param;
map<param*, bool> pms;
stack<vector<string>> for_param_stack; 

struct param{
	//他可以是 expression、可以是函数、可以是值
	paramType type;
	vector<param*> ps;
	bool take_sub;  //是否带有负号

	param(){take_sub = false;}
	void* operator new(size_t size){
		void* p = malloc(size);
		pms[(param*)p] = true;
		return p;
	}
};

void clear_all_param(){
	map<param*, bool>::iterator itr = pms.begin();
	for(; itr != pms.end(); ++itr){
		delete itr->first;
	}
	pms.clear();
}

// enum oprType{
// 	oprTypeUnknown,	//无效的
// 	oprTypePlus,				// +
// 	oprTypeSub,				// -
// 	oprTypeMul,				// *
// 	oprTypeDiv,				// /
// 	oprTypeMod,			// %
// 	oprTypeBAnd,			// band
// 	oprTypeBXor,			// bxor
// 	oprTypeBOr,				// bor
// 	oprTypeBNot,			// bnot
// 	oprTypeFormat,		// $
// 	oprTypeAnd,				// and
// 	oprTypeOr,				// or
// 	oprTypeXor,				// xor
// 	oprTypeNot,				// not
// 	oprTypeDy,				// >
// 	oprTypeDydengyu,	// >=
// 	oprTypeXy,				// <
// 	oprTypeXyDengyu,	// <=
// 	oprTypeDengyu,		// =
// 	oprTypeNotEqual,		// #      !=
// 	oprTypeRegexp			//	s1 =~ s2   tuple_regexp_test
// // 	oprTypeGetCount,	// | arr |
// // 	oprTypeIsParam		//这个opr是param
//  };
// 
// struct _operator{
// 	oprType oprtype;
// 	param* p;
// 
// 	_operator(oprType t, param* v):oprtype(t),p(v){}
// };

struct _getvalue : public param{
	enum getType{
		getTypeElementIndex,		// rgn[idx]
		getTypeElementRange,		// rgn[idx : edx]
		getTypeStringIndex,			// str{idx}
		getTypeStringRange			// str{idx, edx}
	};
	_getvalue(getType gvtype){gettype = gvtype; type=paramTypeGetValue;}
	getType gettype;
	char varname[64];
};

struct _getvalueGetString : public param{
	enum getType{
		getTypeElementIndex,		// rgn[idx]
		getTypeElementRange		// rgn[idx : edx]
	};
	_getvalueGetString(getType gvtype){gettype = gvtype; type=paramTypeGetValueGetString;}
	getType gettype;
	char varname[64];
	vector<param*> range2; //  rgn[idx]{1:10}  这个存的是后者，1：10这个参数
};

struct _notopr : public param{
	enum notType{
		notTypeBNot,
		notTypeNot
	};
	notType nottype;
	_notopr(notType nt): nottype(nt){type = paramTypeNotOpr;}
};

struct _getcount : public param{
	_getcount(char* v){strcpy(varname, v); type = paramTypeGetCount;}
	char varname[64];
};

struct _concat : public param{
	_concat(){type = paramTypeConcat;}
};

struct _genseq : public param{
	_genseq(){ type = paramTypeGenSeq; }
};

struct _expression : public param{
	_expression(){type=paramTypeExpression;}
	//表达式有左值和操作符以及右值然后操作符、右值...
	enum nodeType{
		nodeTypeParam,
		nodeTypeOpr
	};
	struct _node{
		_node(nodeType tpe, param* vp):type(tpe), p(vp){}
		_node(nodeType tpe, int op):type(tpe), opridx(op){}
		_node(){type = nodeTypeParam; p = 0;}

		nodeType type;
		union{
			param* p;
			int opridx;
		};
	};
	vector<_node> ns;
};

struct _function : public param{
	_function(){type=paramTypeFunction;}
	char name[64];
};

struct _func_getter : public param{  // sort(length)[idx]   他有两个参数，第一个参数是函数，第二个参数是索引
	_func_getter(){type = paramTypeFuncGetter;}
};

struct _value : public param{
	//值可以是一个变量，可以是一个具体数值
	enum valueType{
		valueTypeVar,			//变量
		valueTypeString,		//值   文本
		valueTypeNumber	//值   数值
	};

	_value(valueType vt, const string& v, bool spcreal, bool fs):valuetype(vt), value(v), isSpecReal(spcreal), isfs_(fs){type=paramTypeValue;}
	string value;
	valueType valuetype;
	bool isobject;
	bool isSpecReal;	//如果是数值，是否为实数，是那种100.0的实数，这种需要特殊处理
	bool isfs_;				//如果是数值，那么是否为负数
};

enum lineCodeType{
	lineCodeTypeVarSetter,
	lineCodeTypeFunction,
	lineCodeTypeKeyWord,
	lineCodeTypeRangeSetter,
	lineCodeTypeGlobal
};

struct lineCode{
	string name;
	lineCodeType type;
	bool istuple; //如果是 lineCodeTypeGlobal，则标识是否为tuple
	vector<param*> ps;  //参数表
};

const char* line_code = 0;
char token = 0;
int pos = 0;
string lecode, lvar;
char word[64];

enum etype{
	etypeInt,
	etypeObj,
	etypeTuple
};

enum typedef_pos{
	typedef_posGlobal,
	typedef_posLocal
};

struct typeinfo{
	etype et;
	typedef_pos tp;
	typeinfo(etype e, typedef_pos t):et(e), tp(t){}
	typeinfo(){et = etypeInt; tp = typedef_posGlobal;}
};

map<string, typeinfo> var_define;   //bool为true表示是object，否则不是

bool next(){
	if(token == 0) return false;
	return (token = line_code[++pos]) != 0;
}

void restore(int ps){
	pos = ps;
	token = line_code[pos];
}

bool jmpSpec(){
	while(line_code[pos] == ' ' || line_code[pos] == '\t')pos++;
	return (token = line_code[pos]) != 0;
}

bool nextIs(const char* v);
bool isNumber(){ return token == '.' || token >= '0' && token <='9';}
bool isWordBegin(){ return token >= 'A' && token <= 'Z' || token >= 'a' && token <= 'z' || token == '_'; }  //是否符合关键字或者函数的要求的那种文字词
bool isWordBody(){ return token >= 'A' && token <= 'Z' || token >= 'a' && token <= 'z' || token == '_' || token >= '0' && token <='9' || token == '.'; }  //是否符合关键字或者函数的要求的那种文字词
bool theWord();
bool theNumber(bool&, bool& isfs_);
bool theParam(param** p, bool not_opr_error = true);
bool theGetValue(param** p);
bool theFunction(param** vip);
bool theValue(param** p);

void setdef(const char* name, etype et, typedef_pos defpos = typedef_posLocal){
	//if(strcmp("H_MSG_TRUE", name) == 0) return;

	if(var_define.find(name) == var_define.end())
		var_define[name] = typeinfo(et, defpos);
}

void _free(param* p){
	if(p != 0){ delete p; pms.erase(p);}
}

enum WType{
	WTypeNumber,
	WTypeWord
};

//双目表达式    xx X xx
// bool theOperator(param** p){
// 	
// 	return false;
// }

//是否 i1:i2:i3 这种语法，好贱啊
bool theTupleCreation(param** p){
	if (token != '[') return false;
	int vp = pos;
	vector<param*> ps;
	try{
		param* param = 0;
		if (!next() || !jmpSpec()) throw 0;

		//至少2个参数
		if (!theParam(&param)) throw 0;
		ps.push_back(param);
		jmpSpec();

		if (token != ':') throw 0;
		if (!next() || !jmpSpec()) throw 0;

		if (!theParam(&param)) throw 0;
		ps.push_back(param);

		if (jmpSpec() && token == ':'){
			if (!next()) throw 0;
			if (!theParam(&param)) throw 0;
			ps.push_back(param);
		}

		jmpSpec();
		if (token != ']') throw 0;
		if (next()) jmpSpec();

		_genseq* func = new _genseq();
		func->ps = ps;
		*p = func;
	}
	catch (...){
		for (int i = 0; i < ps.size(); ++i) _free(ps[i]);
		restore(vp);
		return false;
	}
	return true;
}

bool theConcat(param** p){
	if(token != '[') return false;
	int vp = pos;
	vector<param*> ps;
	try{
		param* pval = 0;
		if(!next() || !jmpSpec()) throw 0;
		while(token != ']'){
			if(!theParam(&pval)) throw 0;
			ps.push_back(pval);
			//if(!next()) throw 0;
			if(!jmpSpec()) throw 0;
			if(token == ',') {
				if(!next()) throw 0;
				if(!jmpSpec()) throw 0;
			}
			//if(!next()) throw 0;
		}
		if(next())jmpSpec();
		_concat* e = new _concat();
		e->ps = ps;
		*p = e;
	}catch(...){
		for(int i = 0; i < ps.size(); ++i) _free(ps[i]);
		restore(vp);
		return false;
	}
	return true;
}

bool theGetCount(param** p){
	if(token != '|') return false;
	int vp = pos;
	try{
		if(!next() || !jmpSpec()) throw 0;
		if(!theWord()) throw 0;
		char varname[64];
		strcpy(varname, word);
		if(token != '|')throw 0;
		if(jmpSpec()) next();
		_value* v = new _value(_value::valueTypeVar, word, false, false);
		_getcount* e = new _getcount(varname);
		e->ps.push_back(v);
		*p = e;
	}catch(...){
		restore(vp);
		return false;
	}
	return true;
}

//成功，则exp会赋值，否则不会。  成功则修改pos，失败不会
// bool theExpression(param** p){
// 	//数字：3.1、-3.1、3.1
// 	//变量：str
// 	//函数：pow(a, b)
// 	//取总数：|
// 	//取元素：a[idx]
// 	//选择元素：a[idx: ed]
// 	//连接：[a, b, c]
// 	//四则运算：a / b、a * b、a % b、a + b、a - b、
// 	//正则：	s1 =~ s2   tuple_regexp_test
// 	//位运算：i1 band i2（位与）、i1 bxor i2（位异或）、i1 bor i2（位或）、bnot i（位补、位非，0变1、1变0）
// 	//格式化字符串：v$s
// 	//选择字符串：str{i}
// 	//字符串取值：str{1:3}
// 	//逻辑操作：与a and b、或a or b、异或a xor b、非not a
// 	//逻辑判断：<、>、<=、>=、=、#(不等于)
// 	//注释：*
// 
// 	//优先级()
// 	//* / %
// 	// band bxor bor bnot
// 	// < > <= >= = #
// 	// and or xor not
// 
// 	//两种，|、[打头的，word打头的（函数、逻辑判断、位运算、四则运算、格式化字符串、逻辑操作、变量），连续表达式，a * b + c - d + 'abc'
// // 	bool is = theConcat(p);
// // 	is = is || theGetCount(p);
// // 	is = is || theGetValue(p);
// // 	is = is || theFunction(p);
// // 	is = is || theOperator(p);
// // 	is = is || theValue(p);
// 	return is;
// }

bool theFunction(param** vip){
	int p = pos;
	vector<param*> ps;
	param* plus_p = 0;
	try{
		if(!theWord()) throw 0;
		char name[65];
		strcpy(name, word);
		if(token != '(') throw 0;
		if(!next()) throw 0;

		param* par = 0;
		while(token != ')'){
			if(!jmpSpec()) throw 0;
			
			if(!theParam(&par)) throw 0;
			ps.push_back(par);
			if(token == ')') break;
			if(!next()) throw 0;
		}
		if(jmpSpec()){next();jmpSpec();}
		if(token == '['){
			if(!next()) throw 0;
			if(!theParam(&plus_p)) throw 0;
			jmpSpec();
			if(token != ']') throw 0;
			if(next()) jmpSpec();
			_function* f = new _function();
			f->ps = ps;
			strcpy(f->name, name);

			_func_getter* getter = new _func_getter();
			getter->ps.push_back(f);
			getter->ps.push_back(plus_p);
			*vip = getter;
		}else{
			_function* f = new _function();
			f->ps = ps;
			strcpy(f->name, name);
			*vip = f;
		}
	}catch(...){
		_free(plus_p);
		for(int i = 0; i < ps.size(); ++i) _free(ps[i]);
		restore(p);
		return false;
	}
	return true;
}

bool isHex(){
	return token >= '0' && token <= '9' || token >= 'a' && token <= 'f' || token >= 'A' && token <= 'F';
}

unsigned char hex2Num(char r){
	return r >= '0' && r <= '9' ? r - '0' : (r >= 'a' && r <= 'f' ? r - 'a' + 10: (r >= 'A' && r <= 'F' ? r - 'A' + 10: 0));
// 	if(r >= '0' && r <='9') return r  - '0';
// 	if(r >= 'a' && r <= 'f') return r  - 'a';
// 	if(r >= 'A' && r <= 'F') return r  - 'A';
// 	return 0;
}

static char chars[] = {'a', 'b', 'f', 'n', 'r', 't', 'v', '\\', '\'', '0'};
static char chars_dst[] = {'\a', '\b', '\f', '\n', '\r', '\t', '\v', '\\', '\'', '\0'};
bool doSubString(char** p){
	char* v = *p;
	*v = 0;

	int vps = pos;
	try{
		char fmt[5];
		while(token != 0 && token != '\''){
			if(token == '\\'){
				if(!next()) throw 0;
				switch(token){
				case '\'':
					*v++ = '\''; break;
				default:
					{
						for(int k = 0; k < sizeof(chars) / sizeof(chars[0]); ++k){
							if(token == chars[k]){
								unsigned char ds = chars_dst[k];
								if(token == 'n'){
									strcpy(v, "\"+#换行符+\"");
								}else{
									sprintf(v, "\"+字符(%d)+\"", ds);
								}
								while(*v != 0)v++;
								break;
							}
						}
					}
				}
			}else{
				if(token == '\"'){
					const char* pv = "\"+#引号+\"";
					while(*pv != 0) *v++ = *pv++;
				}else{
					*v++ = token;
				}
			}
			if(!next()) throw 0;
		}
		*v = 0;
		*p = v;
	}catch(...){
		restore(vps);
		return false;
	}
	return true;
}

bool theValue(param** p){
	int svp = pos;
	try{
		jmpSpec();
		_value::valueType vt = _value::valueTypeNumber;
		bool isspecReal = false;
		bool isfs_ = false;
		char v[1024];
		char* pv = v;
		//变量、字符串、数值
		if(token == '\''){
			while(1){
				if(!next()) throw 0;
				if(!doSubString(&pv)) throw 0;
				//jmpSpec();
				if(token != '\'') throw 0;
				next(); 
				jmpSpec();
				if(token != '\'') break;
			}
			//next();
			jmpSpec();
			vt = _value::valueTypeString;
		}else{
			if(!theWord()){
				if(!theNumber(isspecReal, isfs_)) throw 0;
				vt = _value::valueTypeNumber;
			}else{
				vt = _value::valueTypeVar;
			}
			strcpy(v, word);
			jmpSpec();
		}

		*p = new _value(vt, v, isspecReal, isfs_);
	}catch(...){
		restore(svp);
		return false;
	}
	return true;
}

bool theGetValue(param** p){
	int svp = pos;
	vector<param*> ps;
	vector<param*> range2ps;
	try{
		char varName[64];
		if(!theWord()) throw 0;
		strcpy(varName, word);

		param* a = 0;
		_getvalue::getType gvtype = _getvalue::getTypeElementIndex;
		_getvalueGetString::getType gvstringType = _getvalueGetString::getTypeElementIndex;
		switch(token){
		case '[':  //元素取值
			{
				if(!next())throw 0;
				if(!jmpSpec()) throw 0;
				if(!theParam(&a)) throw 0;
				ps.push_back(a);
				if(!jmpSpec()) throw 0;
				if(token == ':'){  //参数二
					if(!next()) throw 0;
					if(!theParam(&a)) throw 0;
					ps.push_back(a);
					if(!jmpSpec()) throw 0;
					if(token != ']') throw 0;
					gvtype = _getvalue::getTypeElementRange;
					gvstringType = _getvalueGetString::getTypeElementRange;
				}else if(token == ']'){
					gvtype = _getvalue::getTypeElementIndex;
					gvstringType = _getvalueGetString::getTypeElementIndex;
				}else throw 0;
				if(next())jmpSpec();
				if(token == '{'){
					if(!next())throw 0;
					if(!theParam(&a)) throw 0;
					range2ps.push_back(a);
					if(!jmpSpec()) throw 0;
					if(token == ':'){  //参数二
						if(!next())throw 0;
						if(!theParam(&a)) throw 0;
						range2ps.push_back(a);
						if(!jmpSpec()) throw 0;
						if(token != '}') throw 0;
					}else if(token == '}'){
					}else throw 0;
					if(next())jmpSpec();

					_getvalueGetString* ggs = new _getvalueGetString(gvstringType);
					ggs->range2 = range2ps;
					ggs->ps = ps;
					strcpy(ggs->varname, varName);
					*p = ggs;
					return true;
				}
				break;
			}
		case '{':	 //字符串取值
			if(!next())throw 0;
			if(!theParam(&a)) throw 0;
			ps.push_back(a);
			if(!jmpSpec()) throw 0;
			if(token == ':'){  //参数二
				if(!next())throw 0;
				if(!theParam(&a)) throw 0;
				ps.push_back(a);
				if(!jmpSpec()) throw 0;
				if(token != '}') throw 0;
				gvtype = _getvalue::getTypeStringRange;
			}else if(token == '}'){
				gvtype = _getvalue::getTypeStringIndex;
			}else throw 0;
			if(next())jmpSpec();
			break;
		default: throw 0;
		}

		_getvalue* gv = new _getvalue(gvtype);
		strcpy(gv->varname, varName);
		gv->ps = ps;
		*p = gv;
	}catch(...){
		for(int i = 0; i < ps.size(); ++i) _free(ps[i]);
		for(int i = 0; i < range2ps.size(); ++i) _free(range2ps[i]);
		restore(svp);
		return false;
	}
	return true;
}

bool theNotOpr(param** p){
	//bnot not
	int vp = pos;
	try{

		_notopr::notType nt = _notopr::notTypeNot;
		param* exp = 0;
		if(nextIs("bnot")){
			jmpSpec();
			if(!theParam(&exp)) throw 0;
			nt = _notopr::notTypeBNot;
		}else{
			pos = vp;
			if(nextIs("not")){
				jmpSpec();
				if(!theParam(&exp)) throw 0;
			}else throw 0;
			nt = _notopr::notTypeNot;
		}

		param* oprp = new _notopr(nt);
		oprp->ps.push_back(exp);
		*p = oprp;
	}catch(...){
		restore(vp);
		return false;
	}
	return true;
}


// static oprType table_type[] = {
// 	oprTypePlus, oprTypeSub, oprTypeMul, oprTypeDiv, oprTypeMod, oprTypeRegexp, oprTypeBAnd, oprTypeBXor, oprTypeBOr, oprTypeFormat, oprTypeAnd,
// 	oprTypeOr, oprTypeXor, oprTypeXy, oprTypeDy, oprTypeXyDengyu, oprTypeDydengyu, oprTypeDengyu, oprTypeNotEqual
// };
bool theOprator(_expression::_node& n){
	int vp = pos;
	try{
		int t = -1;
		for(int i = 0; i < sizeof(table_opr) / sizeof(table_opr[0]); ++i){
			pos = vp;
			if(nextIs(table_opr[i])){
				t = i;
				//strcpy(n.oprname, table_func[i]);
				break;
			}
		}
		if(t == -1) throw 0;
		jmpSpec();
		n.opridx = t;
		n.type = _expression::nodeTypeOpr;
	}catch(...){
		restore(vp);
		return false;
	}
	return true;
}

//是否属于一个括号括起来的值
bool theQvalue(param** p){
	if(token != '(') return false;
	int vp = pos;
	try{
		if(!next()) throw 0;
		if(!theParam(p)) throw 0;
		if(token != ')') throw 0;
		if(next()) jmpSpec();
	}catch(...){
		restore(vp);
		return false;
	}
	return true;
}

bool theParam(param** p, bool not_opr_error /*= true*/){
	//if(!jmpSpec()) return false;
	//return theFunction(p) || theGetValue(p) || theExpression(p);
	//两种，|、[打头的，word打头的（函数、逻辑判断、位运算、四则运算、格式化字符串、逻辑操作、变量），连续表达式，a * b + c - d + 'abc'

	//数字：3.1、-3.1、3.1
	//变量：str
	//函数：pow(a, b)
	//取总数：|
	//取元素：a[idx]
	//选择元素：a[idx: ed]
	//连接：[a, b, c]
	//四则运算：a / b、a * b、a % b、a + b、a - b、
	//正则：	s1 =~ s2   tuple_regexp_test
	//位运算：i1 band i2（位与）、i1 bxor i2（位异或）、i1 bor i2（位或）、bnot i（位补、位非，0变1、1变0）
	//格式化字符串：v$s
	//选择字符串：str{i}
	//字符串取值：str{1:3}
	//逻辑操作：与a and b、或a or b、异或a xor b、非not a
	//逻辑判断：<、>、<=、>=、=、#(不等于)
	//注释：*

	//优先级()
	//* / %
	// band bxor bor bnot
	// < > <= >= = #
	// and or xor not
	//两种，|、[打头的，word打头的（函数、逻辑判断、位运算、四则运算、格式化字符串、逻辑操作、变量），连续表达式，a * b + c - d + 'abc'
	vector<_expression::_node> ns;
	int vp = pos;
	bool last_is_opr = true;
	
	try{
		while(token != ',' && token != ')' && token != 0 && token != ':' && token != '}' && token != ']'){
			param* local_p = 0;
			if(token == '('){
				if(!last_is_opr) throw 0;
				if(!next()) throw 0;
				theParam(&local_p);
				ns.push_back(_expression::_node(_expression::nodeTypeParam, local_p));
				if(!jmpSpec()) throw 0;
				if(token != ')') throw 0;
				if(jmpSpec()) next();
				last_is_opr = false;
			}else{
				if(last_is_opr){
					bool tacksub = false;
					if(token == '-'){
						tacksub = true;
						next();
						jmpSpec();
					}

					bool is = theTupleCreation(&local_p); // [a:b:c]   [a:b]
					is = is || theConcat(&local_p);		//[a, b, c]
					is = is || theGetCount(&local_p);	//| xx |
					is = is || theGetValue(&local_p);	//a[0]、b[0:10]、str{0}、str{1:13}
					is = is || theNotOpr(&local_p);		//bnot not
					is = is || theQvalue(&local_p);		// (a+b)
					is = is || theFunction(&local_p);	//abc()
					is = is || theValue(&local_p);		//a、1.0、'abcdefg'
					if(is){
						local_p->take_sub = tacksub;
						ns.push_back(_expression::_node(_expression::nodeTypeParam, local_p));
					}
					else throw 0;
					last_is_opr = false;
				}else{
					_expression::_node node;
					if(!theOprator(node)) 
						if(not_opr_error)
							throw 0;
						else
							break;
					else ns.push_back(node); 
					last_is_opr = true;
				}
			}
		}

		if(last_is_opr && ns.size() > 0) throw 0;
		if(ns.size() == 1){
			*p = ns[0].p;
		}else{
			_expression* exp = new _expression();
			exp->ns = ns;
			*p = exp;
		}
	}catch(...){
		for(int i = 0; i < ns.size(); ++i){
			if(ns[i].type == _expression::nodeTypeParam)
				_free(ns[i].p);
		}
		restore(vp);
		return false;
	}
	return true;
}

bool specKeyword(lineCode& line){
	if(!(strcmp(word, "if") == 0 || strcmp(word, "while") == 0 || strcmp(word, "elseif") == 0 || strcmp(word, "ifelse") == 0)) 
		return false;

	if(token != '(') return false;
	//printf("func = %s\n", word);
	int p = pos;
	vector<param*> ps;
	try{
		param* par = 0;
		if(!next()) throw 0;

		while(token != ')'){
			if(!jmpSpec()) throw 0;

			if(!theParam(&par)) throw 0;
			ps.push_back(par);
			if(token == ')') break;
			if(!next()) throw 0;
		}
		if(jmpSpec())	next();
		line.ps = ps;
		line.type = lineCodeTypeKeyWord;
	}catch(...){
		for(int i = 0; i < ps.size(); ++i) _free(ps[i]);
		restore(p);
		return false;
	}
	return true;
};

bool global(lineCode& line){
	if(strcmp(word, "global") != 0) return false;
	int p = pos;
	try{
		jmpSpec();
		int sv = pos;
		if(!nextIs("def"))pos = sv;
		if(!theWord()) throw 0;

		bool istuple = strcmp(word, "tuple") == 0;
		if(!istuple && strcmp(word, "object") != 0) throw 0;
		if(!jmpSpec()) throw 0;
		if(!theWord()) throw 0;

		line.type = lineCodeTypeGlobal;
		line.name = word;
		line.istuple = istuple;
	}catch(...){
		restore(p);
		return false;
	}
	return true;
}

bool func(lineCode& line){
	if(token != '(') return false;
	//printf("func = %s\n", word);
	int p = pos;
	vector<param*> ps;
	try{
		param* par = 0;
		if(!next()) throw 0;

		while(token != ')'){
			if(!jmpSpec()) throw 0;

			if(!theParam(&par)) throw 0;
			ps.push_back(par);
			if(token == ')') break;
			if(!next()) throw 0;
		}
		if(jmpSpec())	next();
		line.ps = ps;
		line.type = lineCodeTypeFunction;
	}catch(...){
		for(int i = 0; i < ps.size(); ++i)  _free(ps[i]);
		restore(p);
		return false;
	}
	return true;
};

bool varsetter(lineCode& line){
	int svp = pos;

	try{
		if(!nextIs(":=")) throw 0;
		param* p = 0;
		jmpSpec();
		if(!theParam(&p)) throw 0;
		line.ps.push_back(p);
		line.type = lineCodeTypeVarSetter;
	}catch(...){
		restore(svp);
		return false;
	}
	return true;
}

bool nextIs(const char* v){
	if(!jmpSpec()) return false;
	if(token != *v) return false;
	while(next() && *++v != 0){
		if(token != *v) return false;
	}
	return *v == 0;
}

bool rangesetter(lineCode& line){
	//lineCodeTypeRangeSetter
	if(token != '[') return false;
	int svp = pos;
	param* left = 0, *r = 0;
	try{
		pos = 0;
		jmpSpec();
		if(!theGetValue(&left)) throw 0;
		_getvalue* gv = (_getvalue*)left;
		if(gv->ps.size() != 1) throw 0;
		if(!jmpSpec()) throw 0;
		if(!nextIs(":=")) throw 0; jmpSpec();
		if(!theParam(&r)) throw 0;
		line.type = lineCodeTypeRangeSetter;
		line.ps.push_back(left);
		line.ps.push_back(r);
	}catch(...){
		_free(left); _free(r);
		restore(pos);
		return false;
	}
	return true;
}

bool keyword(lineCode& line){
	if(token == 0 || token == '*'){
		//为for时必须有带参数
		if(strcmp(word, "for") == 0) return false;

		//剩下的是其他关键字了，而比如if() 会被翻译为函数存在
		line.type = lineCodeTypeKeyWord;
	}else{
		int sve = pos;
		if(strcmp(word, "for") != 0) return false;

		param *b=0,*c=0,*d=0;
		//只有for了
		try{
			char value_a[64];
			// for a := b to c by d
			if(!theWord()) throw 0;
			strcpy(value_a, word);

			if(!nextIs(":=")) throw 0; jmpSpec();
			if(!theParam(&b, false)) throw 0;

			if(!nextIs("to")) throw 0;jmpSpec();
			if(!theParam(&c, false)) throw 0;

			if(!nextIs("by")) throw 0;jmpSpec();
			if(!theValue(&d)) throw 0;
			
			line.type = lineCodeTypeKeyWord;
			line.ps.resize(4);
			line.ps[0] = new _value(_value::valueTypeVar, value_a, false, false);
			line.ps[1] = b;
			line.ps[2] = c;
			line.ps[3] = d;
		}catch(...){
			restore(sve);
			_free(b); _free(c); _free(d);
			return false;
		}
	}
	return true;
}

//fs = 负数
bool theNumber(bool& isreal, bool& isfs_){
	jmpSpec();
	isreal = false;
	if(token != '-' && !isNumber()) return false;
	isfs_ = token == '-';
	int i = pos;
	bool ishex = false;
	bool ispoint = false;
	int svp = pos;
	try{
	while(next()){
		if(!ishex && token == 'e'){if(next())next();}
		if(ishex == false && (token == 'x' || token == 'X')){next();ishex = true;}
		if(ishex){
			if( !isHex()) break;
		}else{
			if(!isNumber()) break;
			if(token == '.'){
				ispoint = true;
				isreal = true;
			}else if(ispoint){
				if(token != '0') isreal = false;
			}
		}
	}
	if(ishex && pos - i <= 2) throw 0;
	}catch(...){
		restore(svp);
		return false;
	}
	memcpy(word, line_code + i, pos - i);
	word[pos - i] = 0;
	if(pos - i >= 2 && ishex &&  word[0] == '0' && (word[1] == 'x' || word[1] == 'X')){
		//hex
		union num_un{
			int num;
			unsigned char buf[4];
		}num;
		num.num = 0;
		unsigned char* pnum = num.buf;
		for(int k = 2; k < pos - i; ++k){
			word[k] = hex2Num(word[k]);
		}

		int k = pos - i - 1, t = 0;
		for (;k >= 3 && t < 4; k-=2, ++t){
			unsigned low = word[k];
			unsigned up = word[k-1];
			*pnum ++ =  (((up)) << 4) | (low);
		}
		if(k == 2 && t < 4) *pnum = word[k];
// 		unsigned char up = word[2]; 
// 		unsigned char low = 0;
// 		if(up != 0) low = word[3];
// 		if(low == 0)swap(low, up);
// 		unsigned vvv = hex2Num(up);
// 		int num = ((hex2Num(up)) << 4) | hex2Num(low);
 		ultoa(num.num, word, 10);
	}
	jmpSpec();
	return true;
}

bool theWord(){
	jmpSpec();
	int i = pos;
	if(!isWordBegin()) return false;
	while(next())
		if(!isWordBody()) break;

	memcpy(word, line_code + i, pos - i);
	word[pos - i] = 0;
	jmpSpec();
	return true;
}

const char* fmtChars(const char* p){
	while(*p++ != '=');
	return p;
}

typedef etype (__stdcall *func_etypeGet)(const char* function_, int idxparam);
typedef bool (__stdcall *func_islocalfunction)(const char* function_);
typedef bool (__stdcall *func_islocalfunctionParamGet)(const char* function_, int idxparam);
typedef void (__stdcall *func_noParse)(const char* code);
func_etypeGet func_get = 0;
func_islocalfunction islocalfunc = 0;
func_islocalfunctionParamGet islocalfuncParamGet = 0;

bool islocal(const char* function_){
	return islocalfunc(function_);
}

//io oo,  0 - 1,    ic oc, 2 - 3
enum localParamType{
	localParamTypeIO,
	localParamTypeOO,
	localParamTypeIC,
	localParamTypeOC
};
localParamType localparamGetisTuple(const char* function_, int idxParam){
	int type =  islocalfuncParamGet(function_, idxParam);
	switch(type){
	case 0:  return localParamTypeIO;
	case 1:  return localParamTypeOO;
	case 2:  return localParamTypeIC;
	case 3:  return localParamTypeOC;
	}
	return localParamTypeIC;
}

etype etypeGet(const char* function_, int idxparam){
	return func_get(function_, idxparam);
}

bool func_rep(const char* func){
	//在lecode中添加一个名字就好了
	for (int i = 0; i < sizeof(mappfunc) / sizeof(mappfunc[0]); ++i){
		if(strcmp(func, mappfunc[i]) == 0){
			lecode.append(string(pfx) + mappfunc_rep[i]);
			return true;
		}
	}
	return false;
}

void toCodeParam(param* p, etype et = etypeTuple){
	if(p->take_sub) lecode.append("-");
	bool istack_kh = p->take_sub;
	if(p->type == paramTypeValue){
		_value* v = (_value*)p;
		if(v->valuetype == _value::valueTypeNumber){
			istack_kh = false;
		}
	}
	if (istack_kh) lecode.append(Str_GetElementDouble "(");

	switch(p->type){
	case paramTypeExpression:
		{
			_expression* exp = (_expression*)p;
			for(int k =7; k >=0; --k){
				for (int i = 1; i <= (int)exp->ns.size() - 2; i+=2)
				{
					int idx_opr = exp->ns[i].opridx;
					if(table_level[idx_opr] == k){
						_expression::_node nleft = exp->ns[i - 1];;
						_expression::_node nright = exp->ns[i + 1];
						exp->ns.erase(exp->ns.begin() + i + 1);
						exp->ns.erase(exp->ns.begin() + i);
						_expression::_node& newn = exp->ns[i - 1];
						newn.type = _expression::nodeTypeParam;
						_function* f = new _function();
						strcpy(f->name, table_func[idx_opr]);
						f->ps.push_back(nleft.p);
						f->ps.push_back(nright.p);
						newn.p = f;
						i-=2;
					}
				}
			}
			if(exp->ns.size() > 1)break;
			if(exp->ns.size() > 0)   //为0是那种参数为空的时候
				toCodeParam(exp->ns[0].p);
			break;
		}
	case paramTypeFunction:
		{
			_function* f = (_function*)p;
			bool local = islocal(f->name);

			if (!func_rep(f->name)){
				if (local || strcmp(f->name, "return") == 0)
					//本地函数，即hdev内部函数不加pfx
					lecode.append(f->name);
				else
					lecode.append(string(pfx) + f->name);
			}

			lecode.append("(");
			for(int i = 0; i < f->ps.size(); ++i){
				if(local){
					localParamType loctype = localparamGetisTuple(f->name, i);
					bool localistuple = loctype == localParamTypeIC || loctype == localParamTypeOC;
					bool isvar = false;
					//bool isstring = false;
					param* tp = f->ps[i];
					bool isbool_var = false;
					if(tp->type == paramTypeValue){
						_value* vv = (_value*)tp;
						if(vv->valuetype == _value::valueTypeVar){
							isvar = true;
							isbool_var = vv->value == "true" || vv->value == "false";
						}
						//isstring = vv->valuetype == _value::valueTypeString;
					}

					bool isKH = false; //是否需要加括号
					//如果是bool变量名，则表示为逻辑值
					if(isvar && !isbool_var){
						//如果是变量，并且是ic, input control 或者io，input object，则需要克隆
						if(loctype == localParamTypeIC || loctype == localParamTypeIO){
							if(localistuple){
								//如果是tuple，则克隆tuple，否则克隆obj
								lecode.append(Str_CloneTuple "(");
							}else{
								lecode.append(Str_CloneObj "(");
							}
							isKH = true;
						}//否则是oc或者oo，属于输出，不需要clone
					}else{
						//如果不是变量，如果填入值是tuple，则加G，如果不是string则加，否则是string不加
						if(localistuple) {lecode.append(Str_GeneralTuple "("); isKH = true;}
					}
					toCodeParam(f->ps[i], localistuple ? etypeTuple : etypeObj);
					if(isKH) lecode.append(")");
				}else{
					toCodeParam(f->ps[i], etypeGet(f->name, i));
				}
				if(i != f->ps.size() - 1) lecode.append(",");
			}
			lecode.append(")");
			break;
		}
	case paramTypeValue:
		{
			_value* v = (_value*)p;
			switch(v->valuetype){
			case _value::valueTypeNumber:
				{
					if(v->isSpecReal)lecode.append("到小数(");
					lecode.append(v->value);
					if(v->isSpecReal)lecode.append(")");
					break;
				}
			case _value::valueTypeString:
				lecode.append("\"");
				lecode.append(v->value);
				lecode.append("\"");
				break;
			case _value::valueTypeVar:
				if(v->value == "H_MSG_TRUE"){
					lecode.append(Const_Err_OK);
				}else{
					lecode.append(v->value);
					setdef(v->value.c_str(), et);
				}
				//var_define[v->value] = et;
				break;
			}
			break;
		}
	case paramTypeGetValue:
		{
			_getvalue* gv = (_getvalue*)p;
			switch(gv->gettype){
			case _getvalue::getTypeElementIndex:
				lecode.append(Str_Getter "("); break;
			case _getvalue::getTypeStringIndex:
				lecode.append(Str_StringGet "("); break;
			case _getvalue::getTypeStringRange:
				lecode.append(Str_StringGetRange "("); break;
			case _getvalue::getTypeElementRange:
				lecode.append(Str_ElementRange "("); break;
			}
			lecode.append(gv->varname);
			setdef(gv->varname, etypeTuple);
			lecode.append(",");
			for(int i = 0; i < gv->ps.size(); ++i){
				toCodeParam(gv->ps[i]);
				if(i !=  gv->ps.size() - 1)
					lecode.append(",");
			}		
			lecode.append(")");
			break;
		}
	case paramTypeGetValueGetString:
		{
			_getvalueGetString* gv = (_getvalueGetString*)p;
			if(gv->range2.size() == 1)
				lecode.append(Str_StringGet "(");
			else
				lecode.append(Str_StringGetRange "(");

			switch(gv->gettype){
			case _getvalueGetString::getTypeElementIndex:
				lecode.append(Str_Getter "("); break;
			case _getvalueGetString::getTypeElementRange:
				lecode.append(Str_ElementRange "("); break;
			}
			lecode.append(gv->varname);
			setdef(gv->varname, etypeTuple);
			lecode.append(",");
			for(int i = 0; i < gv->ps.size(); ++i){
				toCodeParam(gv->ps[i]);
				if(i !=  gv->ps.size() - 1)
					lecode.append(",");
			}		
			lecode.append(")");

			lecode.append(",");
			for(int i = 0; i < gv->range2.size(); ++i){
				toCodeParam(gv->range2[i]);
				if(i !=  gv->range2.size() - 1)
					lecode.append(",");
			}		
			lecode.append(")");
			break;
		}
	case paramTypeGetCount:
		{
			_getcount* gc = (_getcount*)p;
			setdef(gc->varname, etypeTuple);
			//var_define[gc->varname] = etypeTuple;
			lecode.append(Str_GetCount "(");
			lecode.append(gc->varname);
			lecode.append(")");
			break;
		}
	case paramTypeNotOpr:
		{
			_notopr* nt = (_notopr*)p;
			if(nt->nottype == _notopr::notTypeBNot){
				lecode.append(Str_BNot "(");
			}else{
				lecode.append(Str_Not "(");
			}
			for(int i = 0; i < nt->ps.size(); ++i){
				toCodeParam(nt->ps[i]);
				if(i !=  nt->ps.size() - 1)
					lecode.append(",");
			}
			lecode.append(")");
			break;
		}
	case paramTypeConcat:
		{
			_concat* co = (_concat*)p;
			lecode.append(Str_GeneralTuple "(");
			for(int i = 0; i < co->ps.size(); ++i){
				toCodeParam(co->ps[i]);
				if(i !=  co->ps.size() - 1)
					lecode.append(",");
			}
			lecode.append(")");
			break;
		}
	case paramTypeFuncGetter:
		{
			_func_getter* getter = (_func_getter*)p;
			_function* f = (_function*)getter->ps[0];
			lecode.append(Str_Getter "(");
			toCodeParam(f);
			lecode.append(",");
			toCodeParam(getter->ps[1]);
			lecode.append(")");
			break;
		}
	case paramTypeGenSeq:
		{
			_genseq* genseq = (_genseq*)p;
			lecode.append(Str_TupleGenSequence "(");
			/*for (int ind = 0; ind < genseq->ps.size(); ++ind){
				toCodeParam(genseq->ps[ind]);
				if (ind < genseq->ps.size() - 1)
					lecode.append(",");
			}*/

			//a: step : b
			//注意调用 gen_seq函数的时候，他是 start, end, step，妹的，好贱啊
			if (genseq->ps.size() == 2){
				toCodeParam(genseq->ps[0]);
				lecode.append(",");
				toCodeParam(genseq->ps[1]);
				lecode.append(", 1");
			}
			else{
				toCodeParam(genseq->ps[0]);
				lecode.append(",");
				toCodeParam(genseq->ps[2]);
				lecode.append(",");
				toCodeParam(genseq->ps[1]);
			}

			lecode.append(")");
			break;
		}
	}

	if(istack_kh) lecode.append(",)");
}

void toCode(lineCode& line){
	switch(line.type){
	case lineCodeTypeFunction:
		{
			if(line.name == "catch" || line.name == "throw" || line.name == "try" || line.name == "endtry" || line.name == "repeat" || line.name == "until")
				lecode.append(Str_UnsupportPlus);
// 			if(line.name == "dev_error_var"){
// 				lecode.append(Str_Norecommended);
// 			}

			bool local = islocal(line.name.c_str());
			if (!func_rep(line.name.c_str())){
				if (local || strcmp(line.name.c_str(), "return") == 0)
					//当本地函数时，不加pfx，即hdev内部函数
					lecode.append(line.name);
				else
					lecode.append(string(pfx) + line.name);
			}
			
			lecode.append("(");
			for(int i = 0; i < line.ps.size(); ++i){
				if(local){
					localParamType loctype = localparamGetisTuple(line.name.c_str(), i);
					bool localistuple = loctype == localParamTypeIC || loctype == localParamTypeOC;
					bool isvar = false;
					//bool isstring = false;
					param* tp = line.ps[i];
					bool isbool_var = false;
					if(tp->type == paramTypeValue){
						_value* vv = (_value*)tp;
						if(vv->valuetype == _value::valueTypeVar){
							isvar = true;
							isbool_var = vv->value == "true" || vv->value == "false";
						}
						//isstring = vv->valuetype == _value::valueTypeString;
					}

					bool isKH = false; //是否需要加括号
					//如果是bool变量名，则表示为逻辑值
					if(isvar && !isbool_var){
						//如果是变量，并且是ic, input control 或者io，input object，则需要克隆
						if(loctype == localParamTypeIC || loctype == localParamTypeIO){
							if(localistuple){
								//如果是tuple，则克隆tuple，否则克隆obj
								lecode.append(Str_CloneTuple "(");
							}else{
								lecode.append(Str_CloneObj "(");
							}
							isKH = true;
						}//否则是oc或者oo，属于输出，不需要clone
					}else{
						//如果不是变量，如果填入值是tuple，则加G
						if (localistuple) { lecode.append(Str_GeneralTuple "("); isKH = true; }
					}
					toCodeParam(line.ps[i], localistuple ? etypeTuple : etypeObj);
					if(isKH) lecode.append(")");
				}else{
					toCodeParam(line.ps[i], etypeGet(line.name.c_str(), i));
				}
				if(i != line.ps.size() - 1) lecode.append(",");
			}
			lecode.append(")");
		}
		break;
	case lineCodeTypeKeyWord:
		{
			int idx = -1;
			int len = line.name.length();
			const char* cc = line.name.c_str();
			const char* p = 0;
			for(int i = 0; i < sizeof(key_word) / sizeof(key_word[0]); ++i){
				if(memcmp(key_word[i], cc, len) == 0){
					p = fmtChars(key_word[i]);
					idx = i;
					break;
				}
			}

			if(idx == -1) break;

			bool islogical = false;  //if ifelse elseif while
			bool isfor = false;
			if(strcmp(line.name.c_str(), "for") == 0){
				//for的参数必定为整数
				isfor = true;
				//_value* v = (_value*)line.ps[0];
				//var_define[v->value] = etypeInt;
			}else{
				if(line.name == "if" || line.name == "ifelse" || line.name == "elseif" || line.name == "while")
					islogical = true;
			}

			string back = lecode;
			vector<string> vs;
			for(int i =0 ; i < line.ps.size(); ++i){
				lecode.clear();
				toCodeParam(line.ps[i]);

// 				if(isfor){
// 					bool isneed_dd = true;
// 					if(line.ps[i]->type == paramTypeValue){
// 						_value *v = (_value *)line.ps[i];
// 						if(v->valuetype == _value::valueTypeNumber)
// 							isneed_dd = false;
// 						else if(v->valuetype == _value::valueTypeVar && var_define[v->value].et == etypeInt)
// 							isneed_dd = false;
// 					}
// 					if(isneed_dd) lecode = "DD(" + lecode + ",)";
// 				}

				if(islogical){
					bool isneed_dd = true;
					if(line.ps[i]->type == paramTypeExpression){
						_expression* exp = (_expression*)line.ps[i];
						if(exp->ns.size() > 0 && exp->ns[0].type ==  _expression::nodeTypeParam){
							if(exp->ns[0].p->type == paramTypeFunction){
								_function* fu = (_function*)exp->ns[0].p;
								for (int k = 0; k < sizeof(table_logic_func) / sizeof(table_logic_func[0]); ++k){
									if(strcmp(fu->name, table_logic_func[k]) == 0){
										isneed_dd = false; break;
									}
								}
							}
						}
					}

// 					bool isneed_dd = true;
					if(line.ps[i]->type == paramTypeFunction || line.ps[i]->type == paramTypeFuncGetter)
						isneed_dd = false;
					if(isneed_dd) lecode = Str_IsTrue "(" + lecode + ")";
				}
				vs.push_back(lecode);
			}

			if(isfor){
				_value* v = (_value*)line.ps[3];
				if(v->isfs_){
					vs.push_back(pfx"大于等于");
				}else{
					vs.push_back(pfx"小于等于");
				}
				for_param_stack.push(vs);
			}

			if(line.name == "endfor"){
				vs = for_param_stack.top();
				for_param_stack.pop();
			}else if(line.name == "continue"){
				//需要注意还原哦
				if(!for_param_stack.empty())  //如果为空则表示是while里边的，没有是对的。  若是for里边的必定有
					vs = for_param_stack.top();
				else
					p = "到循环尾 ()";
				//只需要取栈顶，不需要清掉 
			}

			lecode = back;
			char fmtbuf[64];
			strcpy(fmtbuf, p);
			char* fmt = fmtbuf;
			char* prev = fmt;
			char buf[1024];
			while(*fmt != 0){
				if(*fmt == '%'){
					*fmt = 0;
					int idx = *(fmt + 1) - '0';
					lecode.append(prev);
					lecode.append(vs[idx]);
					fmt += 2; prev = fmt;
				}else fmt++;
			}
			if(*fmt == 0){
				lecode.append(prev);
			}
		}
		break;
	case lineCodeTypeVarSetter:
		lecode.append(Str_VarSetter "(");
		lecode.append(line.name);

		setdef(line.name.c_str(), etypeTuple);
		if(line.ps[0]->type == paramTypeValue){
			_value* v = (_value*)line.ps[0];
			if(v->valuetype == _value::valueTypeVar){
				if(var_define.find(v->value) != var_define.end() && var_define[v->value].et == etypeObj){
					var_define[line.name].et = etypeObj;
				}
			}
		}

		lecode.append(",");
		toCodeParam(line.ps[0]);
		lecode.append(")");
		break;
	case lineCodeTypeRangeSetter:
		{
			_getvalue* gv = (_getvalue*)line.ps[0];
			lecode.append(Str_RangeSetter "(");
			lecode.append(gv->varname + string(","));
			setdef(gv->varname, etypeTuple);
			param* p = gv->ps[0];
			bool add_LL = true;
			if(p->type == paramTypeValue){
				_value* v = (_value*)p;
				if(v->valuetype == _value::valueTypeNumber){
					add_LL = false;
				}
			}

			if(add_LL) lecode.append(Str_GetElementLong "(");
			toCodeParam(gv->ps[0]);
			if(add_LL) lecode.append(")");
			lecode.append(",");
			toCodeParam(line.ps[1]);
			lecode.append(")");
			break;
		}
	case lineCodeTypeGlobal:
		{
			setdef(line.name.c_str(), line.istuple ? etypeTuple : etypeObj, typedef_posGlobal);
			break;
		}
	}
}

bool parse_line_code(const char* hcode){
	lecode.clear();
	lvar.clear();
	line_code = hcode;
	token = line_code[0];
	pos = 0;
	jmpSpec();
	if(token == 0) {
		lecode.append("\n");
		return true;
	}
	if(token == '*'){
		lecode.append("'" + string(hcode) + "\n");
		return true;
	}
	if(token == '\''){
		lecode.append(string(hcode) + "\n");
		return true;
	}

	//最开始必定是一个word
	if(!theWord()) return false;

	lineCode line;
	bool is = false;

	line.name = word;
	if(token == 0) 
		is = keyword(line);
	else
		is = rangesetter(line) || specKeyword(line) || global(line) || func(line) || varsetter(line) || keyword(line);

	if(is) {
		toCode(line); 
		if(lecode.length() > 0)
			lecode.append("\n");
	}
	clear_all_param();
// 	vector<param*> ps = line.ps;
// 	_getvalue* gv = (_getvalue*)ps[0];
// 	_function* funcc = (_function*)gv->ps[1];
// 	_getvalue* gvf = (_getvalue*)funcc->ps[1];
// 	_value* v = (_value*)gvf->ps[0];
	//vector<param*> ps = line.ps;
	//_expression* exp = (_expression*)ps[0];
	return is;
}

void var_def_info(string& var, string& global_var, char* param_need_jmp){
	map<string, bool> parammap;
	if(param_need_jmp != 0){
		char* prev = param_need_jmp;
		while(*param_need_jmp != 0){
			if(*param_need_jmp == ','){
				*param_need_jmp = 0;
				parammap[prev] = true;
				param_need_jmp ++;
				prev = param_need_jmp;
			}else{
				param_need_jmp++;
			}
		}

		if(*param_need_jmp == 0){
			parammap[prev] = true;
		}
	}

	map<string, typeinfo>::iterator itr = var_define.begin();
	for (; itr != var_define.end(); ++itr){
		if(parammap.find(itr->first) != parammap.end()) continue;

		// 垃圾易，程序集变量还不行，必须局部变量才能定义到程序集上边
		string def_pos = itr->second.tp == typedef_posLocal ? ".局部变量 " : ".局部变量 ";
		string odef;
		switch(itr->second.et){
		case etypeInt:
			odef = def_pos + string(itr->first) + ", 整数型\r\n";
			break;
		case etypeObj:
			odef = def_pos + string(itr->first) + ", 视觉对象\r\n";
			break;
		case etypeTuple:
			odef = def_pos + string(itr->first) + ", 视觉元组\r\n";
			break;
		}

		if(itr->second.tp == typedef_posLocal){
			var.append(odef);
		}else{
			global_var.append(odef);
		}
	}
}

void __stdcall parseCode(func_etypeGet func, char* hcode_p, char* ecode_p, char* vardef_p, char* global_vars_def_p, char* param_need_jmp, func_islocalfunction islocal_func, func_islocalfunctionParamGet localparamGet, func_noParse noparse, bool is_new_file_start){
	func_get = func;
	islocalfunc = islocal_func;
	islocalfuncParamGet = localparamGet;
	string ecode, vars, global_vars;
	
	if(is_new_file_start){
		//新的文件开始，需要清掉所有，而函数开始则清掉local的定义
		var_define.clear();
	}else{
		//否则清理掉local的定义
		map<string, typeinfo>::iterator itr = var_define.begin();
		for(; itr != var_define.end(); ){
			if(itr->second.tp != typedef_posGlobal){
				var_define.erase(itr++);
			}else ++itr;
		}
	}
	
	char* psv = hcode_p;
	while(*hcode_p != 0){
		if(*hcode_p == 0x0D && *(hcode_p + 1) == 0x0A){
			*hcode_p = 0;
			char* q = psv;
			while(q < hcode_p){if(*q == 0x0A || *q == 0x0D) *q = ' '; ++q;}
// 			if(!parse_line_code(psv)){
// 				parse_line_code(psv);
// 			}
// 			char vvvvv[] = "disp_message (WindowHandle, deg(Phi[i])$'.2f'+'°', 'image', Row[i]-35, Column[i], 'black', 'true')";
// 			char ppppp[] = "disp_message (WindowHandle, deg";
// 			//parse_line_code(ppppp);
// 			if(memcmp(ppppp, psv, strlen(ppppp))== 0){
// 				parse_line_code(vvvvv);
// 			}
// 			if(strcmp(psv, "' Example program for demonstrating the 2d data code operators") == 0){
// 				psv++; psv--;
// 			}
			if(parse_line_code(psv))
				ecode.append(lecode);
			else{
				//parse_line_code(psv);
				noparse(psv);
				ecode.append("* " + string(psv) + "\n");
			}
			*hcode_p = 0x0D;
			hcode_p += 2;
			psv = hcode_p;
		}else hcode_p++;
	}

	if(*hcode_p == 0){
		if(parse_line_code(psv))
			ecode.append(lecode);
		else{
			noparse(psv);
			ecode.append("* " + string(psv) + "\n");
		}
	}
	var_def_info(vars, global_vars, param_need_jmp);
	strcpy(vardef_p, vars.c_str());
	strcpy(ecode_p, ecode.c_str());
	strcpy(global_vars_def_p, global_vars.c_str());
}

bool __stdcall func_islocalfunctionx(const char* function_){
	return false;
}

etype __stdcall func_etypeGetx(const char* function_, int idxparam){
	return etype::etypeTuple;
}

void __stdcall func_noParsex(const char* code){
}

#ifdef _DEBUG
#include <pa_file/pa_file.h>
 int main(int argc, char* argv[])
 {
	char code[5000];
	char var[5000];

	size_t size = 0;
	unsigned char* ecode = paReadFile("code_debug.txt", &size);


	parseCode(func_etypeGetx, (char*)ecode, code, var, var, var, func_islocalfunctionx, 0, func_noParsex, false);
	paWriteToFile("res_debug.txt", code, strlen(code));
 	return 0;
 }
#endif