#ifndef ITEAMMETHOD_HPP
#define ITEAMMETHOD_HPP
#include "iteamvalue.hpp"
#include <vector>
class IteamMethod: public Iteam 
{
	std::vector<IteamValue> V_value;
	bool _virtual;
public:
	IteamMethod();
	bool operator==(IteamMethod& m);
	friend bool operator<(const IteamMethod& t,const IteamMethod& m);
	void init(std::string name, std::vector<IteamValue>* V , bool vir, Iteam::TypeData data);
	~IteamMethod();
};		//End class IteamMethod
#endif //!ITEAMMETHOD_HPP
