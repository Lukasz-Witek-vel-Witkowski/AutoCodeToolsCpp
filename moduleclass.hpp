/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-16 01:01:54
 */
#ifndef MODULECLASS_HPP
#define MODULECLASS_HPP
#include <string>
// ANCHOR - Class ModuleClass
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
