#include "Weapon.hpp"

Weapon::Weapon(std::string value):type(value){}

const std::string& Weapon::getType()
{ 
    return type;
}

void Weapon::setType(std::string value)
{
    type = value;
}