#include "HumanB.hpp"

void    HumanB::attack(void)
{
    std::string type;

    type = HumanB::weapon.getType();

    std::cout << this->name << " attacks with their weapon " << type << std::endl;
}