#ifndef FILE_H
#define FILE_H
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "moduleclass.hpp"
class File
{
    std::string NameClass;
    std::vector<std::string> V_data;
    ModuleClass module;
    void CreativeMatrix(unsigned int value);
    void ClearEmptyMatrixValue();
    std::string CreativeHeading(std::string& data);
    std::string CreativeDefinition(std::string& data);
    std::string CreativeEndif(std::string& data);
    std::string HeadingName();
    void AddValue(int value, std::string data); 
    const char* CreativeNameFile(bool b);
    void AddNameClass(std::string name);
    void save();
public:
    File();
    void CreativeClass(std::string name);
    ~File();
};
#endif