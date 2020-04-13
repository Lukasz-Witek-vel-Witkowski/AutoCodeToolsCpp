#include "file.hpp"
File::File()
{
}
void File::CreativeMatrix(unsigned int value)
{
    if (value > 0)
    {
        V_data.resize(value);
    }
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
}
void File::AddNameClass(std::string name)
{
    NameClass = name;
}
File::~File()
{
}