#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &type)
    : name(newName), weapon(type)
{
    return ;
}

void    HumanA::attack(void)
{
    std::string type;

    type = this->weapon.getType();

    std::cout << this->name << " attacks with their " << type << std::endl;
}
