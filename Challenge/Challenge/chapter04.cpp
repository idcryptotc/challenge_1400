#include "chapter04.h"
#include "checker.h"

#pragma warning(push)
#pragma warning(disable: 6031)

void chapter04::startFunction()
{
    static const std::vector<std::function<void()>> solutions =
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
        solution51,
        solution52,
        solution53,
        solution54,
        solution55,
        solution56,
        solution57,
        solution58,
        solution59,
        solution60,
        solution61,
        solution62,
        solution63,
        solution64,
        solution65,
        solution66,
        solution67,
        solution68,
        solution69,
        solution70,
        solution71,
        solution72,
        solution73,
        solution74,
        solution75,
        solution76,
        solution77,
        solution78,
        solution79,
        solution80,
        solution81,
        solution82,
        solution83,
        solution84,
        solution85,
        solution86,
        solution87,
        solution88,
        solution89,
        solution90,
        solution91,
        solution92,
        solution93,
        solution94,
        solution95,
        solution96,
        solution97,
        solution98,
        solution99,
        solution100,
        solution101,
        solution102,
        solution103,
        solution104,
        solution105,
        solution106,
        solution107,
        solution108,
        solution109,
        solution110,
        solution111,
        solution112,
        solution113,
        solution114,
        solution115,
        solution116,
        solution117,
        solution118,
        solution119,
        solution120,
        solution121,
        solution122,
        solution123,
        solution124,
        solution125,
        solution126,
        solution127,
        solution128,
        solution129,
        solution130,
        solution131,
        solution132,
        solution133,
        solution134,
        solution135,
        solution136,
        solution137,
        solution138,
        solution139,
        solution140,
        solution141,
        solution142,
        solution143,
        solution144,
        solution145
    };

    static const std::size_t solutions_size = solutions.size() - 1;

    while (true)
    {
        system("cls");
        std::cout << "Глава 4. Варианты действий в программе\n";
        std::cout << "Введи число от 1 до " << solutions_size << '\n';
        int n;

        try
        {
            std::cin >> n;

            if (checkInput(false))
            {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
            }

            if (n < 1 || n > solutions_size)
            {
                std::cout << "Ты что, дурной?\n";
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
            std::cout << "Чё? Чё-то не то...\n";
            Sleep(1000);
        }
        _getch();
    }
}

void chapter04::solution01()
{
    std::cout << "Введите два различных вещественных числа: ";
    double a, b;
    std::cin >> a >> b;

    if (checkInput())
    {
        if (a == b)
        {
            std::cout << "Числа равны, тебя просили так не делать\n";
        }
        else
        {
            std::cout << "Число " << (a > b ? a : b) << " больше\n";
            std::cout << "Число " << (a < b ? a : b) << " меньше\n";
        }
    }
}

void chapter04::solution02()
{
    std::cout << "Введите x: ";
    double x;
    std::cin >> x;

    if (checkInput())
    {
        std::cout << "y = " << (x > 0 ? pow(sin(x), 2) : (1 - sin(x * x))) << '\n';
    }
}

void chapter04::solution03()
{
    std::cout << "Введите x: ";
    double x;
    std::cin >> x;

    if (checkInput())
    {
        std::cout << "y = " << (x > 0 ? sin(x * x) : (1 + 2 * pow(sin(x), 2))) << '\n';
    }
}

void chapter04::solution04()
{
    std::cout << "Введите x и y: ";
    double x, y;
    std::cin >> x >> y;

    if (checkInput())
    {
        if (x == 4)
        {
            std::cout << "Точка попала на границу областей I и II\n";
        }
        else
        {
            std::cout << "Точка попала в область " << (x > 4 ? "II\n" : "I\n");
        }
    }
}

void chapter04::solution05()
{
    std::cout << "Введите x и y: ";
    double x, y;
    std::cin >> x >> y;

    if (checkInput())
    {
        if (y == 3)
        {
            std::cout << "Точка попала на границу областей I и II\n";
        }
        else
        {
            std::cout << "Точка попала в область " << (y < 3 ? "II\n" : "I\n");
        }
    }
}

void chapter04::solution06()
{
}

void chapter04::solution07()
{
}

void chapter04::solution08()
{
}

void chapter04::solution09()
{
}

void chapter04::solution10()
{
}

void chapter04::solution11()
{
}

void chapter04::solution12()
{
}

void chapter04::solution13()
{
}

void chapter04::solution14()
{
}

void chapter04::solution15()
{
}

void chapter04::solution16()
{
}

void chapter04::solution17()
{
}

void chapter04::solution18()
{
}

void chapter04::solution19()
{
}

void chapter04::solution20()
{
}

void chapter04::solution21()
{
}

void chapter04::solution22()
{
}

void chapter04::solution23()
{
}

void chapter04::solution24()
{
}

void chapter04::solution25()
{
}

void chapter04::solution26()
{
}

void chapter04::solution27()
{
}

void chapter04::solution28()
{
}

void chapter04::solution29()
{
}

void chapter04::solution30()
{
}

void chapter04::solution31()
{
}

void chapter04::solution32()
{
}

void chapter04::solution33()
{
}

void chapter04::solution34()
{
}

void chapter04::solution35()
{
}

void chapter04::solution36()
{
}

void chapter04::solution37()
{
}

void chapter04::solution38()
{
}

void chapter04::solution39()
{
}

void chapter04::solution40()
{
}

void chapter04::solution41()
{
}

void chapter04::solution42()
{
}

void chapter04::solution43()
{
}

void chapter04::solution44()
{
}

void chapter04::solution45()
{
}

void chapter04::solution46()
{
}

void chapter04::solution47()
{
}

void chapter04::solution48()
{
}

void chapter04::solution49()
{
}

void chapter04::solution50()
{
}

void chapter04::solution51()
{
}

void chapter04::solution52()
{
}

void chapter04::solution53()
{
}

void chapter04::solution54()
{
}

void chapter04::solution55()
{
}

void chapter04::solution56()
{
}

void chapter04::solution57()
{
}

void chapter04::solution58()
{
}

void chapter04::solution59()
{
}

void chapter04::solution60()
{
}

void chapter04::solution61()
{
}

void chapter04::solution62()
{
}

void chapter04::solution63()
{
}

void chapter04::solution64()
{
}

void chapter04::solution65()
{
}

void chapter04::solution66()
{
}

void chapter04::solution67()
{
}

void chapter04::solution68()
{
}

void chapter04::solution69()
{
}

void chapter04::solution70()
{
}

void chapter04::solution71()
{
}

void chapter04::solution72()
{
}

void chapter04::solution73()
{
}

void chapter04::solution74()
{
}

void chapter04::solution75()
{
}

void chapter04::solution76()
{
}

void chapter04::solution77()
{
}

void chapter04::solution78()
{
}

void chapter04::solution79()
{
}

void chapter04::solution80()
{
}

void chapter04::solution81()
{
}

void chapter04::solution82()
{
}

void chapter04::solution83()
{
}

void chapter04::solution84()
{
}

void chapter04::solution85()
{
}

void chapter04::solution86()
{
}

void chapter04::solution87()
{
}

void chapter04::solution88()
{
}

void chapter04::solution89()
{
}

void chapter04::solution90()
{
}

void chapter04::solution91()
{
}

void chapter04::solution92()
{
}

void chapter04::solution93()
{
}

void chapter04::solution94()
{
}

void chapter04::solution95()
{
}

void chapter04::solution96()
{
}

void chapter04::solution97()
{
}

void chapter04::solution98()
{
}

void chapter04::solution99()
{
}

void chapter04::solution100()
{
}

void chapter04::solution101()
{
}

void chapter04::solution102()
{
}

void chapter04::solution103()
{
}

void chapter04::solution104()
{
}

void chapter04::solution105()
{
}

void chapter04::solution106()
{
}

void chapter04::solution107()
{
}

void chapter04::solution108()
{
}

void chapter04::solution109()
{
}

void chapter04::solution110()
{
}

void chapter04::solution111()
{
}

void chapter04::solution112()
{
}

void chapter04::solution113()
{
}

void chapter04::solution114()
{
}

void chapter04::solution115()
{
}

void chapter04::solution116()
{
}

void chapter04::solution117()
{
}

void chapter04::solution118()
{
}

void chapter04::solution119()
{
}

void chapter04::solution120()
{
}

void chapter04::solution121()
{
}

void chapter04::solution122()
{
}

void chapter04::solution123()
{
}

void chapter04::solution124()
{
}

void chapter04::solution125()
{
}

void chapter04::solution126()
{
}

void chapter04::solution127()
{
}

void chapter04::solution128()
{
}

void chapter04::solution129()
{
}

void chapter04::solution130()
{
}

void chapter04::solution131()
{
}

void chapter04::solution132()
{
}

void chapter04::solution133()
{
}

void chapter04::solution134()
{
}

void chapter04::solution135()
{
}

void chapter04::solution136()
{
}

void chapter04::solution137()
{
}

void chapter04::solution138()
{
}

void chapter04::solution139()
{
}

void chapter04::solution140()
{
}

void chapter04::solution141()
{
}

void chapter04::solution142()
{
}

void chapter04::solution143()
{
}

void chapter04::solution144()
{
}

void chapter04::solution145()
{
}
