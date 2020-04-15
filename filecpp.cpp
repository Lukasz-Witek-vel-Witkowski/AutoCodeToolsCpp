/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-15 20:04:12
 */
#include "filecpp.hpp"

FileCpp::FileCpp(std::string name): File()
{
    AddNameClass(name);
} //Constructor FileCpp
void FileCpp::CreativeFile()
{
    AddValue(CreativeInclude());
    AddValue("\n");
    AddValue(module.ConstructorClass(false));
    AddValue(module.DestructorClass(false));
    save(CreativeNameFile(false));
}
std::string FileCpp::CreativeInclude(){
    return "#include \""+CreativeNameFile()+"\"\n";
}
FileCpp::~FileCpp()
{
} //Destruktor FileCpp
