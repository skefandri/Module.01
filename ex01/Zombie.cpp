#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setter(std::string nA)
{
    name = nA; 
}
