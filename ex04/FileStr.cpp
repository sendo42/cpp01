#include "FileStr.hpp"

FileStr::FileStr(std::string filename)
{
    std::ifstream file(filename);
    std::string line;

    this->filename_ = filename;
    while(std::getline(file,line))
        filestr_ = filestr_ + line + '\n';
}

FileStr::~FileStr()
{

}


void  FileStr::replaceStr(std::string s1, std::string s2)
{
    int start = 0;
    int pos;
    int s1len;
    
    std::string str_copy;
    std::string add_str;

    s1len = s1.length();
    if(s1len != 0)
    {
        while(1)
        {
            pos = this->filestr_.find(s1);
            if(pos == -1)
                break;
            add_str = this->filestr_.substr(start,pos);
            str_copy += add_str + s2;
            this->filestr_ = this->filestr_.substr(pos + s1len);
        }
        str_copy = str_copy + this->filestr_;
        this->filestr_ = str_copy;
    }
}

void FileStr::createFile()
{
    std::ofstream strm;
    
    strm.open(this->filename_ + ".replace");
    strm << this->filestr_;
    strm.close();
}