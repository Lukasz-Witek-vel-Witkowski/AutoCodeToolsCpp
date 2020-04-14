#include <iostream>
#include "file.hpp"
#include "interpreter.hpp"
int main(int a_size, char **a_tab)
{
   Interpreter inter;
    if (a_size > 1)
        inter.CreativeClass(a_tab[1]);
    else if (a_size == 1)
        std::cout << "Program AddClass, Jesli chcesz uzyskac pomoc wpisz komende -help\n";
    return 0;
}