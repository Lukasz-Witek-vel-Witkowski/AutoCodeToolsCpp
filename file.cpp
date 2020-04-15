/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-15 20:04:23
 */
#include "file.hpp"
File::File()
{
}
void File::CreativeMatrix(unsigned int value)
{
    if (value > 0)
        V_data.resize(value);
}
void File::AddValue(int value, std::string data)
{
    if (value >= 0 && value < V_data.size())
        V_data[value] = data;
}
void File::AddValue(std::string data){
    V_data.push_back(data);
}
void File::ClearEmptyMatrixValue()
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
    for (auto &y : V_data)
    {
        if (y.empty())
            y = "\n";
    }
}
std::string File::CreativeNameFile(bool b)
{
    std::string value;
    for (auto x : NameClass)
    {
        if (x > 64 && x < 91)
            value += x + 32;
        else
            value += x;
    }
    if (b)
        value += ".hpp";
    else
        value += ".cpp";
    return value;
}
void File::save(std::string name)
{
    std::ofstream file;
    file.open(name.c_str());
    if (file.good())
    {
        for (auto x : V_data)
            file << x;
        file.close();
    }
}

void File::AddNameClass(std::string name)
{
    NameClass = name;
    module.AddNameClas(NameClass);
}
File::~File()
{
}