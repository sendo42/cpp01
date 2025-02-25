#include "HumanB.hpp"

void HumanB::attack()
{
    if(weapon == nullptr)
        std::cout << this->name << " doesn't have weapon" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::HumanB(std::string Name): weapon(nullptr), name(Name)
{
    // this->weapon = Weapon;
    // this->name = Name;
}

HumanB::~HumanB()
{

}

/*
常に持っているわけではないから二つに分けて宣言した方がいい気がする
HumanB::HumanB(std::string Name): weapon(nullptr), name(Name)
{
    this->name = Name;
    
}
けどweaponの初期化の方法がよくわからん。
humanBはコンストラクタでは武装化しないと要件に書いてあるからオーバーライドはいらない

*/