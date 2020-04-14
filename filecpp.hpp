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
