#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie obj;

    obj.setter(name);
    obj.announce();
}