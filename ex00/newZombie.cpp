#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "Foo: BraiiiiiiinnnzzzZ...";
}

void	Zombie::setter(std::string namev)
{
	name = namev;
}

Zombie* newZombie(std::string name)
{
	Zombie* obj = new Zombie;

	obj->setter(name);
	return obj;
}
