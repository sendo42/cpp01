#include "Weapon.hpp"

const std::string &Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(std::string Type)
{
    this->type = Type;
}

Weapon::Weapon(std::string Type)
{
    this->setType(Type);
}

Weapon::~Weapon()
{
}
