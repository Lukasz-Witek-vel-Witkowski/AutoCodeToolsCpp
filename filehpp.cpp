#include "filehpp.hpp"

FileHpp::FileHpp(std::string name):File()
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
void FileHpp::CreativeFile(){
    std::string data = HeadingName();
    AddValue(CreativeHeading(data));
    AddValue(CreativeDefinition(data));
    AddValue(module.StartClass());
    AddValue(module.AddStatus(ModuleClass::Status::_public));
    AddValue(module.ConstructorClass());
    AddValue(module.DestructorClass());
    AddValue(module.StopClass());
    AddValue(CreativeEndif(data));
    save(CreativeNameFile());
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
