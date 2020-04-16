/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-16 04:10:16
 */
#include "interpreter.hpp"

Interpreter::Interpreter()
{
    //  path = false;
    //   active = false;
} //Constructor interpreter

void Interpreter::CreativeClass(std::string name)
{
    FileCpp fcpp(name);
    FileHpp fhpp(name);
    fhpp.CreativeFile();
    fcpp.CreativeFile();
    std::cout << "Class " + name + " is Creative! \n";
}

void Interpreter::Analizer(int size, char **tab)
{
    bool path = false;
    bool active = false;

    for (int index = 1; index < size; index++)
    {

        if (tab[index][0] == '-')
        { //? Analiza parametrow sterowniczych

            switch (tab[index][1])
            {
            case 'p':

                path = true;
                active = true;

                break;
            case 'h':
                if ((std::string)tab[index] == NameHelper)
                {
                    std::cout << PritfHelp();
                    return;
                }
                break;
            }
        }
        else
        {

            if (active == true)
            {

                if (path == true && size >= 3)
                {
                    std::cout << "Class: \n";
                    for (int i = 2; i < size - 1; i++)
                    {
                        std::cout << tab[i];
                        if (i < size - 2)
                        {
                            std::cout << ",\n";
                        }
                        CreativeClassPath(tab[i], tab[size - 1]);
                    }
                    std::cout << "\nis Creative in folder " << tab[size - 1] << "!! \n";
                    return;
                }
            }
            else
            {
                for (int i = 1; i < size; i++)
                {
                    CreativeClass(tab[i]);
                }
            }
        }
    }
}

void Interpreter::CreativeClassPath(std::string name, std::string path)
{
    FileCpp fcpp(name);
    FileHpp fhpp(name);
    fhpp.CreativeFile(path);
    fcpp.CreativeFile(path);
}

std::string Interpreter::PritfHelp()
{
    std::string descriptionHelper;
    descriptionHelper = "\nusage ";
    descriptionHelper += NameProgram;
    descriptionHelper += ": \n\nCommand list:\n";
    descriptionHelper += " -help\tProvides information about commands in the program.\n";
    descriptionHelper += " -p\tCreates classes at the address given at the end of the command string.\n";
    descriptionHelper += "\t<-p> [Class Name 1], [Class Name 2], (...), [Class Name n], [File Path]\n";
    descriptionHelper += " \"Name Class\"\tCreates a class in the current folder.\n";
    return descriptionHelper;
}

Interpreter::~Interpreter()
{
} //Destruktor interpreter
