#include "HumanA.hpp"

HumanA::HumanA(std::string humansName, Weapon type)
{
    this->name = humansName;
    this->weapon = type;
}

void    HumanA::attack(void)
{
    std::string type;

    type = HumanA::weapon.getType();

    std::cout << this->name << " attacks with their " << type << std::endl;
}
