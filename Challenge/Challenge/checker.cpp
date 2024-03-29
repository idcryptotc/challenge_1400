#include "checker.h"

bool checkInput(std::string message)
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << message << '\n';
        return false;
    }

    return true;
}

bool checkInput(bool isMessage, std::string message)
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        
        if (isMessage)
        {
            std::cout << message << '\n';
        }
        return false;
    }

    return true;
}
