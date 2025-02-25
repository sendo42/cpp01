#ifndef __FILESTR_HPP__
#define __FILESTR_HPP__

#include <iostream>
#include <fstream>

class FileStr
{
    private:
        std::string filestr_;
        std::string filename_;

    public:
        void replaceStr(std::string s1, std::string s2);
        void createFile();
    
    FileStr(std::string filename);
    ~FileStr();
};

#endif

/*
----------
fileを開けて、s1からs2に置き換えをしたfile.replaceを作る
c言語の関数は禁止で、std縛り！

予想外のinputはエラー処理を。
テストも書いて
----------

開ける
コピーしてファイルを作る。
見てく。
一致したら
    置き換え


open_file
read
new string
string replace系

fd = create_file
write
delete

mallocの解放責任的にc++ではクラスを使ってdeleteした方がいい気がする？？
そもそもでかいやつをぶちこまれるかが問題

------------
仕様
https://rinatz.github.io/cpp-book/ch05-02-file-operations/
https://cpprefjp.github.io/reference/fstream/basic_fstream/open.html
https://docs.oracle.com/cd/E19205-01/820-2985/loc_io/9_2.htm

ファイルストリームオブジェクト
fileの読み込みには２種類ありそう

ファイルストリームオブジェクトを
接続するか、

https://qiita.com/Youga810/items/2c45b0ebab748e51f54c
find関数を使うのが良さそう？

http://vivi.dyndns.org/tech/cpp/string.html#insert
insert関数を使うのがよさそう？
だめだチートになる

そもそも追加するとは、
文を見る。
単語が一致したらそこまでを切り出す。
切り出した位置に変更文字を追加。
次を見る。



*/