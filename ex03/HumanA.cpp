#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &type)
    : name(newName), weapon(type)
{
    return ;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
