#include "HumanA.hpp"

void    HumanA::attack(void)
{
    std::string type;

    type = HumanA::weapon.getType();

    std::cout << this->name << " attacks with their weapon " << type << std::endl;
}