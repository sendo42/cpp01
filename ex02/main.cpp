#include <iostream>

void stringPTR(std::string *str)
{
    std::cout << "PTR" << std::endl;
    std::cout << *str << std::endl;
    std::cout << str << std::endl;
}

void stringREF(std::string &str)
{
    std::cout << "REF" << std::endl;
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

https://theolizer.com/cpp-school1/cpp-school1-16/
ポインタと参照の違い
#include <iostream>
 
int main()
{
    int aInt0=123;
    int aInt1=456;
    int* aPointer=&aInt0;
    int& aReference=aInt0;
 
    // ポインタはポイント先の変更になる
    aPointer=&aInt1;
    std::cout << "aInt0=" << aInt0 << std::endl;
 
    // 参照は参照先の値の変更になる
    aReference=aInt1;
    std::cout << "aInt0=" << aInt0 << std::endl;
 
    return 0;
}
これの出力おもろい。
123
456となる

それは、参照渡しが別名のエイリアスをつけるようなものだから。
参照を作ると、新しい変数はできず、元の変数に別名を付けるだけ。
エイリアスを通じて値を変更すると、元の変数自体が変わる。
一度参照を作ると、あとから他の変数を参照するようには変更できない。

*/