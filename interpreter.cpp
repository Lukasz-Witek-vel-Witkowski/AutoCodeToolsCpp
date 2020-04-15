/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-15 20:03:33
 */
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
