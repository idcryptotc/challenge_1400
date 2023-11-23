#include "chapter02.h"
#include "checker.h"

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

    if (checkInput("Ты что, дурной?"))
    {
        std::cout << "y = " << 17 * x * x - 6 * x + 13 << "\n";
    }

    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << L"\nб) y = 3a² + 5a - 21\nВведите a: ";
    _setmode(_fileno(stdout), _O_TEXT);
    std::cin >> x;
    std::cout << "Результат:\n";

    if (checkInput())
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

    if (checkInput())
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

    if (checkInput())
    {
        std::cout << sqrt((2 * a + sin(abs(3 * a) * M_PI / 180)) / 3.56) << "\n";
    }

    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << L"\nб)  3.2 + √(1 + x)\n sin--------------\n         |5x|\nВведите x: ";
    _setmode(_fileno(stdout), _O_TEXT);
    std::cin >> a;
    std::cout << "Результат:\n";

    if (checkInput())
    {
        std::cout << sin(((3.2 + sqrt(1 + a)) / abs(5 * a)) * M_PI / 180) << "\n";
    }
}

void chapter02::solution04()
{
    std::cout << "Введите длину стороны квадрата: ";
    int a;
    std::cin >> a;

    if (checkInput())
    {
        std::cout << "Периметр: " << (a << 2) << '\n';
    }
}

void chapter02::solution05()
{
    std::cout << "Введите радиус окружности: ";
    double r;
    std::cin >> r;

    if (checkInput())
    {
        std::cout << "Диаметр: " << r + r << '\n';
    }
}

void chapter02::solution06()
{
    std::cout << "Земля - идеальная сфера\nРадиус: 6350 км\nВведите высоту точки наблюдения (в метрах): ";
    const double R = 6350000.0;
    double h;
    std::cin >> h;

    if (checkInput())
    {
        std::cout << "Расстояние до горизонта: " << (sqrt((R + h) * (R + h) - R * R) / 1000) << '\n';
    }
}

void chapter02::solution07()
{
    std::cout << "Введите длину ребра куба: ";
    int a;
    std::cin >> a;

    if (checkInput())
    {
        std::cout << "Объём куба: " << a * a * a << "\nПлощадь боковой поверхности: " << a * a * 4 << '\n';
    }
}

void chapter02::solution08()
{
    std::cout << "Введите радиус: ";
    int r;
    std::cin >> r;

    if (checkInput())
    {
        std::cout << "Длина окружности: " << 2 * M_PI * r << "\nПлощадь круга: " << M_PI * r * r << '\n';
    }
}

void chapter02::solution09()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << L"a) z = 2x³ - 3.44xy + 2.3x² - 7.1y + 2\n";
    _setmode(_fileno(stdout), _O_TEXT);
    double x, y;
    std::cout << "Введите x: ";
    std::cin >> x;

    if (!checkInput())
    {
        return;
    }

    std::cout << "Введите y: ";
    std::cin >> y;

    if (!checkInput())
    {
        return;
    }

    std::cout << "z = " << 2 * x * x * x - 3.44 * x * y + 2.3 * x * x - 7.1 * y + 2 << '\n';
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << L"б) x = 3.14(a + b)³ + 2.75b² - 12.7a - 4.1\n";
    _setmode(_fileno(stdout), _O_TEXT);
    std::cout << "Введите a: ";
    std::cin >> x;

    if (!checkInput())
    {
        return;
    }

    std::cout << "Введите b: ";
    std::cin >> y;

    if (!checkInput())
    {
        return;
    }

    std::cout << "z = " << 3.14 * (x + y) * (x + y) * (x + y) + 2.75 * y * y - 12.7 * x - 4.1 << '\n';
}

void chapter02::solution10()
{
    std::cout << "Введите два целых числа: ";
    int a, b;
    std::cin >> a >> b;

    if (checkInput())
    {
        std::cout << "Среднее арифметическое: " << (a + b) / 2.0 << '\n';
        std::cout << "Среднее геометрическое: " << pow(a * b, 1 / 2.0) << '\n';
    }
}

void chapter02::solution11()
{
    double v, m;
    std::cout << "Введите объём: ";
    std::cin >> v;
    std::cout << "Введите массу: ";
    std::cin >> m;

    if (checkInput())
    {
        std::cout << "Плотность: " << m / v << '\n';
    }
}

void chapter02::solution12()
{
    int n;
    double s;
    std::cout << "Введите количество жителей: ";
    std::cin >> n;

    if (!checkInput())
    {
        return;
    }

    std::cout << "Введите площадь территории: ";
    std::cin >> s;

    if (!checkInput())
    {
        return;
    }

    std::cout << "Плотность населения: " << (int)((n / s) + 0.5) << '\n';
}

void chapter02::solution13()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << L"ax + b = 0, a ≠ 0\n";
    _setmode(_fileno(stdout), _O_TEXT);
    double a, b;
    std::cout << "Введите a и b: ";
    std::cin >> a >> b;

    if (checkInput())
    {
        if (a < 0.00001)
        {
            std::cout << "На 0 делить не стоит\n";
        }
        else
        {
            std::cout << "x: " << (-b / a) << '\n';
        }
    }
}

void chapter02::solution14()
{
    std::cout << "Введите длины катетов a и b: ";
    double a, b;
    std::cin >> a >> b;

    if (checkInput())
    {
        std::cout << "Гипотенуза: " << sqrt(a * a + b * b) << '\n';
    }
}

void chapter02::solution15()
{
    std::cout << "Введите внешний и внутренний радиусы: ";
    double R, r;
    std::cin >> R >> r;

    if (checkInput())
    {
        if (R < r)
        {
            std::cout << "Впуклое кольцо с отрицательной площадью\n";
        }

        std::cout << "Площадь кольца: " << (M_PI * (R * R - r * r)) << '\n';
    }
}

void chapter02::solution16()
{
    std::cout << "Введите длины катетов a и b: ";
    double a, b;
    std::cin >> a >> b;

    if (checkInput())
    {
        std::cout << "Периметр треугольника: " << sqrt(a * a + b * b) + a + b << '\n';
    }
}

void chapter02::solution17()
{
    std::cout << "Введите основание1, основание2 и высоту равнобедренной трапеции: ";
    double base1, base2, height;
    std::cin >> base1 >> base2 >> height;

    if (checkInput())
    {
        std::cout << "Периметр трапеции: "
            << base1 + base2 + 2 * sqrt(height * height + (base1 - base2) * (base1 - base2) / 4)
            << '\n';
    }
}

void chapter02::solution18()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout
        << L"             2 + y" << '\n'
        << L"        x + -------" << '\n'
        << L"               x²" << '\n'
        << L"z = ------------------ и q = 7.25sin(x) - |y|" << '\n'
        << L"               1" << '\n'
        << L"     y + ------------" << '\n'
        << L"          √(x² + 10)" << '\n';
    _setmode(_fileno(stdout), _O_TEXT);
    std::cout << "Введите x и y: ";
    double x, y;
    std::cin >> x >> y;

    if (checkInput())
    {
        std::cout
            << "z = " << (x + (2 + y) / (x * x)) / (y + 1 / (sqrt(x * x + 10))) << '\n'
            << "q = " << 7.25 * sin(x * M_PI / 180) - abs(y) << '\n';
    }
}

void chapter02::solution19()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout
        << L"          2" << '\n'
        << L"     --------- + b" << '\n'
        << L"      a² + 25              |a| + 2sin(b)" << '\n'
        << L"x = --------------- и y = ---------------" << '\n'
        << L"           a + b                5.5a" << '\n'
        << L"     √b + -------" << '\n'
        << L"             2" << '\n';
    _setmode(_fileno(stdout), _O_TEXT);
    std::cout << "Введите a и b: ";
    double a, b;
    std::cin >> a >> b;

    if (checkInput())
    {
        std::cout
            << "x = " << (2 / (a * a + 25) + b) / (sqrt(b) + (a + b) / 2) << '\n'
            << "y = " << (abs(a) + 2 * sin(b * M_PI / 180)) / (5.5 * a) << '\n';
    }
}

void chapter02::solution20()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout
        << L"       --------------" << '\n'
        << L"      /|     3 |³                                    33g"<< '\n'
        << L"a =  / |e - ---| + g , b = sin(e) + cos²(h) и c = --------" << '\n'
        << L"    √  |     f |                                   ef - 3" << '\n';
    _setmode(_fileno(stdout), _O_TEXT);
    std::cout << "Введите e, f, g и h: ";
    double e, f, g, h;
    std::cin >> e >> f >> g >> h;

    if (checkInput())
    {
        std::cout
            << "a = " << sqrt(pow(abs(e - 3 / f), 3) + g) << '\n'
            << "b = " << sin(e * M_PI / 180) + pow(cos(h * M_PI / 180), 2) << '\n'
            << "c = " << (33 * g) / (e * f - 3) << '\n';
    }
}

void chapter02::solution21()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout
        << L"          f" << '\n'
        << L"     e + ---" << '\n'
        << L"          2                        ------------------" << '\n'
        << L"a = ---------, b = |h² - g| и c = √(g - h)² - 3sin(e)" << '\n'
        << L"        3" << '\n';
    _setmode(_fileno(stdout), _O_TEXT);
    std::cout << "Введите e, f, g и h: ";
    double e, f, g, h;
    std::cin >> e >> f >> g >> h;

    if (checkInput())
    {
        std::cout
            << "a = " << (e + f / 2) / 3 << '\n'
            << "b = " << abs(h * h - g) << '\n'
            << "c = " << sqrt(pow(g - h, 2) - 3 * sin(e * M_PI / 180)) << '\n';
    }
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
