#include "Zombie.hpp"

int main()
{
    std::string name = "Foo";

    Zombie *zomb = newZombie("Hello");

    zomb->announce();
    randomChump(name);
    return (0);
}
