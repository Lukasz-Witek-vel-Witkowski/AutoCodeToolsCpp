/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-16 03:40:28
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

void FileHpp::CreativeFile()
{
    CreativeContent();
    save(CreativeNameFile());
}

void FileHpp::CreativeFile(std::string path)
{
    path = TransformPath(path);
    CreativeContent();
    save(CreativeNameFile(), path);
}

void FileHpp::CreativeContent()
{
    std::string data = HeadingName();
    AddValue(CreativeHeading(data));
    AddValue(CreativeDefinition(data));
    AddValue(module.StartClass());
    AddValue(module.AddStatus(ModuleClass::Status::_public));
    AddValue(module.ConstructorClass());
    AddValue(module.DestructorClass());
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
