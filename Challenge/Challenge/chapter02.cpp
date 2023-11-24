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
        << L"      /|     3 |³                                    33g" << '\n'
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
    std::cout << "Введите два числа: ";
    double a, b;
    std::cin >> a >> b;

    if (checkInput())
    {
        std::cout << "Среднее арифметическое модулей: " << (abs(a) + abs(b)) / 2 << '\n';
        std::cout << "Среднее геометрическое модулей: " << pow(abs(a * b), 1.0 / 2) << '\n';
    }
}

void chapter02::solution23()
{
    std::cout << "Введите длины сторон прямоугольника: ";
    double a, b;
    std::cin >> a >> b;

    if (checkInput())
    {
        std::cout << "Периметр: " << (a + b) * 2 << '\n';
        std::cout << "Длина диагонали: " << sqrt(a * a + b * b) << '\n';
    }
}

void chapter02::solution24()
{
    std::cout << "Введите два числа: ";
    double a, b;
    std::cin >> a >> b;

    if (checkInput())
    {
        std::cout << "Сумма: " << a + b << '\n';
        std::cout << "Разность: " << a - b << '\n';
        std::cout << "Произведение: " << a * b << '\n';
        std::cout << "Частное: " << a / b << '\n';
    }
}

void chapter02::solution25()
{
    std::cout << "Введите длины сторон прямоугольного параллелепипеда: ";
    double a, b, h;
    std::cin >> a >> b >> h;

    if (checkInput())
    {
        std::cout << "Объём: " << a * b * h << '\n';
        std::cout << "Площадь боковой поверхности: " << (a + b) * h * 2 << '\n';
    }
}

void chapter02::solution26()
{
    std::cout << "Введите координаты двух точек на плоскости (x1 y1 x2 y2): ";
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    if (checkInput())
    {
        std::cout << "Расстояние мехду точками: "
            << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << '\n';
    }
}

void chapter02::solution27()
{
    solution17();   // типичная проблема задачников - дублирование
}

void chapter02::solution28()
{
    std::cout << "Введите основание1 и основание2 равнобедренной трапеции и угол при большем основании: ";
    double base1, base2, angle;
    std::cin >> base1 >> base2 >> angle;

    if (checkInput())
    {
        std::cout << "Площадь трапеции: "
            << (base2 * base2 - base1 * base1) / 4 * tan(angle * M_PI / 180)
            << '\n';
    }
}

void chapter02::solution29()
{
    std::cout << "Введите координаты трёх точек (x1 y1 x2 y2 x3 y3): ";
    double x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (checkInput())
    {
        double a = distance(x1, x2, y1, y2);
        double b = distance(x2, x3, y2, y3);
        double c = distance(x3, x1, y3, y1);
        std::cout << "Периметр треугольника: " << a + b + c << '\n';
        double p = (a + b + c) / 2;
        std::cout << "Площадь треугольника: " << sqrt(p * (p - a) * (p - b) * (p - c)) << '\n';
    }
}

void chapter02::solution30()
{
    std::cout << "Введите координаты вершин выпуклого четырёхугольника\n(x1 y1 x2 y2 x3 y3 x4 y4): ";
    double x1, y1, x2, y2, x3, y3, x4, y4;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    if (checkInput())
    {
        if (!convex(x1, y1, x2, y2, x3, y3, x4, y4, x1, y1))
        {
            std::cout << "Не выпуклый\n";
        }
        else
        {
            double a = distance(x1, x2, y1, y2);
            double b = distance(x2, x3, y2, y3);
            double c = distance(x3, x4, y3, y4);
            double d = distance(x4, x1, y4, y1);
            double diag = distance(x2, x4, y2, y4);
            double p1 = (a + b + diag) / 2;
            double p2 = (c + d + diag) / 2;
            double s1 = sqrt(p1 * (p1 - a) * (p1 - b) * (p1 - diag));
            double s2 = sqrt(p2 * (p2 - c) * (p2 - d) * (p2 - diag));
            std::cout << "Площадь треугольника1: " << s1 << '\n';
            std::cout << "Площадь треугольника2: " << s2 << '\n';
            std::cout << "Площадь четырёхугольника: " << s1 + s2 << '\n';
        }
    }
}

void chapter02::solution31()
{
    std::cout << "Введите стоимость 1 кг конфет, печенья и яблок: ";
    double candies, cookies, apples;
    std::cin >> candies >> cookies >> apples;

    if (!checkInput())
    {
        return;
    }

    std::cout << "Введите количество купленных конфет, печенья и яблок (в кг): ";
    double x, y, z;
    std::cin >> x >> y >> z;

    if (!checkInput())
    {
        return;
    }

    std::cout << "Стоимость покупки: " << x * candies + y * cookies + z * apples << '\n';
}

void chapter02::solution32()
{
    std::cout << "Введите стоимость монитора, системного блока, клавиатуры и мыши:\n";
    double monic, block, keyb, mouse;
    std::cin >> monic >> block >> keyb >> mouse;

    if (!checkInput())
    {
        return;
    }

    double cost = monic + block + keyb + mouse;
    std::cout << "Стоимость 3 компов: " << 3 * cost << '\n';

    std::cout << "Введите количество купленных компьютеров: ";
    int n;
    std::cin >> n;

    if (!checkInput())
    {
        return;
    }

    std::cout << "Стоимость покупки " << n << " компов: " << n * cost << '\n';
}

void chapter02::solution33()
{
    std::cout << "Введите возраст Тани: ";
    int ageTanya;
    std::cin >> ageTanya;

    if (!checkInput())
    {
        return;
    }

    std::cout << "Введите возраст Мити: ";
    int ageMitya;
    std::cin >> ageMitya;

    if (!checkInput())
    {
        return;
    }

    double avgAge = (ageMitya + ageTanya) / 2.;
    std::cout << "Средний возраст: " << avgAge << '\n';
    std::cout << "Возраст Тани отличается от среднего на " << abs(avgAge - ageTanya) << " года (год, лет)\n";
    std::cout << "Возраст Мити отличается от среднего на " << abs(avgAge - ageMitya) << " года (год, лет)\n";
}

void chapter02::solution34()
{
    std::cout << "Введите скорости 1 и 2 автомобилей (км/ч) и расстояние между ними (км):\n";
    double v1, v2, s;
    std::cin >> v1 >> v2 >> s;

    if (checkInput())
    {
        std::cout << "Автомобили встретятся через: " << s / (v1 + v2) << " час (часа, часов)\n";
    }
}

void chapter02::solution35()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << L"Введите скорости (км/ч) 1 и 2 (V₁ > V₂) автомобилей\nи расстояние (км), на которое первый опережает второй:\n";
    _setmode(_fileno(stdout), _O_TEXT);
    double v1, v2, s;
    std::cin >> v1 >> v2 >> s;

    if (checkInput())
    {
        if (v1 <= v2)
        {
            std::cout << "Первый автомобиль не догонит второй\n";
        }
        else
        {
            std::cout << "Расстояние между автомобилями через 30 минут: " << s + 0.5 * (v1 - v2) << " км\n";
        }
    }
}

void chapter02::solution36()
{
    std::cout << "Введите температуру (°C): ";
    double degree;
    std::cin >> degree;

    if (checkInput())
    {
        std::cout << "Это " << degree * 1.8 + 32 << "°F\n";
        std::cout << "Это " << degree - 273.15 << "°K\n";
    }
}

void chapter02::solution37()
{
    std::cout << "450 градусов по Фаренгейту\n";
    std::cout << "Это " << (450 - 32) / 1.8 << "°C\n";
}

void chapter02::solution38()
{
    std::cout << "Введите 2 целых числа: ";
    int a, b;
    std::cin >> a >> b;

    if (checkInput())
    {
        std::string result;
        std::format_to(std::back_inserter(result)
            , "{0} + {1} = {2}\n{0} - {1} = {3}\n{0} * {1} = {4}\n{0} / {1} = {5}\n({0} + {1}) / 2 = {6}\n"
            , a, b, a + b, a - b, a * b, (double)a / b, (a + b) / 2.);
        std::cout << result;
    }
}
