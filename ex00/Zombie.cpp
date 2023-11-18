#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << ": Has been destroyed" << std::endl;
}