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
        std::cout << "Глава 3. Целочисленная арифметика\n";
        std::cout << "Введи число от 1 до 51\n";
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

void chapter03::solution01()
{
    std::cout << "Введите расстояние в сантиметрах: ";
    int s;
    std::cin >> s;

    if (checkInput())
    {
        std::cout << "Расстояние в метрах: " << s / 100 << '\n';
    }
}

void chapter03::solution02()
{
    std::cout << "Введите массу в килограммах: ";
    int m;
    std::cin >> m;

    if (checkInput())
    {
        std::cout << "Число полных центнеров: " << m / 100 << '\n';
    }
}

void chapter03::solution03()
{
    std::cout << "234 дня - это " << 234 / 7 << " полных недель\n";
}

void chapter03::solution04()
{
    std::cout << "Введите количество школьников: ";
    unsigned int n = 0u;
    std::cin >> n;

    if (!checkInput())
    {
        return;
    }

    std::cout << "Введите количество яблок: ";
    unsigned int k = 0u;
    std::cin >> k;

    if (!checkInput())
    {
        return;
    }

    std::cout << "Каждый школьник получит яблок: " << k / n << '\n';
    std::cout << "В корзинке останется яблок: " << k % n << '\n';
}

void chapter03::solution05()
{
    std::cout
        << "Прямоугольник 543х130 можно разделить\nна "
        << 543 / 130
        << " квадратов со стороной 130\n";
}

void chapter03::solution06()
{
    const int COUNT_COUPE = 9;
    const int COUNT_PLACE = 4;
    std::cout << "Введите номер места: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n <= COUNT_COUPE * COUNT_PLACE)
        {
            std::cout << "Ваше купе №" << n / COUNT_PLACE + 1 << '\n';
        }
        else
        {
            std::cout << "Ваше место в другом вагоне\n";
        }
    }
}

void chapter03::solution07()
{
    enum class data
    {
        count_floor = 5,
        count_flat = 15,
        count_flat_on_floor = (int)data::count_flat / (int)data::count_floor
    };

    std::cout << "Введите номер квартиры: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n <= (int)data::count_flat)
        {

            int floor = (n + (int)data::count_flat_on_floor - 1) / (int)data::count_flat_on_floor;
            std::cout << "Ваш этаж: " << floor << '\n';
        }
        else
        {
            std::cout << "Ваша квартира не в этом подъезде\n";
        }
    }
}

void chapter03::solution08()
{
    enum class data
    {
        count_rows = 20,
        count_places = 15,
        start_number = 1643
    };

    const std::string serial = "AB0";
    std::cout << "Введите серийный номер: " << serial;
    unsigned int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < (int)data::start_number)
        {
            std::cout << "Ваш билет просрочен\n";
        }
        else if (n >= (int)data::start_number + (int)data::count_rows * (int)data::count_places)
        {
            std::cout << "Сейчас не ваш сеанс\n";
        }
        else
        {
            std::cout
                << "Ваш ряд: "
                << (n - (int)data::start_number + (int)data::count_places) / (int)data::count_places
                << '\n';
        }
    }
}

void chapter03::solution09()
{
    std::cout << "Введите количество секунд: ";
    std::uint32_t n;
    std::cin >> n;

    if (checkInput())
    {
        n %= 24 * 60 * 60;
        std::string time = std::format("{0:02} : {1:02} : {2:02}", n / 3600, n / 60 % 60, n % 60);
        std::cout << "Время: " << time << '\n';
    }
}

void chapter03::solution10()
{
    enum class days
    {
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday
    };

    const std::map<days, std::string> daysDict =
    {
        { days::sunday, "воскресенье" },
        { days::monday, "понедельник" },
        { days::tuesday, "вторник" },
        { days::wednesday, "среда" },
        { days::thursday, "четверг" },
        { days::friday, "пятница" },
        { days::saturday, "суббота" }
    };

    std::cout << "Введите целое число (1 <= k <= 365): ";
    std::uint32_t k;
    std::cin >> k;

    if (!checkInput())
    {
        return;
    }

    std::cout << "Введите день начала года (1..7): ";
    std::uint32_t d;
    std::cin >> d;

    if (!checkInput())
    {
        return;
    }

    if (d > 7 || d < 1)
    {
        std::cout << "Число не соответствует необходимому диапазону\n";
    }
    else
    {
        std::cout << "Выбран день: " << daysDict.at((days)((k + d % 7 - 1) % 7)) << '\n';
    }
}

void chapter03::solution11()
{
    int start_year = 1990;
    std::cout << "Введите количество месяцев: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        int x = (1 + n) % 12;
        std::cout << "Итоговый месяц: " << (!x ? 12 : x) << '\n';
    }
}

void chapter03::solution12()
{
    enum class data
    {
        count_floors = 5,
        count_flats = 20,
        count_flats_on_floor = (int)count_flats / (int)count_floors
    };

    std::cout << "Введите номер квартиры: ";
    std::uint32_t n;
    std::cin >> n;

    if (checkInput())
    {
        int num = n % (int)data::count_flats_on_floor;
        std::cout
            << "Квартира находится на "
            << (n + (int)data::count_flats_on_floor - 1) / (int)data::count_floors + 1
            << " этаже\nи является "
            << (!num ? (int)data::count_flats_on_floor : num)
            << " по счёту\n";
    }
}

void chapter03::solution13()
{
    enum class data : int
    {
        count_rows = 10,
        count_columns = 5
    };

    std::cout << "Введите номер ячейки: ";
    std::uint32_t n;
    std::cin >> n;

    if (checkInput())
    {
        if (n > (int)data::count_rows * (int)data::count_columns || n == 0)
        {
            std::cout << "Попадание в таблицу не зафиксировано\n";
        }
        else
        {
            int str_num = (n + (int)data::count_columns - 1) / (int)data::count_columns;
            std::cout << "Ячейка находится в строке: " << str_num << '\n';
            std::cout << "Номер найденной строки находится в строке: "
                << (str_num - 1) / (int)data::count_columns + 1 << '\n';
        }
    }
}

void chapter03::solution14()
{
    enum class data
    {
        count_floors = 9,
        count_flats_on_floor = 6,
        count_entrance = 4
    };

    std::cout << "Введите номер квартиры: ";
    std::uint32_t n;
    std::cin >> n;

    if (checkInput())
    {
        int count_flats_on_entrance = (int)data::count_flats_on_floor * (int)data::count_floors;
        std::uint32_t count_flats = count_flats_on_entrance * (int)data::count_entrance;

        if (n == 0 || n > count_flats)
        {
            std::cout << "Квартира не в этом доме\n";
        }
        else
        {
            std::cout << "Квартира находится:\n";
            int temp = (n - 1) / count_flats_on_entrance + 1;
            std::cout << "в подъезде: " << temp << '\n';
            temp = (n - count_flats_on_entrance * (temp - 1));
            std::cout << "на этаже: " << (temp - 1) / (int)data::count_flats_on_floor + 1 << '\n';
            temp = temp % (int)data::count_flats_on_floor;
            std::cout << "по счёту: " << (!temp ? (int)data::count_flats_on_floor : temp) << '\n';
        }
    }
}

void chapter03::solution15()
{
    enum class data
    {
        count_levels = 10,
        count_sections_on_level = 8,
        count_places_on_section = 15,
        count_places_on_level = count_sections_on_level * count_places_on_section,
        count_places_all = count_places_on_level * count_levels,
        count_places_on_section_v2 = count_levels * count_places_on_section
    };

    std::cout << "Введите номер места: ";
    std::uint32_t n;
    std::cin >> n;

    if (checkInput())
    {
        if (n == 0 || n > (std::uint32_t)data::count_places_all)
        {
            std::cout << "Не тот стеллаж\n";
        }
        else
        {
            std::cout << "Товар находится:\n";
            std::uint32_t temp1{ (n - 1) / (std::uint32_t)data::count_places_on_level + 1 };
            std::uint32_t temp2{ n % (std::uint32_t)data::count_places_on_level };
            std::uint32_t temp3{ !temp2 ? (std::uint32_t)data::count_places_on_level : temp2 };
            std::uint32_t temp4{ (temp3 - 1) / (std::uint32_t)data::count_places_on_section + 1 };
            std::string str = std::format("Секция {1} ярус {0}\n", temp1, temp4);
            std::cout << "1: " << str;

            temp1 = (n - 1) / (std::uint32_t)data::count_places_on_section_v2 + 1;
            temp2 = n % (std::uint32_t)data::count_levels;
            temp3 = !temp2 ? (std::uint32_t)data::count_levels : temp2;
            str = std::format("Секция {0} ярус {1}\n", temp1, temp3);
            std::cout << "2: " << str;
        }
    }
}

void chapter03::solution16()
{
    std::cout << "Введите двузначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 10 || n > 99)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::cout << "Десятков: " << n / 10 << "\nЕдиниц: " << n % 10 << '\n';
        }
    }
}

void chapter03::solution17()
{
    std::cout << "Введите двузначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 10 || n > 99)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::cout << "Сумма цифр: " << n / 10 + n % 10 << '\n';
        }
    }
}

void chapter03::solution18()
{
    std::cout << "Введите двузначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 10 || n > 99)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::cout << "Наоборот: " << n % 10 << n / 10 << '\n';
        }
    }
}

void chapter03::solution19()
{
    std::cout << "Введите трёхзначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n>999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::string str = std::format("{0}, {1}, {2}\n", n / 100, n / 10 % 10, n % 10);
            std::cout << "Результат: " << str;
        }
    }
}

void chapter03::solution20()
{
    std::cout << "Введите трёхзначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::string str = std::format(
                "Единиц: {0}\nДесятков: {1}\nСумма цифр: {2}\nПроизведение цифр: {3}\n"
                , n % 10
                , n / 10 % 10
                , n / 100 + n / 10 % 10 + n % 10
                , n / 100 * (n / 10 % 10) * (n % 10)
            );
            std::cout << "Результат:\n" << str;
        }
    }
}

void chapter03::solution21()
{
    std::cout << "Введите трёхзначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::string str = std::format("{2}{1}{0}\n", n / 100, n / 10 % 10, n % 10);
            std::cout << "Результат: " << str;
        }
    }
}

void chapter03::solution22()
{
    std::cout << "Введите трёхзначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::string str = std::format("{1}{2}{0}\n", n / 100, n / 10 % 10, n % 10);
            std::cout << "Результат: " << str;
        }
    }
}

void chapter03::solution23()
{
    std::cout << "Введите трёхзначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::string str = std::format("{2}{0}{1}\n", n / 100, n / 10 % 10, n % 10);
            std::cout << "Результат: " << str;
        }
    }
}

void chapter03::solution24()
{
    std::cout << "Введите трёхзначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::string str = std::format("{1}{0}{2}\n", n / 100, n / 10 % 10, n % 10);
            std::cout << "Результат: " << str;
        }
    }
}

void chapter03::solution25()
{
    std::cout << "Введите трёхзначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::string str = std::format("{0}{2}{1}\n", n / 100, n / 10 % 10, n % 10);
            std::cout << "Результат: " << str;
        }
    }
}

void chapter03::solution26()
{
    std::cout << "Введите трёхзначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "Некорректный ввод\n";
            return;
        }

        int n1 = n / 100;
        int n2 = n / 10 % 10;
        int n3 = n % 10;

        if (n1 == n2 || n2 == n3 || n3 == n1)
        {
            std::cout << "Некорректный ввод\n";
            return;
        }

        std::string str = std::format(
            "{0}{1}{2}\n{0}{2}{1}\n{1}{0}{2}\n{1}{2}{0}\n{2}{0}{1}\n{2}{1}{0}\n"
            , n1, n2, n3);
        std::cout << "Результат:\n" << str;
    }
}

void chapter03::solution27()
{
    std::cout << "Введите четырёхзначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 1000 || n > 9999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::cout << "Результат: " << sumNumbers(n) << '\n';
        }
    }

    std::cout << "Введите пятизначное число: ";
    std::cin >> n;

    if (checkInput())
    {
        if (n < 10000 || n > 99999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::cout << "Результат: " << sumNumbers(n) << '\n';
        }
    }
}

void chapter03::solution28()
{
    std::cout << "Введите четырёхзначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 1000 || n > 9999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::cout << "Результат:\nНаоборот: " << numReverse(n) << '\n';
            std::cout << "Перестановки:\n";
            std::string n_str = std::to_string(n);
            std::string n_str_result = std::format("{0}{1}{2}{3}", n_str[1], n_str[0], n_str[3], n_str[2]);
            std::cout << "1-2 и 3-4: " << std::stoi(n_str_result) << '\n';
            n_str_result = std::format("{0}{1}{2}{3}", n_str[0], n_str[2], n_str[1], n_str[3]);
            std::cout << "2-3: " << std::stoi(n_str_result) << '\n';
            n_str_result = std::format("{0}{1}{2}{3}", n_str[2], n_str[3], n_str[0], n_str[1]);
            std::cout << "12-34: " << std::stoi(n_str_result) << '\n';
            std::cout << "12-34: " << (n % 100) * 100 + n / 100 << '\n';
        }
    }
}

void chapter03::solution29()
{
    std::cout << "Введите натуральное число (n > 9): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n <= 9)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::string str = std::format("Единиц: {0}\nДесятков: {1}\n", n % 10, n / 10 % 10);
            std::cout << "Результат:\n" << str;
        }
    }
}

void chapter03::solution30()
{
    std::cout << "Введите натуральное число (n > 99): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n <= 99)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::string str = std::format("Десятков: {0}\nСотен: {1}\n", n / 10 % 10, n / 100 % 10);
            std::cout << "Результат:\n" << str;
        }
    }
}

void chapter03::solution31()
{
    std::cout << "Введите натуральное число (n > 999): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n <= 999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::string str = std::format("Сотен: {0}\nТысяч: {1}\n", n / 100 % 10, n / 1000 % 10);
            std::cout << "Результат:\n" << str;
        }
    }
}

void chapter03::solution32()
{
    std::cout << "Результат: x = " << 237 % 100 * 10 + 237 / 100 << '\n';
}

void chapter03::solution33()
{
    std::cout << "Введите трёхзначное число: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::cout << "Результат: n = " << n % 10 * 100 + n / 10 << '\n';
        }
    }
}

void chapter03::solution34()
{
    std::cout << "Результат: x = " << 564 / 10 % 100 + 564 % 10 * 100 << '\n';
}

void chapter03::solution35()
{
    std::cout << "Введите трёхзначное число (1 <= n <= 999): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 1 || n > 999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::cout << "Результат: n = " << n % 10 * 100 + n / 10 << '\n';
        }
    }
}

void chapter03::solution36()
{
    std::cout << "Результат: x = " << 546 / 100 * 10 + 546 / 10 % 10 * 100 + 6 << '\n';
}

void chapter03::solution37()
{
    std::cout << "Введите трёхзначное число (10 <= n <= 999): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 10 || n > 999 || n / 10 % 10 == 0)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::cout << "Результат: x = " << n / 100 * 10 + n / 10 % 10 * 100 + n % 10 << '\n';
        }
    }
}

void chapter03::solution38()
{
    std::cout << "Результат: x = " << 456 % 10 * 10 + 456 / 10 % 10 + 456 / 100 * 100 << '\n';
}

void chapter03::solution39()
{
    std::cout << "Введите трёхзначное число (100 <= n <= 999): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::cout << "Результат: x = " << n % 10 * 10 + n / 10 % 10 + n / 100 * 100 << '\n';
        }
    }
}

void chapter03::solution40()
{
    std::cout << "Результат: x = " << 654 / 100 + 654 % 10 * 100 + 654 / 10 % 10 * 10 << '\n';
}

void chapter03::solution41()
{
    std::cout << "Введите трёхзначное число (1 <= n <= 999): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 1 || n > 999 || n % 10 == 0)
        {
            std::cout << "Некорректный ввод\n";
        }
        else
        {
            std::cout << "Результат: x = " << n / 100 + n % 10 * 100 + n / 10 % 10 * 10 << '\n';
        }
    }
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

int chapter03::sumNumbers(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int chapter03::numReverse(int n)
{
    int n1 = 0;

    while (n > 0)
    {
        n1 *= 10;
        n1 += n % 10;
        n /= 10;
    }

    return n1;
}
