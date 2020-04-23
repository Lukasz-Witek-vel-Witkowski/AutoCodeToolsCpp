/*
 * @Author: Your name
 * @Date:   2020-04-22 18:00:49
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-23 16:12:43
 */
#include "iteammethod.hpp"

IteamMethod::IteamMethod()
{
    Name = "";
    _virtual = false;
    Typ = Iteam::TypeData::_void;
} //Constructor IteamMethod
void IteamMethod::init(std::string name, std::vector<IteamValue> *V, bool vir, Iteam::TypeData data)
{
    Name = name;
    _virtual = vir;
    Typ = data;
    if (V != nullptr)
    {
        for (int i = 0; i < (int)V->size(); i++)
            V_value.push_back(V->at(i));
    }
}
bool IteamMethod::operator==(IteamMethod &m)
{
    if (this == &m)
        return true;
    if (this->V_value.size() == m.V_value.size() && Name == m.Name && _virtual == m._virtual && Typ == m.Typ) {
        for (int i = 0; i < m.V_value.size(); i++) {
            if (V_value[i] != m.V_value[i]) return false;
        }
        return true;
    }
    return false;
}
bool operator<(const IteamMethod& t,const IteamMethod& m){
    return (t.Name<m.Name);
}
IteamMethod::~IteamMethod()
{
} //Destruktor IteamMethod
