#include "Zombie.hpp"

int main()
{
    Zombie* zombie1;
    Zombie zombie2("yamanaka2");
    
    zombie1 = newZombie("yamanaka1");
    zombie1->announce() ;
    delete zombie1;
    // std::cout << "debug" << std::endl;
    zombie2.announce();
    randomChump("yamanaka3");
    // randomChump("aaa");
}