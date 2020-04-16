/*
 * @Author: Lukasz Witek vel Witkowski
 * @Date:   2020-04-15 19:37:57
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-04-16 03:53:16
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

std::string File::TransformPath(std::string path)
{
    if (path[path.size() - 1] != '\\' || path[path.size() - 1] != '/')
    {
        path += "/";
    }
    bool active;
    do
    {
        active = false;
        if (path.find('\\') != std::string::npos)
        {
            active = true;
            path[path.find('\\')] = '/';
            if (path.find("//") != std::string::npos)
            {
                path.erase(path.begin() + path.find("//"));
            }
        }

    } while (active);
    return path;
}

std::string File::RetransformPath(std::string path)
{

    bool active;
    do
    {
        active = false;
        if (path.find('/') != std::string::npos)
        {
            active = true;
            path[path.find('/')] = '\\';
        }

    } while (active);
    return path;
}

void File::AddValue(int value, std::string data)
{
    if (value >= 0 && value < V_data.size())
        V_data[value] = data;
}

void File::AddValue(std::string data)
{
    V_data.push_back(data);
}

void File::load(std::string name, std::string path)
{
    std::ifstream file;
    std::string temp;
    if (path.size() > 1)
        temp = path + name;
    else
    {
        temp = name;
    }
    file.open(temp.c_str());
    if(file.good())
    {
        while (!file.eof())
        {
            std::getline(file, temp);
            AddValue(temp);
        }
        file.close();
    }
    else{
        std::cout << "File is undefined\n";
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

void File::save(std::string name, std::string path)
{
    bool creative;
    std::string temp;
    std::ofstream file;
    do
    {
        creative = false;
        if (path.size() > 1)
        {
            temp = path + name;
        }
        else
        {
            temp = name;
        }
        file.open(temp.c_str());
        if (file.good())
        {
            for (auto x : V_data)
                file << x;
            file.close();
        }
        else
        {
            if (path.size() > 1)
            {
                temp = "md " + RetransformPath(path);
                system(temp.c_str());
            }
            creative = true;
        }
    } while (creative);
}

void File::AddNameClass(std::string name)
{
    NameClass = name;
    module.AddNameClas(NameClass);
}

File::~File()
{
}