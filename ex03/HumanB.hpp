#ifndef HUMANB_HPP
#define HUMANB_HPP

#include"Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *wop;
    public:
        void    attack();
        HumanB(std::string name1);
        void    setWeapon(Weapon &obj);
};

#endif