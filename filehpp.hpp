/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-16 04:11:35
 */
#ifndef FILEHPP_HPP
#define FILEHPP_HPP
#include "file.hpp"
// ANCHOR - Class FileHpp
class FileHpp : public File
{
    void CreativeContent();

public:
    /**
	* [Description]
	* @string name - name class
    * # Constructor
    * ANCHOR - Constructor
    **/
    FileHpp(std::string name);

    /**
	* [Description]
    * # Metohod to creative and save file
    * ANCHOR - Method CreativeFile
    **/
 
    void CreativeFile(std::string path="");

    /**
	* [Description]
	* @string data - header name ($NameClass)
    * # Method to creative "#ifndef $NameClass" 
    * ANCHOR - Method CreativeHeading
    **/
    std::string CreativeHeading(std::string &data);

    /**
	* [Description]
	* @string data - header name ($NameClass)
    * #Method to creative "#define $NameClass"
    * ANCHOR - Method CreativeDefinition
    **/
    std::string CreativeDefinition(std::string &data);

    /**
	* [Description]
	* @string data - header name ($NameClass)
    * #Method to creative "#endif $NameClass"
    * ANCHOR - Method CreativeEndif
    **/
    std::string CreativeEndif(std::string &data);

    /**
	* [Description]
    * #Method to creative header name
    * ANCHOR - Method HradingName
    **/
    std::string HeadingName();

    /**
	* [Description]
	* #Primary destructor
    * ANCHOR - Primary Destrictor
    **/
    ~FileHpp();

}; //End class FileHpp

#endif //!FILEHPP_HPP
