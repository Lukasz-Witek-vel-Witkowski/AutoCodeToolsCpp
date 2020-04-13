#ifndef FILE_H
#define FILE_H
#include <vector>
#include <string>
#include <iostream>
class File
{
    std::string NameClass;
    std::vector<std::string> V_data;
    void CreativeMatrix(unsigned int value);
    void ClearEmptyMatrixValue();

public:
    File();
    void AddNameClass(std::string name);
    ~File();
};
#endif