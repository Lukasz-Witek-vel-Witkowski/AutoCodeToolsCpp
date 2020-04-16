/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-16 04:10:16
 */
#include "interpreter.hpp"

Interpreter::Interpreter()
{
} //Constructor interpreter

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
            case 'c':
                if ((std::string)tab[index] == ID_CreativeClass)
                {
                    for (int i = 2; i < size; i++)
                    {
                        std::cout << "Class " + (std::string)tab[i] + " is Creative! \n";
                        CreativeClass(tab[i]);
                    }
                }
                break;
            case 'h':
                if ((std::string)tab[index] == ID_Helper)
                {
                    std::cout << PritfHelp();
                    return;
                }
                break;
            case 'p':
                if ((std::string)tab[index] == ID_Path)
                {
                    path = true;
                    active = true;
                }
            case 'r':
                if ((std::string)tab[index] == ID_Get)
                {
                }
                if ((std::string)tab[index] == ID_Set)
                {
                }
                if ((std::string)tab[index] == ID_SetGet)
                {
                }
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

                        if (CreativeClass(tab[i], tab[size - 1]))
                        {
                            std::cout << tab[i];
                            if (i < size - 2)
                            {
                                std::cout << ",\n";
                            }
                        }
                    }
                    std::cout << "\nis Creative in folder " << tab[size - 1] << "!! \n";
                    return;
                }
            }
        }
    }
}

bool Interpreter::ProcedurNameClass(std::string name)
{

    if ((name[0] >= 'a' && name[0] <= 'z') ||
        (name[0] >= 'A' && name[0] <= 'Z') ||
        (name[0] == '_'))
    {
        return true;
    }
    return false;
}

bool Interpreter::CreativeClass(std::string name, std::string path)
{
    if (ProcedurNameClass(name))
    {
        FileCpp fcpp(name);
        FileHpp fhpp(name);
        fhpp.CreativeFile(path);
        fcpp.CreativeFile(path);
        return true;
    }
    else
    {
        std::cout << "The class name: " + name + " is not valid\n";
        return false;
    }
}

std::string Interpreter::PritfHelp()
{
    std::string descriptionHelper;
    descriptionHelper = "\nusage ";
    descriptionHelper += NameProgram;
    descriptionHelper += ": \n\nCommand list:\n";
    descriptionHelper += " -c\tCreates a class in the current folder.\n";
    descriptionHelper += "\t<-c> [Class Name 1], [Class Name 2], (...), [Class Name n]\n";
    descriptionHelper += " -help\tProvides information about commands in the program.\n";
    descriptionHelper += " -pc\tCreates classes at the address given at the end of the command string.\n";
    descriptionHelper += "\t<-p> [Class Name 1], [Class Name 2], (...), [Class Name n], [File Path]\n";
    return descriptionHelper;
}

Interpreter::~Interpreter()
{
} //Destruktor interpreter
