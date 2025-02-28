#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

Zombie::Zombie(std::string name): Name(name)
{
}

Zombie::~Zombie()
{
    std::cout << "debug: " << this->Name << " is deleted" << std::endl;
}