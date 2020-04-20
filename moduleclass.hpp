/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-20 18:21:29
 */
#ifndef MODULECLASS_HPP
#define MODULECLASS_HPP
#include <string>
#include "definition.h"
// ANCHOR - Class ModuleClass
class ModuleClass
{
    std::string Nameclass;

public:
    enum class Status
    {
        _public,
        _protected,
        _private
    };
    enum class TypeConstruction{
        _hpp,
        _cpp,
        _template
    };
    ModuleClass();
    std::string AddTemplate();
    std::string AddStatus(Status s);
    std::string StartClass();
    std::string StopClass();
    std::string getFunctionMain();
    void AddNameClas(std::string name);
    std::string ConstructorClass(TypeConstruction b = TypeConstruction::_hpp);
    std::string DestructorClass(TypeConstruction b = TypeConstruction::_hpp);
    ~ModuleClass();
};
#endif //!MODULECLASS_HPP
