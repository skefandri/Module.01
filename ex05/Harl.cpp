#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my" 
        << " 7XL-double-cheese-triple-pickle-specialketchup "
        << "burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money." << 
        " You didn’t put enough bacon in my burger! If you did," << 
        "I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free."
        << " I’ve been coming for years whereas"
        <<" you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*complaints[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    for(; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*complaints[i])();
            break ;
        }
    }
    if (i == 4)
        std::cout << "Error: don't get any name" << std::endl;
}