#ifndef FILE_H
#define FILE_H
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
class File
{
    std::string NameClass;
    std::vector<std::string> V_data;
    void CreativeMatrix(unsigned int value);
    void ClearEmptyMatrixValue();
    std::string CreativeHeading(std::string& data);
    std::string CreativeDefinition(std::string& data);
    std::string CreativeEndif(std::string& data);
    std::string HeadingName();
    const char* CreativeNameFile(bool b);
    void AddNameClass(std::string name);
    void save();
public:
    File();
    void CreativeClass(std::string name);
    ~File();
};
#endif