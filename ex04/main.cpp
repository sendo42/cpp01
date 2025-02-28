#include "FileStr.hpp"

int main(int ac, char *av[])
{
    if(ac != 4)
    {
        std::cout << "need a filename and two strings, s1 and s2." << std::endl;
    }
    else
    {
        FileStr filestr(av[1]);
        filestr.replaceStr(av[2], av[3]);
        filestr.createFile();
    }
}