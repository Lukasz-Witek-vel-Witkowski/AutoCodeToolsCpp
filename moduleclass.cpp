/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-20 19:10:39
 */
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
    return "};\t\t//End class " + Nameclass + "\n";
}

void ModuleClass::AddNameClas(std::string name)
{
    Nameclass = name;
}

std::string ModuleClass::ConstructorClass(TypeConstruction b)
{
    switch (b)
    {
    case TypeConstruction::_cpp:
        return Nameclass + "::" + Nameclass + "()\n{\n}\t//Constructor " + Nameclass + "\n";
    case TypeConstruction::_hpp:
        return "\t" + Nameclass + "();\n";
    case TypeConstruction::_template:
        return "\t" + Nameclass + "()\n\t{\n\t}\t//Constructor\n";
    }
    return "";
}

std::string ModuleClass::DestructorClass(TypeConstruction b)
{
    switch (b)
    {
    case TypeConstruction::_cpp:
        return Nameclass + "::~" + Nameclass + "()\n{\n}\t//Destruktor " + Nameclass + "\n";
    case TypeConstruction::_hpp:
        return "\t~" + Nameclass + "();\n";
    case TypeConstruction::_template:
        return "\t~" + Nameclass + "()\n\t{\n\t}\t//Destruktor\n";
    }
    return "";
}

std::string ModuleClass::AddTemplate()
{
    return "template <class T>\n";
}

std::string ModuleClass::AddStatus(Status s)
{
    std::string data;
    switch (s)
    {
    case Status::_public:
        return "public:\n";
    case Status::_protected:
        return "protected:\n";
    case Status::_private:
        return "private:\n";
    default:
        break;
    }
    return "";
}

std::string ModuleClass::getFunctionMain(){
    return "int main()\n{\n\tstd::cout << \"Hello World\" << std::endl;\n\treturn 0;\n}\n";
}

ModuleClass::~ModuleClass()
{
}