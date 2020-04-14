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
