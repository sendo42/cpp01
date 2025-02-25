#include "FileStr.hpp"

int main(int ac, char *av[])
{
    FileStr filestr(av[1]);

    if(ac == 4)
    {
        filestr.replaceStr(av[2], av[3]);
        filestr.createFile();
    }
    else
    {
        std::cout << "need a filename and two strings, s1 and s2." << std::endl;
    }
}