/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-15 20:02:45
 */
#ifndef FILEHPP_HPP
#define FILEHPP_HPP
#include "file.hpp"
class FileHpp: public File
{
public:
    FileHpp(std::string name);
    void CreativeFile();
    std::string CreativeHeading(std::string &data);
    std::string CreativeDefinition(std::string &data);
    std::string CreativeEndif(std::string &data);
    std::string HeadingName();
    ~FileHpp();
}; //End class FileHpp

#endif //!FILEHPP_HPP
