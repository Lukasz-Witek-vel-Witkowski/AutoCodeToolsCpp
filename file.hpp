#ifndef FILE_H
#define FILE_H
#include <vector>
#include <string>
#include <iostream>
class File
{
    std::vector<std::string> V_data;
    void creative_matrix(unsigned int value);
    void Clear_empty_matrix_value();
public:
    File();
    void test();
    ~File();
};
#endif