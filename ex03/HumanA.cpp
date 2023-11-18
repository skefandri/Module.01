#include "HumanA.hpp"

HumanA::HumanA(std::string name1, Weapon &wepon):name(name1), wop(wepon){}


void    HumanA::attack()
{
    std::cout<< name << " attacks with their " << wop.getType() << std::endl;
}
