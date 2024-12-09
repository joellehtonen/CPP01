#include "HumanB.hpp"

HumanB::HumanB(std::string humansName)
{
    this->name = humansName;
}

void    HumanB::attack(void)
{
    std::string type;

    type = HumanB::weapon.getType();

    if (type.empty() == true)
        std::cout << this->name << " attacks with their fists" << std::endl;
    else
        std::cout << this->name << " attacks with their " << type << std::endl;
}

void    HumanB::setWeapon(Weapon weapon)
{
    std::string newWeapon;

    newWeapon = weapon.getType();

    this->weapon.setType(newWeapon);
}
