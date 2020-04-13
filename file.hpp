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
    std::string CreativeHeading();
    std::string CreativeDefinition();
    std::string CreativeEndif();
    std::string HeadingName();
    const char *CreativeNameFile(bool b);
    void save();

public:
    File();
    void AddNameClass(std::string name);
    void CreativeClass(std::string name);
    ~File();
};
#endif