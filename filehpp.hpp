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
