#include "HumanB.hpp"

HumanB::HumanB(std::string name1):name(name1), wop(NULL){}

void    HumanB::setWeapon(Weapon &obj)
{
    wop = &obj;
}

void    HumanB::attack()
{
    if (wop)
        std::cout<< name << " attacks with their " << wop->getType() << std::endl;
}
