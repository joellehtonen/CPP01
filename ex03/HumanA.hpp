#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
    private:

    public:
        HumanA(std::string name, Weapon type) {};
        ~HumanA() {};

        Weapon      weapon;
        std::string name;

        void        attack();
};