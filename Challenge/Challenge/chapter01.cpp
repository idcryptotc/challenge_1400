#include "chapter01.h"

#pragma warning(push)
#pragma warning(disable: 6031)

void chapter01::startFunction()
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
        solution17
    };

    while (true)
    {
        system("cls");
        std::cout << "Глава 1. Вывод информации на экран" << std::endl;
        std::cout << "Введи число от 1 до 17" << std::endl;
        int n;

        try
        {
            std::cin >> n;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
            }

            if (n < 1 || n > 17)
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
            std::cout << "Чё? Чё-то не то..." << std::endl;
            Sleep(1000);
        }
        _getch();
    }
}

void chapter01::solution01()
{
    std::cout << "1.1. Вывести на одной строке числа 31, 18 и 79 с одним пробелом между ними. Текст '31 18 79' не использовать.\n";
    int arr[3] = { 31, 18, 79 };
    std::cout << "Результат:\n";

    for (std::size_t i = 0; i < 3; ++i)
    {
        std::cout << arr[i] << (i == 2 ? '\n' : ' ');
    }
}

void chapter01::solution02()
{
    std::cout << "1.2. Вывести на одной строке числа 47, 52 и 150 с двумя пробелами между ними. Текст '47  52  150' не использовать.\n";
    int arr[3] = { 47, 52, 150 };
    std::cout << "Результат:\n";

    for (std::size_t i = 0; i < 3; ++i)
    {
        std::cout << arr[i] << (i == 2 ? "\n" : "  ");
    }
}

void chapter01::solution03()
{
    std::cout << "1.3. Вывести на экран числа 50 и 10 одно под другим.\n";
    std::cout << "Результат:\n";
    std::cout << "50\n10\n";
}

void chapter01::solution04()
{
    std::cout << "1.4. Вывести на экран числа 5, 10 и 21 одно под другим.\n";
    std::cout << "Результат:\n";
    std::cout << "5\n10\n21\n";
}

void chapter01::solution05()
{
    std::cout << "1.5. Получить на экране следующее:\n1\n2\n";
    std::cout << "Результат:\n";
    std::cout << "1\n2\n";
}

void chapter01::solution06()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    std::wcout << L"1.6. Число π примерно равно 3.1415926. Вывести на экран это число с тремя цифрами в дробной части.\n";
    std::wcout << L"Текст '3.142' не использовать\n";
    double pi = 3.1415926;
    _setmode(_fileno(stdout), _O_TEXT);
    std::cout << "Результат:\n";
    std::streamsize ss = std::cout.precision();
    std::cout << std::fixed << std::setprecision(3) << pi << "\n";
    std::cout << std::defaultfloat << std::setprecision(ss);
}

void chapter01::solution07()
{
    std::cout << "1.7. Число e (основание натурального логарифма) приблизительно равно 2.71828.\n";
    std::cout << "Вывести на экран это число с точностью до десятых. Текст '2.7' не использовать.\n";
    double e = 2.71828;
    std::cout << "Результат:\n";
    std::streamsize ss = std::cout.precision();
    std::cout << std::fixed << std::setprecision(1) << e << "\n";
    std::cout << std::defaultfloat << std::setprecision(ss);
}

void chapter01::solution08()
{
    std::cout << "1.8. Составить программу вывода на экран числа, вводимого с клавиатуры.\n";
    std::cout << "Выводимому числу должно предшествовать сообщение \"Вы ввели число\".\n";
    std::cout << "Введите число: ";
    int number;
    std::cin >> number;
    std::cout << "Результат:\n";

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Ты что, дурной?\n";
    }
    else
    {
        std::cout << "Вы ввели число " << number << "\n";
    }
}

void chapter01::solution09()
{
    std::cout << "1.9. Составить программу вывода на экран числа, вводимого с клавиатуры.\n";
    std::cout << "После выводимого числа должно следовать сообщение \"- вот какое число Вы ввели\".\n";
    std::cout << "Введите число: ";
    int number;
    std::cin >> number;
    std::cout << "Результат:\n";

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Ты что, дурной?\n";
    }
    else
    {
        std::cout << number << " - вот какое число Вы ввели\n";
    }
}

void chapter01::solution10()
{
    std::cout << "1.10. Составить программу, которая запрашивает имя человека и повторяет его на экране.\n";
    std::cout << "Введите имя: ";
    std::string name;
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    SetConsoleCP(1251);
    std::getline(std::cin, name);
    std::cout << "Результат:\n";
    std::cout << name << "\n";
}

void chapter01::solution11()
{
    std::cout << "1.11. Составить программу, которая запрашивает название футбольной команды и повторяет его на экране.\n";
    std::cout << "со словами \"- это чемпион!\"\n";
    std::cout << "Введите название футбольной команды: ";
    std::string name;
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    SetConsoleCP(1251);
    std::getline(std::cin, name);
    std::cout << "Результат:\n";
    std::cout << name << " - это чемпион!\n";
}

void chapter01::solution12()
{
    std::cout << "1.12. Напишите программу, в которую вводится имя человека и выводится на экран приветствие\n";
    std::cout << "в виде слова \"Привет\", после которого должна стоять запятая, введённое имя и восклицательный знак.\n";
    std::cout << "После запятой должен стоять пробел, а перед восклицательным знаком пробела быть не должно.\n";
    std::cout << "Введите имя: ";
    std::string name;
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    SetConsoleCP(1251);
    std::getline(std::cin, name);
    std::cout << "Результат:\n";
    std::cout << std::format("Привет, {}!\n", name);
}

void chapter01::solution13()
{
    std::cout << "1.13. Напишите программу, в которую вводится целое число, после чего на экран выводится\n";
    std::cout << "следующее и предыдущее число.\n";
    std::cout << "Введите число: ";
    int number;
    std::cin >> number;
    std::cout << "Результат:\n";

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Ты что, дурной?\n";
    }
    else
    {
        std::string result;
        std::format_to(std::back_inserter(result)
            , "Следующее за числом {0} число - {1}\nДля числа {0} предыдущее число - {2}\n"
            , number, number + 1, number - 1);
        std::cout << result;
    }
}

void chapter01::solution14()
{
    std::cout << "1.14. Составить программу вывода на экран в одну строку трёх любых чисел,\n";
    std::cout << "вводимых с клавиатуры, с двумя пробелами между ними.\n";
    std::cout << "Введите три числа:\n";
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << "Результат:\n";

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Ты что, дурной?\n";
    }
    else
    {
        std::cout << std::format("{}  {}  {}\n", a, b, c);
    }
}

void chapter01::solution15()
{
    std::cout << "1.15. Составить программу вывода на экран в одну строку четырёх любых чисел,\n";
    std::cout << "вводимых с клавиатуры, с одним пробелом между ними.\n";
    std::cout << "Введите четыре числа:\n";
    const int COUNT = 4;
    std::vector<int> v(COUNT);

    for (auto &i : v)
    {
        std::cin >> i;
    }

    std::cout << "Результат:\n";

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Ты что, дурной?\n";
    }
    else
    {
        for (const auto &i : v)
        {
            std::cout << i << ' ';
        }

        std::cout << '\n';
    }
}

void chapter01::solution16()
{
    std::cout << "1.16. Составить программу вывода на экран следующей информации:\n";
    std::string result;
    std::format_to(std::back_inserter(result)
        , "а) 5 10\t\tб) 100 {0}\tв) {2} 25\n   7 см\t\t   1949 {1}\t   {2} {3}\n"
        , 't', 'v', 'x', 'y');
    std::cout << result;
    std::cout << "Введите t, v, x, y:\n";
    int t, v, x, y;
    std::cin >> t >> v >> x >> y;
    std::cout << "Результат:\n";
    result.clear();

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Ты что, дурной?\n";
    }
    else
    {
        std::format_to(std::back_inserter(result)
            , "а) 5 10\t\tб) 100 {0}\tв) {2} 25\n   7 см\t\t   1949 {1}\t   {2} {3}\n"
            , t, v, x, y);
        std::cout << result;
    }
}

void chapter01::solution17()
{
    std::cout << "1.17. Составить программу вывода на экран следующей информации:\n";
    std::string result;
    std::format_to(std::back_inserter(result)
        , "а) 2 кг\t\tб) {0} 1\t\tв) {2} {3}\n   13 17\t   19 {1}\t\t   5 {3}\n"
        , 'a', 'b', 'x', 'y');
    std::cout << result;
    std::cout << "Введите a, b, x, y:\n";
    int a, b, x, y;
    std::cin >> a >> b >> x >> y;
    std::cout << "Результат:\n";
    result.clear();

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Ты что, дурной?\n";
    }
    else
    {
        std::format_to(std::back_inserter(result)
            , "а) 2 кг\t\tб) {0} 1\t\tв) {2} {3}\n   13 17\t   19 {1}\t\t   5 {3}\n"
            , a, b, x, y);
        std::cout << result;
    }
}
