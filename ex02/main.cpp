#include <iostream>

void stringPTR(std::string *str)
{
    std::cout << *str << std::endl;
    std::cout << &str << std::endl;
}

void stringREF(std::string &str)
{
    std::cout << str << std::endl;
    std::cout << &str << std::endl;
}

int main()
{
    std::string str;
    
    str = "HI THIS IS BRAIN.";
    std::cout << str << std::endl;
    std::cout << &str << std::endl;

    stringPTR(&str);
    stringREF(str);

}



/*

基本的に目的に応じて生じる疑問を言語化して出てくる
一週間で身に付くc++言語の基本のページを軸に読めばいい。

今回は参照渡しに戻る
https://cpp-lang.sevendays-study.com/ex-day1.html
ここで関数の引数を省略していることが気になった。
https://qiita.com/yuto1009/items/252c1a5ae22628b4cdf6

今まで
void aa(int *num);

int i;
int *k;

aa(&i);
aa(k);
で渡していたやつが、
void aa(int &num);

aa(i)でよくなった。



*/