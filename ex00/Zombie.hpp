#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();

        void announce();

    private:
        std::string Name;

        
};


void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif


/*

newzombie
zombieをつくり、名付け、returnする。スコープ外でも使えるように

randomChump
zombieをつくり、名付け、自身であなうんす

どういうケースで容量を確保するかしないか考えること。
ぞんびを使わなくなったら消すこと。
ですとらくたはゾンビの名前と同時に表示すること。

単にクラスと関数を実装するものらしい。

Now, what is the actual point of the exercise? You have to determine in what case it’s better to allocate the zombies on the stack or heap.
おそらくこの文が重要。
どういうときに消せてどういうときに消せないかを考えろってことと思われる。
    voidの方は消せないけどZombie*なら消せるってこと？

ひとまずクラスと関数を実装しよう
クラスはたぶんこれでいいはず？
    メンバ関数にannouceをいれろとは言われたが、newzombieとrandomに指定はない。
    あくまで関数を実装ということか？

関数はまあこれでいいはず
    void randomの方、どういう意味か知らんけど、とりあえずメモリ確保しとけばええやろ。
    懸念事項として考えられるのは
        デストラクタが毎回メモリ解放を呼んでたら、コンストラクタも必ずメモリ確保しないといけない。
        つまりスタック領域での確保の手法はこのクラスではできなくなってしまう。
        ここではコンストラクタでメモリ確保しろやデストラクタで解放しろなんて言われてない。


気づいたこと
    デストラクタには引数はつけられない。
    privateの空間に関数があるとクラス外で呼べない。（当然）
    c++では動的メモリのmallocやfreeはコンストラクタが呼べないので使えない。


*/