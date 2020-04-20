/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-20 19:36:29
 */
#include "interpreter.hpp"

Interpreter::Interpreter()
{
} //Constructor interpreter

void Interpreter::Analizer(int size, char **tab)
{
    bool _Class = false;
    bool _template = false;
    bool active = false;
    std::string ValueStrIndex;

    for (int index = 1; index < size; index++)
    {

        if (tab[index][0] == '-')
        { //? Analiza parametrow sterowniczych
            ValueStrIndex = tab[index];
            switch (tab[index][1])
            {
            case 'c':

                if (ValueStrIndex == ID_CreativeClass)
                {
                    for (int i = 2; i < size; i++)
                    {
                        std::cout << "Class " + (std::string)tab[i] + " is Creative! \n";
                        CreativeClass(tab[i]);
                    }
                }
                else if (ValueStrIndex == ID_CreativeClassTemplate)
                {
                    for (int i = 2; i < size; i++)
                    {
                        std::cout << "Class Template " + (std::string)tab[i] + " is Creative! \n";
                        CreativeClassTemplate(tab[i]);
                    }
                }
                break;
            case 'h':
                if (ValueStrIndex == ID_Helper)
                {
                    std::cout << PritfHelp();
                    return;
                }
                break;
            case 'm':
                if (ValueStrIndex == ID_Main)
                {
                    if (size > 2)
                        CreativeMain(tab[2]);
                    else
                        CreativeMain();
                    return;
                }
            case 'p':
                if (ValueStrIndex == ID_Path)
                {
                    _Class = true;
                    active = true;
                }
                else if (ValueStrIndex == ID_PathTemplate)
                {
                    _template = true;
                    active = true;
                }
            case 'r':
                if (ValueStrIndex == ID_Get)
                {
                }
                else if (ValueStrIndex == ID_Set)
                {
                }
                else if (ValueStrIndex == ID_SetGet)
                {
                }
            }
        }
        else
        {

            if (active == true)
            {

                if (_Class == true && size >= 3)
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
                else if (_template == true && size >= 3)
                {
                    std::cout << "Class template: \n";
                    for (int i = 2; i < size - 1; i++)
                    {

                        if (CreativeClassTemplate(tab[i], tab[size - 1]))
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

bool Interpreter::CreativeClassTemplate(std::string name, std::string path)
{
    if (ProcedurNameClass(name))
    {
        FileHpp fhpp(name);
        fhpp.CreativeFile(path, true);
        return true;
    }
    else
    {
        std::cout << "The class name: " + name + " is not valid\n";
        return false;
    }
    return false;
}

std::string Interpreter::PritfHelp()
{
    std::string descriptionHelper;
    descriptionHelper = "\nusage ";
    descriptionHelper += NameProgram;
    descriptionHelper += ": \n\nCommand list:\n\n";
    descriptionHelper += " -c\tCreates a class in the current folder.\n";
    descriptionHelper += "\t<-c> [Class Name 1], [Class Name 2], (...), [Class Name n]\n\n";
    descriptionHelper += " -ct\tCreates a class template in the current folder.\n";
    descriptionHelper += "\t<-ct> [Class Name 1], [Class Name 2], (...), [Class Name n]\n\n";
    descriptionHelper += " -help\tProvides information about commands in the program.\n\n";
    descriptionHelper += " -m\tCreates file main.cpp with int main() function.\n";
    descriptionHelper += "\t<-m> [File Path]\n\n";
    descriptionHelper += " -pc\tCreates classes at the address given at the end of the command string.\n";
    descriptionHelper += "\t<-pc> [Class Name 1], [Class Name 2], (...), [Class Name n], [File Path]\n\n";
    descriptionHelper += " -pct\tCreates classes template at the address given at the end of the command string.\n";
    descriptionHelper += "\t<-pct> [Class Name 1], [Class Name 2], (...), [Class Name n], [File Path]\n\n";
    return descriptionHelper;
}

void Interpreter::CreativeMain(std::string path)
{
    FileCpp file(nameMain);
    file.CreativeMain(path);
}

Interpreter::~Interpreter()
{
} //Destruktor interpreter
