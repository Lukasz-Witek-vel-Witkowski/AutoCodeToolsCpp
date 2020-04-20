/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-20 18:35:17
 */
#ifndef INTERPRETER_HPP
#define INTERPRETER_HPP
#include "filehpp.hpp"
#include "filecpp.hpp"

// ANCHOR - Class Interpreter

class Interpreter
{
public:
    Interpreter();
    /**
     * [Description]
     * @strng name - name class
     */
    bool ProcedurNameClass(std::string name);
    bool CreativeClass(std::string name, std::string path="");
    void CreativeMain(std::string path="");
    bool CreativeClassTemplate(std::string name, std::string path="");
    void Analizer(int size, char **tab);
    std::string PritfHelp();
    ~Interpreter();
}; //End class interpreter

#endif //!INTERPRETER_HPP
