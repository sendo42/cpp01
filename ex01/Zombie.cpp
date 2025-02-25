#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << this->Name << std::endl;
}

void Zombie::NameSetter(std::string name)
{
    this->Name = name;
}