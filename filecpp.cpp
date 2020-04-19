/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-19 21:24:53
 */
#include "filecpp.hpp"

FileCpp::FileCpp(std::string name) : File()
{
    AddNameClass(name);
} //Constructor FileCpp

void FileCpp::CreativeFile(std::string path)
{
    path = TransformPath(path);
    CreativeContent();
    save(CreativeNameFile(false), path);
}

void FileCpp::CreativeContent()
{
    AddValue(CreativeInclude());
    AddValue("\n");
    AddValue(module.ConstructorClass(ModuleClass::TypeConstruction::_cpp));
    AddValue(module.DestructorClass(ModuleClass::TypeConstruction::_cpp));
}

std::string FileCpp::CreativeInclude()
{
    return "#include \"" + CreativeNameFile() + "\"\n";
}

FileCpp::~FileCpp()
{
} //Destruktor FileCpp
