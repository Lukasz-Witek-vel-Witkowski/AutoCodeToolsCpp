#include "file.hpp"
File::File()
{
}
void File::creative_matrix(unsigned int value)
{
    if (value > 0)
    {
        V_data.resize(value);
    }
}
void File::Clear_empty_matrix_value()
{
    int size_empty = 0;
    bool shift;
    for (auto x : V_data)
    {
        if (x.empty())
            size_empty++;
    }
    if (size_empty > 1)
    {
        do
        {
            shift = false;
            for (int i = 0; i < V_data.size(); i++)
            {
                if (V_data[i].empty() && size_empty > 1)
                {
                    V_data.erase(V_data.begin() + i);
                    size_empty--;
                    shift = true;
                }
            }
        } while (shift);
    }
}
void File::test()
{
    int test = 0;
    creative_matrix(10);
    V_data[2] = "Cos";
    V_data[8] = "Cos";
    Clear_empty_matrix_value();
    for (auto x : V_data)
    {
        std::cout << test++ << "\t" << x << "\n";
    }
    V_data.clear();
    std::cout << "End Test 1\n";
    test = 0;
    creative_matrix(5);
    V_data[0] = "#ifndefn File_H";
    V_data[1] = "#define File_H";
    V_data[4] = "#endif";
    Clear_empty_matrix_value();
    for (auto x : V_data)
    {
        std::cout << test++ << "\t" << x << "\n";
    }
    std::cout << "End Test 2\n";
}
File::~File()
{
}