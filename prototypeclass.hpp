#ifndef PROTOTYPECLASS_HPP
#define PROTOTYPECLASS_HPP
#include <vector>
#include "iteammethod.hpp"
#include "iteamvalue.hpp"
#include <string>
#include <list>
class PrototypeClass
{
	std::vector<IteamMethod> V_method;
	std::vector<IteamValue> V_value;

public:
	PrototypeClass();
	void addNewMethod(std::string name, std::vector<IteamValue> *V = (nullptr), bool vir = false, Iteam::TypeData data = Iteam::TypeData::_void);
	void addNewValue(std::string name, bool tab = false, bool ptr = false, int size = 0, Iteam::TypeData data = Iteam::TypeData::_int, std::string alien = "");
	void sort();
	IteamMethod getMethod(unsigned int value);
	IteamValue getValue(unsigned int);
	bool isMethod();
	bool isValue();
	~PrototypeClass();
};	   //End class PrototypeClass
bool cmp(const IteamMethod& a, const IteamMethod& b);
#endif //!PROTOTYPECLASS_HPP
