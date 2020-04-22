#ifndef ITEAMVALUE_HPP
#define ITEAMVALUE_HPP
#include "iteam.hpp"
class IteamValue: public Iteam
{
	bool Tab;
	bool Ptr;
	int Size;
public:
	IteamValue();
	bool operator==(IteamValue& v);
	bool operator!=(IteamValue& v);
	void init(std::string name, Iteam::TypeData typ, bool tab, bool ptr, int size, std::string typ_a);
	~IteamValue();
};		//End class IteamValue
#endif //!ITEAMVALUE_HPP
