#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"

class HumanA
{
    public:
        void attack();
    
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();

    private:
        Weapon &weapon;
        std::string name;
};

#endif


