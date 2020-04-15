/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-15 19:39:12
 */

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