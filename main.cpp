#include <iostream>
#include "file.hpp"
int main(int a_size, char **a_tab)
{
    File f;
    if (a_size > 1)
        f.CreativeClass(a_tab[1]);

    return 0;
}