#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

std::string const &Weapon::getType(void)
{
    return (this->_type);
}

void    Weapon::setType(std::string newType)
{
    this->_type = newType;
}
