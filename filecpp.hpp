/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-19 21:06:24
 */
#ifndef FILECPP_HPP
#define FILECPP_HPP
#include "file.hpp"
// ANCHOR - class FileCpp
class FileCpp : public File
{

public:
    void CreativeContent();
    FileCpp(std::string name);
    std::string CreativeInclude();
    void CreativeFile(std::string path="");
    ~FileCpp();
}; //End class FileCpp

#endif //!FILECPP_HPP
