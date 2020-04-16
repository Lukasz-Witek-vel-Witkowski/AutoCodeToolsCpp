/*
 * List modyfication:
 * 1) defoult work program  
 *----------------------------------------
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-16 03:38:08
 */

#include <iostream>
#include "file.hpp"
#include "interpreter.hpp"

void test();

int main(int a_size, char **a_tab)
{
    Interpreter inter;
    if (a_size > 1)
    {
        inter.Analizer(a_size, a_tab);
     //   inter.CreativeClass(a_tab[1]);
    }
    else if (a_size == 1)
        std::cout << "Program AddClass, Jesli chcesz uzyskac pomoc wpisz komende -help\n";
   // test();
    return 0;
}

void test(){
    File f;
    std::cout<<f.TransformPath("C:\\Data\\data\\lala\\index.html")<<"\n";
    std::cout<<f.TransformPath("C:\\\\Data\\data\\lala\\\\index.html")<<"\n";
    std::cout<<f.TransformPath("C:\\Data/data/lala\\index.html")<<"\n";
}