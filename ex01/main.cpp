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

    if(ac <= 1)
    {
        std::cout << "need num and name" << std::endl;
        return 1;
    }
    else
    {
        zombies = zombieHorde(atoi(av[1]),av[2]);
        test_zombie(atoi(av[1]), zombies);
        delete [] zombies;
        return 0;
    }
}

__attribute__((destructor))
static void destructor() {
	system("leaks -q moarbrainz");
}