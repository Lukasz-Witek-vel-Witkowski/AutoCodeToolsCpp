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
    for (auto &y : V_data)
    {
        if (y.empty())
        {
            y = "\n";
        }
    }
}
void File::CreativeClass(std::string name)
{
    AddNameClass(name);
    CreativeMatrix(4);
    V_data[0] = CreativeHeading();
    V_data[1] = CreativeDefinition();
    V_data[3] = CreativeEndif();
    ClearEmptyMatrixValue();
    save();
}
const char *File::CreativeNameFile(bool b)
{
    std::string value;
    for (auto x : NameClass)
    {
        if (x > 64 && x < 91)
        {
            value += x + 32;
        }
        else
            value += x;
    }
    if (b)
        value += ".hpp";
    else
        value += ".cpp";
    return value.c_str();
}
void File::save()
{
    std::ofstream file_h, file_c;
    file_h.open(CreativeNameFile(true));
    if (file_h.good())
    {
        for (auto x : V_data)
        {
            file_h << x;
        }
        file_h.close();
    }
    file_c.open(CreativeNameFile(false));
    if (file_c.good())
    {
        file_c << "#include \"" << CreativeNameFile(true) << "\"\n";
        file_c.close();
    }
}
std::string File::CreativeHeading()
{
    return "#ifndef " + HeadingName() + "\n";
}
std::string File::CreativeDefinition()
{
    return "#define " + HeadingName() + "\n";
}
std::string File::CreativeEndif()
{
    return "#endif //!" + HeadingName();
}
std::string File::HeadingName()
{
    std::string value;
    for (auto x : NameClass)
    {
        if (x > 96 && x < 123)
        {
            value += x - 32;
        }
        else
            value += x;
    }
    value += "_HPP";
    return value;
}
void File::AddNameClass(std::string name)
{
    NameClass = name;
}
File::~File()
{
}