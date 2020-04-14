#include "moduleclass.hpp"

ModuleClass::ModuleClass()
{
}
std::string ModuleClass::StartClass()
{
    return "class " + Nameclass + "\n{\n";
}
std::string ModuleClass::StopClass()
{
    return "}; //End class " + Nameclass + "\n";
}
void ModuleClass::AddNameClas(std::string name)
{
    Nameclass = name;
}
std::string ModuleClass::ConstructorClass(bool b)
{
    if (b)
        return "\t"+Nameclass + "();\n";
    return Nameclass + "::" + Nameclass + "(){\n}//Constructor " + Nameclass + "\n";
}
std::string ModuleClass::DestructorClass(bool b)
{
    if (b)
        return "\t~" + Nameclass + "();\n";
    return Nameclass + "::~" + Nameclass + "(){\n}//Destruktor " + Nameclass + "\n";
}
std::string ModuleClass::AddStatus(Status s){
    std::string data;
    switch (s)
    {
    case Status::_public:  return "public:\n";
    case Status::_protected: return "protected:\n";
    case Status::_private: return "private:\n";
    default:
        break;
    }
    return "";
}
ModuleClass::~ModuleClass()
{
}