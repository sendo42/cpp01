#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain(const std::string &level);
};


#endif

/*

harlは麻の繊維


メンバ関数へのポインタを使うことが目的。
関数ポインタを使え。

https://so-zou.jp/software/tech/programming/cpp/grammar/pointer/
関数ポインタ配列はこれ。

https://kakuyomu.jp/works/1177354054881541503/episodes/1177354054886443383
https://www7b.biglobe.ne.jp/~robe/cpphtml/html03/cpp03009.html
これがめっちゃわかりやすい

void main()
{
   (*functptr[0])();    
   (*functptr[1])();    
   (*functptr[2])();    
}
こういう呼び方するらしい。
きもい。

通常の関数ポインタとは異なり、メンバ関数ポインタは「どのインスタンスの関数を呼び出すか」を明示しないといけない ため、this->* を使います。



*/