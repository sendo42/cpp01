#include "Zombie.hpp"

void test_zombie(int ac, Zombie *zombies)
{
    for(int i = 0; i < ac; i++)
    {
        std::cout << "I am " << i << " ";
        zombies[i].announce();
    }
}

int main(int ac, char **av)
{
    Zombie* zombies;

    if(ac != 3)
    {
        std::cout << "need num and name" << std::endl;
    }
    else
    {
        zombies = zombieHorde(std::atoi(av[1]),av[2]);
        test_zombie(std::atoi(av[1]), zombies);
        delete [] zombies;
    }
}

// __attribute__((destructor))
// static void destructor() {
// 	system("leaks -q moarbrainz");
// }