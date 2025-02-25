#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>

class Weapon
{
    public:
        const std::string &getType() const;
        void setType(std::string type);

        Weapon(std::string type);
        ~Weapon();

    private:
        std::string type;
};

#endif
