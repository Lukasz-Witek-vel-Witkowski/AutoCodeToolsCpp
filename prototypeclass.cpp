/*
 * @Author: Your name
 * @Date:   2020-04-21 08:02:46
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-23 16:15:59
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
    if (value < (unsigned int)V_method.size())
    {
        method = V_method[(int)value];
    }
    return method;
}
IteamValue PrototypeClass::getValue(unsigned int value)
{
    IteamValue Value;
    if (value < (unsigned int)V_value.size())
    {
        Value = V_value[(int)value];
    }
    return Value;
}
void PrototypeClass::sort()
{
    std::list<std::list<IteamMethod>> V_sort;
    bool b;
    for (auto &x : V_method)
    {
        b = false;
        for (std::list<std::list<IteamMethod>>::iterator it = V_sort.begin(); it != V_sort.end(); it++)
        {
            if (x.getType() == (*it).begin()->getType())
            {
                (*it).push_back(x);
                b = true;
                break;
            }
        }
        if (b)
            continue;
        std::list<IteamMethod> V_temp;
        V_temp.push_back(x);
        V_sort.push_back(V_temp);
    }
    for (std::list<std::list<IteamMethod>>::iterator it = V_sort.begin(); it != V_sort.end(); it++)
    {
        (*it).sort(cmp);
    }
    V_method.clear();
    for (std::list<std::list<IteamMethod>>::iterator it = V_sort.begin(); it != V_sort.end(); it++)
    {
        for (std::list<IteamMethod>::iterator jt = (*it).begin(); jt != (*it).end(); jt++)
        {

            V_method.push_back(*jt);
        }
    }
}
PrototypeClass::~PrototypeClass()
{
} //Destruktor PrototypeClass
bool cmp(const IteamMethod &a, const IteamMethod &b)
{
    return (a < b);
}