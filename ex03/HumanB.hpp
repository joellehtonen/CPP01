#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
    private:

    public:
        HumanB(std::string name);
        ~HumanB()   {};

        std::string name;
        Weapon      *weapon;

        void        attack();
        void        setWeapon(Weapon &weapon);
};
