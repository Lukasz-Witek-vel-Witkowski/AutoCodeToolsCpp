#include "interpreter.hpp"

Interpreter::Interpreter()
{
} //Constructor interpreter
void Interpreter::CreativeClass(std::string name){
    FileCpp fcpp(name);
    FileHpp fhpp(name);
    fhpp.CreativeFile();
    fcpp.CreativeFile();
}
Interpreter::~Interpreter()
{
} //Destruktor interpreter
