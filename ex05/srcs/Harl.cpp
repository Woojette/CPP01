#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*funcs[4])(void);
    funcs[0] = &Harl::debug;
    funcs[1] = &Harl::info;
    funcs[2] = &Harl::warning;
    funcs[3] = &Harl::error;

    std::string lvs[4];
    lvs[0] = "DEBUG";
    lvs[1] = "INFO";
    lvs[2] = "WARNING";
    lvs[3] = "ERROR";

    for (int i = 0; i < 4; i++)
    {
        if (lvs[i] == level)
        {
           (this->*funcs[i])();
            return;
        }
    }
}
