#ifndef MODULECLASS_HPP
#define MODULECLASS_HPP
#include <string>
class ModuleClass
{
    std::string Nameclass;

public:
enum Status{
    _public,
    _protected,
    _private
};
    ModuleClass();
    std::string AddStatus(Status s);
    std::string StartClass();
    std::string StopClass();
    void AddNameClas(std::string name);
    std::string ConstructorClass(bool b = true);
    std::string DestructorClass(bool b = true);
    ~ModuleClass();
};
#endif //!MODULECLASS_HPP
