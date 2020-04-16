/*
 * List modyfication:
 * 1) defoult work program  
 *----------------------------------------
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-16 04:11:27
 */

#include <iostream>
#include "file.hpp"
#include "interpreter.hpp"

int main(int a_size, char **a_tab)
{
    Interpreter inter;
    if (a_size > 1)
    {
        inter.Analizer(a_size, a_tab);
    }
    else if (a_size == 1)
        std::cout << "\nAddClass program. If you want help, enter the -help command\n";

    return 0;
}
