#include "Weapon.hpp"

Weapon::Weapon(std::string weaponsType)
{
    this->_type = weaponsType;
}

const std::string &Weapon::getType(void)
{
    return (this->_type);
}

void    Weapon::setType(std::string weaponsType)
{
    this->_type = weaponsType;
}
