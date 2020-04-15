/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-15 20:02:40
 */
#ifndef FILECPP_HPP
#define FILECPP_HPP
#include "file.hpp"
class FileCpp: public File
{
public:
    FileCpp(std::string name);
    std::string CreativeInclude();
    void CreativeFile();
    ~FileCpp();
}; //End class FileCpp

#endif //!FILECPP_HPP
