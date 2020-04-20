/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-20 19:08:57
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

void FileCpp::CreativeMain(std::string path)
{
    path = TransformPath(path);
    AddValue(CreativeInclude(TypeInclude::_inIostream));
    AddValue("\n");
    AddValue(module.getFunctionMain());
    save(CreativeNameFile(false), path);
}

std::string FileCpp::CreativeInclude(TypeInclude type)
{
    switch (type)
    {
    case TypeInclude::_inClass:
        return "#include \"" + CreativeNameFile() + "\"\n";
    case TypeInclude::_inIostream:
        return "#include  "+ (std::string)iostream + "\n";
    }
    return "";
}

FileCpp::~FileCpp()
{
} //Destruktor FileCpp
