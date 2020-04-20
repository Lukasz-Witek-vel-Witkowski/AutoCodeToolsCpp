/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-20 18:33:19
 */
#ifndef FILECPP_HPP
#define FILECPP_HPP
#include "file.hpp"
// ANCHOR - class FileCpp
class FileCpp : public File
{

public:
    FileCpp(std::string name);
    void CreativeContent();
    std::string CreativeInclude(TypeInclude type = TypeInclude::_inClass);
    void CreativeFile(std::string path = "");
    void CreativeMain(std::string path = "");
    ~FileCpp();
}; //End class FileCpp

#endif //!FILECPP_HPP
