#ifndef ITEAM_HPP
#define ITEAM_HPP
#include <string>
#include "definition.h"
class Iteam
{
public:
	enum class TypeData
	{
		_int,
		_void,
		_double,
		_float,
		_char,
		_bool,
		_alien
	};
	Iteam();
	void setName(std::string name);
	std::string getName();
	std::string getType();
	~Iteam();

protected:
	std::string Name;
	std::string Typ_Alien;
	TypeData Typ;
};	   //End class Iteam
#endif //!ITEAM_HPP
