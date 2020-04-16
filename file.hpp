/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-16 02:26:46
 */
#ifndef FILE_H
#define FILE_H
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "moduleclass.hpp"
// ANCHOR - Class File
class File
{
    std::vector<std::string> V_data;

protected:
    ModuleClass module;
    std::string NameClass;
    
    void CreativeMatrix(unsigned int value);
    void ClearEmptyMatrixValue();
    void AddValue(int value, std::string data);
    void AddValue(std::string data);
    std::string CreativeNameFile(bool b = true);
    void AddNameClass(std::string name);
    void save(std::string name);

public:
std::string TransformPath(std::string path);
    File();
    ~File();
};
#endif