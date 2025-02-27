#include "Harl.hpp"


void Harl::complain(const std::string &level)
{
    if(level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
        return ;

    switch(level[0])
    {
        case 'D':
            this->debug();
            break ;
        case 'I':
            this->info();
            break ;
        case 'W':
            this->warning();
            break ;
        case 'E':
            this->error();
            break ;
    }
}


void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}    

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}    