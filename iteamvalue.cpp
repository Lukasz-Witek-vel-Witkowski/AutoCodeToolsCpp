/*
 * @Author: Your name
 * @Date:   2020-04-22 17:50:04
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-22 19:49:24
 */
#include "iteamvalue.hpp"

IteamValue::IteamValue()
{
	Name = "";
	Size = 0;
	Ptr = false;
	Tab = false;
	Typ = Iteam::TypeData::_void;
} //Constructor IteamValue
void IteamValue::init(std::string name, Iteam::TypeData typ, bool tab, bool ptr, int size, std::string typ_a)
{
	Name = name;
	Typ = typ;
	Tab = tab;
	Ptr = ptr;
	Size = size;
	Typ_Alien = typ_a;
}
bool IteamValue::operator==(IteamValue &v)
{
	if (this == &v)
		return true;
	if (Typ == v.Typ &&
		Name == v.Name &&
		Tab == v.Tab &&
		Ptr == v.Ptr)
	{
		if (Size == v.Size && Typ_Alien == v.Typ_Alien)
			return true;
	}
	return false;
}
bool IteamValue::operator!=(IteamValue &v)
{
	bool b = !(*this == v);
	return b;
}
IteamValue::~IteamValue()
{
} //Destruktor IteamValue
