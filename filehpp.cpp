/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-19 21:34:19
 */
#include "filehpp.hpp"

FileHpp::FileHpp(std::string name) : File()
{
    AddNameClass(name);
} //Constructor FileHpp

std::string FileHpp::CreativeHeading(std::string &data)
{
    return "#ifndef " + data + "\n";
}

std::string FileHpp::CreativeDefinition(std::string &data)
{
    return "#define " + data + "\n";
}

std::string FileHpp::CreativeEndif(std::string &data)
{
    return "#endif //!" + data + "\n";
}

void FileHpp::CreativeFile(std::string path, bool Template)
{

    path = TransformPath(path);
    CreativeContent(Template);
    save(CreativeNameFile(), path);
}

void FileHpp::CreativeContent(bool Temp)
{
    std::string data = HeadingName();
    AddValue(CreativeHeading(data));
    AddValue(CreativeDefinition(data));
    if (Temp)
        AddValue(module.AddTemplate());
    AddValue(module.StartClass());
    AddValue(module.AddStatus(ModuleClass::Status::_public));
    if (Temp)
    {
        AddValue(module.ConstructorClass(ModuleClass::TypeConstruction::_template));
        AddValue(module.DestructorClass(ModuleClass::TypeConstruction::_template));
    }
    else
    {
        AddValue(module.ConstructorClass());
        AddValue(module.DestructorClass());
    }
    AddValue(module.StopClass());
    AddValue(CreativeEndif(data));
}

std::string FileHpp::HeadingName()
{
    std::string value;
    for (auto x : NameClass)
    {
        if (x > 96 && x < 123)
            value += x - 32;
        else
            value += x;
    }
    value += "_HPP";
    return value;
}

FileHpp::~FileHpp()
{
} //Destruktor FileHpp
