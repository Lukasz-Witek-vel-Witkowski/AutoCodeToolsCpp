/*
 * @Author: Your name
 * @Date:   2020-04-21 08:56:53
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-22 17:50:11
 */
#include "iteam.hpp"

Iteam::Iteam()
{
} //Constructor Iteam
std::string Iteam::getType()
{
    switch (Typ)
    {
    case TypeData::_alien:
        return Typ_Alien;
    case TypeData::_bool:
        return T_bool;
    case TypeData::_char:
        return T_char;
    case TypeData::_double:
        return T_double;
    case TypeData::_float:
        return T_float;
    case TypeData::_int:
        return T_int;
    case TypeData::_void:
        return T_void;
    }
    return T_un;
}
void Iteam::setName(std::string name)
{
    Name = name;
}
std::string Iteam::getName()
{
    return Name;
}
Iteam::~Iteam()
{
} //Destruktor Iteam
