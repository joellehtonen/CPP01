#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
    private:

    public:
        HumanB(std::string name) {};
        ~HumanB() {};

        Weapon      weapon;
        std::string name;

        void        attack();
        void        setWeapon();
};
