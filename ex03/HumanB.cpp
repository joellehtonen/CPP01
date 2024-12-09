#include "HumanB.hpp"

HumanB::HumanB(std::string newName)
{
    this->name = newName;
}

void    HumanB::attack(void)
{
    if (this->weapon == nullptr)
        std::cout << this->name << " attacks with their fists" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    if (weapon.getType().empty())
        this->weapon = nullptr;
    else
        this->weapon = &weapon;
}
