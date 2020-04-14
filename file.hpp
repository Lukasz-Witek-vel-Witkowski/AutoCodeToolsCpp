#ifndef FILE_H
#define FILE_H
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "moduleclass.hpp"
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
    File();
    ~File();
};
#endif