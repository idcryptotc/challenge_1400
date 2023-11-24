#include "chapter03.h"
#include "checker.h"

#pragma warning(push)
#pragma warning(disable: 6031)

void chapter03::startFunction()
{
    std::vector<std::function<void()>> solutions =
    {
        nullptr,
        solution01,
        solution02,
        solution03,
        solution04,
        solution05,
        solution06,
        solution07,
        solution08,
        solution09,
        solution10,
        solution11,
        solution12,
        solution13,
        solution14,
        solution15,
        solution16,
        solution17,
        solution18,
        solution19,
        solution20,
        solution21,
        solution22,
        solution23,
        solution24,
        solution25,
        solution26,
        solution27,
        solution28,
        solution29,
        solution30,
        solution31,
        solution32,
        solution33,
        solution34,
        solution35,
        solution36,
        solution37,
        solution38,
        solution39,
        solution40,
        solution41,
        solution42,
        solution43,
        solution44,
        solution45,
        solution46,
        solution47,
        solution48,
        solution49,
        solution50,
        solution51
    };

    while (true)
    {
        system("cls");
        std::cout << "Глава 3. Целочисленная арифметика" << std::endl;
        std::cout << "Введи число от 1 до 51" << std::endl;
        int n;

        try
        {
            std::cin >> n;

            if (checkInput(false))
            {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
            }

            if (n < 1 || n > 51)
            {
                std::cout << "Ты что, дурной?" << std::endl;
                Sleep(1000);
                continue;
            }
            else
            {
                solutions[n]();
                break;
            }
        }
        catch (...)
        {
            std::cout << "Чё? Мозг проебал?" << std::endl;
            Sleep(1000);
        }
        _getch();
    }
}

void chapter03::solution01()
{
}

void chapter03::solution02()
{
}

void chapter03::solution03()
{
}

void chapter03::solution04()
{
}

void chapter03::solution05()
{
}

void chapter03::solution06()
{
}

void chapter03::solution07()
{
}

void chapter03::solution08()
{
}

void chapter03::solution09()
{
}

void chapter03::solution10()
{
}

void chapter03::solution11()
{
}

void chapter03::solution12()
{
}

void chapter03::solution13()
{
}

void chapter03::solution14()
{
}

void chapter03::solution15()
{
}

void chapter03::solution16()
{
}

void chapter03::solution17()
{
}

void chapter03::solution18()
{
}

void chapter03::solution19()
{
}

void chapter03::solution20()
{
}

void chapter03::solution21()
{
}

void chapter03::solution22()
{
}

void chapter03::solution23()
{
}

void chapter03::solution24()
{
}

void chapter03::solution25()
{
}

void chapter03::solution26()
{
}

void chapter03::solution27()
{
}

void chapter03::solution28()
{
}

void chapter03::solution29()
{
}

void chapter03::solution30()
{
}

void chapter03::solution31()
{
}

void chapter03::solution32()
{
}

void chapter03::solution33()
{
}

void chapter03::solution34()
{
}

void chapter03::solution35()
{
}

void chapter03::solution36()
{
}

void chapter03::solution37()
{
}

void chapter03::solution38()
{
}

void chapter03::solution39()
{
}

void chapter03::solution40()
{
}

void chapter03::solution41()
{
}

void chapter03::solution42()
{
}

void chapter03::solution43()
{
}

void chapter03::solution44()
{
}

void chapter03::solution45()
{
}

void chapter03::solution46()
{
}

void chapter03::solution47()
{
}

void chapter03::solution48()
{
}

void chapter03::solution49()
{
}

void chapter03::solution50()
{
}

void chapter03::solution51()
{
}
