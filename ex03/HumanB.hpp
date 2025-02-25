#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"

class HumanB
{
    public:
        void attack();
        void setWeapon(Weapon &weapon);

        HumanB(std::string name);
        ~HumanB();

    private:
        Weapon *weapon;
        std::string name;
};

#endif


/*

weapon done?
    Weaponコンストラクタの扱いをどうするか
    
    crude 粗末な
    spiked 釘打ちの
    clubは丸い棒、
    

humana 


*/


/*
ポリモーフィズム
オーバーライドとオーバーロード
複数の定義、異なる型と数の引数で渡すことができる。

https://cpp-lang.sevendays-study.com/day7.html

ポリモーフィズムでは似た機能であれば同じ呼称にする。

どちらがいいか、
&か*か

安全性で言えば参照渡し&の方がいいらしい。
https://qiita.com/nonbiri15/items/2aa72ce6899024de40f9
呼び出し側で領域確保と初期化がされていれば
呼ばれる側はドット演算子だけで統一化できる。
constを使えば書き換えない意味を明示できる。setterとかで役にたつ?
ポインタは
確保済みの領域に対して、指し示すように与えられたポインタ変数がある場合、誰が責任を持って確保済みの領域を解放するのか？
参照で返すとコピーではなくそのまま渡せるのでメモリ確保の必要がない。
https://zenn.dev/parmaski/articles/cpp_reference_or_pointer
参照とポインタ、どっち使う？

https://www.ibm.com/docs/ja/i/7.3?topic=only-explicit-initialization-constructors-c
明示的に初期化しないといけない。
c++ -Wall -Werror -Wextra -c HumanA.cpp HumanB.cpp Weapon.cpp main.cpp 
HumanA.cpp:8:9: error: constructor for 'HumanA' must explicitly initialize the member 'weapon' which does not have a default constructor
HumanA::HumanA(std::string Name, Weapon &Weapon)
        ^
./HumanA.hpp:15:16: note: member is declared here
        Weapon weapon;
               ^
./Weapon.hpp:6:7: note: 'Weapon' declared here
class Weapon
      ^
1 error generated.
make: *** [HumanA.o] Error 1

https://stackoverflow.com/questions/19576458/constructor-for-must-explicitly-initialize-the-reference-member/19576509
https://take-mmatthew.hatenablog.com/entry/2015/12/16/204618
似た内容
とりあえず、明示的に初期化しないといけない。
初期化する際にも順番があるらしく、先に子クラス（weapon）を埋めないといけないらしい。


constは宣言時に初期化しないといけない。
宣言と代入はセットで行う。


色々考えた結果、mainの関数を見ればわかるけど、おそらくこれはポインタでやらないとだめだ。
なぜならclubがあくまでコピーでしかないから二回目のsettypeで反映されていない。
いや、HumanAのWeaponの定義がよくなかった。
Weapon weaponと宣言していたが、
ここを
Weapon &weaponと宣言することで解決した。
なぜか？




*/

