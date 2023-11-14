#include "chapter02.h"

#define _USE_MATH_DEFINES

#include<math.h>

#pragma warning(push)
#pragma warning(disable: 6031)

void chapter02::startFunction()
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
        solution38
    };

    while (true)
    {
        system("cls");
        std::cout << "Глава 2. Вычисления по формулам" << std::endl;
        std::cout << "Введи число от 1 до 38" << std::endl;
        int n;

        try
        {
            std::cin >> n;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
            }

            if (n < 1 || n > 38)
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

void chapter02::solution01()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << L"2.1\na) y = 17x² - 6x + 13\nВведите x: ";
    _setmode(_fileno(stdout), _O_TEXT);
    double x;
    std::cin >> x;
    std::cout << "Результат:\n";

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Ты что, дурной?\n";
    }
    else
    {
        std::cout << "y = " << 17 * x * x - 6 * x + 13 << "\n";
    }

    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << L"\nб) y = 3a² + 5a - 21\nВведите a: ";
    _setmode(_fileno(stdout), _O_TEXT);
    std::cin >> x;
    std::cout << "Результат:\n";

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Ты что, дурной?\n";
    }
    else
    {
        std::cout << "y = " << 3 * x * x + 5 * x - 21 << "\n";
    }
}

void chapter02::solution02()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << L"2.2\n a² + 10\n---------\n√(a² + 1)\nВведите a: ";
    _setmode(_fileno(stdout), _O_TEXT);
    double a;
    std::cin >> a;
    std::cout << "Результат:\n";

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Ты что, дурной?\n";
    }
    else
    {
        std::cout << (a * a + 10) / (sqrt(a * a + 1)) << "\n";
    }
}

void chapter02::solution03()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << L"2.3\na) / 2a + sin|3a|\n  / --------------\n √      3.56\nВведите a: ";
    _setmode(_fileno(stdout), _O_TEXT);
    double a;
    std::cin >> a;
    std::cout << "Результат:\n";

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Ты что, дурной?\n";
    }
    else
    {
        std::cout << sqrt((2 * a + sin(abs(3 * a) * M_PI / 180)) / 3.56) << "\n";
    }

    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << L"\nб)  3.2 + √(1 + x)\n sin--------------\n         |5x|\nВведите x: ";
    _setmode(_fileno(stdout), _O_TEXT);
    std::cin >> a;
    std::cout << "Результат:\n";

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Ты что, дурной?\n";
    }
    else
    {
        std::cout << sin(((3.2 + sqrt(1 + a)) / abs(5 * a)) * M_PI / 180) << "\n";
    }
}

void chapter02::solution04()
{
}

void chapter02::solution05()
{
}

void chapter02::solution06()
{
}

void chapter02::solution07()
{
}

void chapter02::solution08()
{
}

void chapter02::solution09()
{
}

void chapter02::solution10()
{
}

void chapter02::solution11()
{
}

void chapter02::solution12()
{
}

void chapter02::solution13()
{
}

void chapter02::solution14()
{
}

void chapter02::solution15()
{
}

void chapter02::solution16()
{
}

void chapter02::solution17()
{
}

void chapter02::solution18()
{
}

void chapter02::solution19()
{
}

void chapter02::solution20()
{
}

void chapter02::solution21()
{
}

void chapter02::solution22()
{
}

void chapter02::solution23()
{
}

void chapter02::solution24()
{
}

void chapter02::solution25()
{
}

void chapter02::solution26()
{
}

void chapter02::solution27()
{
}

void chapter02::solution28()
{
}

void chapter02::solution29()
{
}

void chapter02::solution30()
{
}

void chapter02::solution31()
{
}

void chapter02::solution32()
{
}

void chapter02::solution33()
{
}

void chapter02::solution34()
{
}

void chapter02::solution35()
{
}

void chapter02::solution36()
{
}

void chapter02::solution37()
{
}

void chapter02::solution38()
{
}
