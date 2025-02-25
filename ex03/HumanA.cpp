#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string Name, Weapon &Weapon): weapon(Weapon), name(Name)
{
    // this->weapon = Weapon;
    // this->name = Name;
}

HumanA::~HumanA()
{

}
