#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie
{
    public:
        void announce();
        void NameSetter(std::string name);
        Zombie();
        ~Zombie();

    private:
        std::string Name;
};

Zombie* zombieHorde(int N, std::string name);


#endif

/*
N匹のゾンビオブジェクトを作り、
それぞれ名前を引数で渡して初期化する。
最初のゾンビのポインタを返す。

テストを書け。announce関数をそれぞれのゾンビで呼び出す。


気づいたこと
    make reをした際に
    
    clean: $(OBJS)
    	rm -f $(OBJS)
    と書いてしまうとよくない。
    c++  main.o Zombie.o zombieHorde.o -o moarbrainz
    clang: error: no such file or directory: 'main.o'
    clang: error: no such file or directory: 'Zombie.o'
    clang: error: no such file or directory: 'zombieHorde.o'
    clang: error: no input files
    make: *** [moarbrainz] Error 1
    こう出てしまう。なぜなら同時にallとfcleanが走るから
    ないと認識されてしまう。
    正しくは
    clean:
    	rm -f $(OBJS)

    また、
    re: では
    re: fclean allの順番じゃないと消えたままになってしまう。
    つまりコマンドにも順番があるということ。
*/