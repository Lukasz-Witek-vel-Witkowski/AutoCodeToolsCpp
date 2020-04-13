#include "moduleclass.hpp"

ModuleClass::ModuleClass(){

}
std::string ModuleClass::StartClass(){
    return "class "+Nameclass+"\n{\n";
}
std::string ModuleClass::StopClass(){
    return "}; //End class "+Nameclass+"\n";
}
void ModuleClass::AddNameClas(std::string name){
    Nameclass = name;
}
std::string ModuleClass::ConstructorClass(bool b){
    if(b)
    return Nameclass+"();\n";
    return Nameclass+"::"+Nameclass+"(){\n}//Constructor "+Nameclass+"\n";
}
std::string ModuleClass::DestructorClass(bool b){
    return "~"+Nameclass+"();\n";
    return Nameclass+"::~"+Nameclass+"(){\n}//Destruktor "+Nameclass+"\n";
}
ModuleClass::~ModuleClass(){

}