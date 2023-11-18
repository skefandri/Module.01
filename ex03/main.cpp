
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("M24");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("SLR");
        bob.attack();
    }
    {
        Weapon club = Weapon("AKM");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("AWM");
        jim.attack();
    }
    return 0;
}