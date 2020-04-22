/*
 * @Author: Your name
 * @Date:   2020-04-21 08:02:46
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-22 19:48:01
 */
#include "prototypeclass.hpp"

PrototypeClass::PrototypeClass()
{
} //Constructor PrototypeClass
bool PrototypeClass::isMethod()
{
    return !V_method.empty();
}
bool PrototypeClass::isValue()
{
    return !V_value.empty();
}
void PrototypeClass::addNewMethod(std::string name, std::vector<IteamValue> *V, bool virt, Iteam::TypeData data)
{
    IteamMethod method;
    method.init(name, V, virt, data);
    V_method.push_back(method);
}
void PrototypeClass::addNewValue(std::string name, bool tab, bool ptr, int size, Iteam::TypeData data, std::string alien)
{
    IteamValue value;
    value.init(name, data, tab, ptr, size, alien);
    V_value.push_back(value);
}
IteamMethod PrototypeClass::getMethod(unsigned int value)
{
    IteamMethod method;
    if(value<(unsigned int)V_method.size()){
        method = V_method[(int)value];
    }
    return method;
}
IteamValue PrototypeClass::getValue(unsigned int value)
{
     IteamValue Value;
    if(value<(unsigned int)V_value.size()){
        Value = V_value[(int)value];
    }
    return Value;
}
PrototypeClass::~PrototypeClass()
{
} //Destruktor PrototypeClass
