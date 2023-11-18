#ifndef HUMANA_HPP
#define HUMANA_HPP

#include"Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &wop;
    public:
        void    attack();
        HumanA(std::string name1, Weapon &wepon);

};



#endif