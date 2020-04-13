#ifndef FILE_H
#define FILE_H
#include <vector>
#include <string>
class File
{
    std::vector<std::string> V_data;
    void creative_matrix(unsigned int value);
    void Clear_empty_matrix_value();
public:
    File();
    ~File();
};
#endif