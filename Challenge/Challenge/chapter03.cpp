#include "chapter03.h"
#include "checker.h"

#pragma warning(push)
#pragma warning(disable: 6031)

void chapter03::startFunction()
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
        solution51
    };

    static const std::size_t solutions_size = solutions.size() - 1;

    while (true)
    {
        system("cls");
        std::cout << "����� 3. ������������� ����������\n";
        std::cout << "����� ����� �� 1 �� " << solutions_size << '\n';
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
                std::cout << "�� ���, ������?\n";
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
            std::cout << "׸? ׸-�� �� ��...\n";
            Sleep(1000);
        }
        _getch();
    }
}

void chapter03::solution01()
{
    std::cout << "������� ���������� � �����������: ";
    int s;
    std::cin >> s;

    if (checkInput())
    {
        std::cout << "���������� � ������: " << s / 100 << '\n';
    }
}

void chapter03::solution02()
{
    std::cout << "������� ����� � �����������: ";
    int m;
    std::cin >> m;

    if (checkInput())
    {
        std::cout << "����� ������ ���������: " << m / 100 << '\n';
    }
}

void chapter03::solution03()
{
    std::cout << "234 ��� - ��� " << 234 / 7 << " ������ ������\n";
}

void chapter03::solution04()
{
    std::cout << "������� ���������� ����������: ";
    unsigned int n = 0u;
    std::cin >> n;

    if (!checkInput())
    {
        return;
    }

    std::cout << "������� ���������� �����: ";
    unsigned int k = 0u;
    std::cin >> k;

    if (!checkInput())
    {
        return;
    }

    std::cout << "������ �������� ������� �����: " << k / n << '\n';
    std::cout << "� �������� ��������� �����: " << k % n << '\n';
}

void chapter03::solution05()
{
    std::cout
        << "������������� 543�130 ����� ���������\n�� "
        << 543 / 130
        << " ��������� �� �������� 130\n";
}

void chapter03::solution06()
{
    const int COUNT_COUPE = 9;
    const int COUNT_PLACE = 4;
    std::cout << "������� ����� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n <= COUNT_COUPE * COUNT_PLACE)
        {
            std::cout << "���� ���� �" << n / COUNT_PLACE + 1 << '\n';
        }
        else
        {
            std::cout << "���� ����� � ������ ������\n";
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

    std::cout << "������� ����� ��������: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n <= (int)data::count_flat)
        {

            int floor = (n + (int)data::count_flat_on_floor - 1) / (int)data::count_flat_on_floor;
            std::cout << "��� ����: " << floor << '\n';
        }
        else
        {
            std::cout << "���� �������� �� � ���� ��������\n";
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
    std::cout << "������� �������� �����: " << serial;
    unsigned int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < (int)data::start_number)
        {
            std::cout << "��� ����� ���������\n";
        }
        else if (n >= (int)data::start_number + (int)data::count_rows * (int)data::count_places)
        {
            std::cout << "������ �� ��� �����\n";
        }
        else
        {
            std::cout
                << "��� ���: "
                << (n - (int)data::start_number + (int)data::count_places) / (int)data::count_places
                << '\n';
        }
    }
}

void chapter03::solution09()
{
    std::cout << "������� ���������� ������: ";
    std::uint32_t n;
    std::cin >> n;

    if (checkInput())
    {
        n %= 24 * 60 * 60;
        std::string time = std::format("{0:02} : {1:02} : {2:02}", n / 3600, n / 60 % 60, n % 60);
        std::cout << "�����: " << time << '\n';
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
        { days::sunday, "�����������" },
        { days::monday, "�����������" },
        { days::tuesday, "�������" },
        { days::wednesday, "�����" },
        { days::thursday, "�������" },
        { days::friday, "�������" },
        { days::saturday, "�������" }
    };

    std::cout << "������� ����� ����� (1 <= k <= 365): ";
    std::uint32_t k;
    std::cin >> k;

    if (!checkInput())
    {
        return;
    }

    std::cout << "������� ���� ������ ���� (1..7): ";
    std::uint32_t d;
    std::cin >> d;

    if (!checkInput())
    {
        return;
    }

    if (d > 7 || d < 1)
    {
        std::cout << "����� �� ������������� ������������ ���������\n";
    }
    else
    {
        std::cout << "������ ����: " << daysDict.at((days)((k + d % 7 - 1) % 7)) << '\n';
    }
}

void chapter03::solution11()
{
    int start_year = 1990;
    std::cout << "������� ���������� �������: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        int x = (1 + n) % 12;
        std::cout << "�������� �����: " << (!x ? 12 : x) << '\n';
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

    std::cout << "������� ����� ��������: ";
    std::uint32_t n;
    std::cin >> n;

    if (checkInput())
    {
        int num = n % (int)data::count_flats_on_floor;
        std::cout
            << "�������� ��������� �� "
            << (n + (int)data::count_flats_on_floor - 1) / (int)data::count_floors + 1
            << " �����\n� �������� "
            << (!num ? (int)data::count_flats_on_floor : num)
            << " �� �����\n";
    }
}

void chapter03::solution13()
{
    enum class data : int
    {
        count_rows = 10,
        count_columns = 5
    };

    std::cout << "������� ����� ������: ";
    std::uint32_t n;
    std::cin >> n;

    if (checkInput())
    {
        if (n > (int)data::count_rows * (int)data::count_columns || n == 0)
        {
            std::cout << "��������� � ������� �� �������������\n";
        }
        else
        {
            int str_num = (n + (int)data::count_columns - 1) / (int)data::count_columns;
            std::cout << "������ ��������� � ������: " << str_num << '\n';
            std::cout << "����� ��������� ������ ��������� � ������: "
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

    std::cout << "������� ����� ��������: ";
    std::uint32_t n;
    std::cin >> n;

    if (checkInput())
    {
        int count_flats_on_entrance = (int)data::count_flats_on_floor * (int)data::count_floors;
        std::uint32_t count_flats = count_flats_on_entrance * (int)data::count_entrance;

        if (n == 0 || n > count_flats)
        {
            std::cout << "�������� �� � ���� ����\n";
        }
        else
        {
            std::cout << "�������� ���������:\n";
            int temp = (n - 1) / count_flats_on_entrance + 1;
            std::cout << "� ��������: " << temp << '\n';
            temp = (n - count_flats_on_entrance * (temp - 1));
            std::cout << "�� �����: " << (temp - 1) / (int)data::count_flats_on_floor + 1 << '\n';
            temp = temp % (int)data::count_flats_on_floor;
            std::cout << "�� �����: " << (!temp ? (int)data::count_flats_on_floor : temp) << '\n';
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

    std::cout << "������� ����� �����: ";
    std::uint32_t n;
    std::cin >> n;

    if (checkInput())
    {
        if (n == 0 || n > (std::uint32_t)data::count_places_all)
        {
            std::cout << "�� ��� �������\n";
        }
        else
        {
            std::cout << "����� ���������:\n";
            std::uint32_t temp1{ (n - 1) / (std::uint32_t)data::count_places_on_level + 1 };
            std::uint32_t temp2{ n % (std::uint32_t)data::count_places_on_level };
            std::uint32_t temp3{ !temp2 ? (std::uint32_t)data::count_places_on_level : temp2 };
            std::uint32_t temp4{ (temp3 - 1) / (std::uint32_t)data::count_places_on_section + 1 };
            std::string str = std::format("������ {1} ���� {0}\n", temp1, temp4);
            std::cout << "1: " << str;

            temp1 = (n - 1) / (std::uint32_t)data::count_places_on_section_v2 + 1;
            temp2 = n % (std::uint32_t)data::count_levels;
            temp3 = !temp2 ? (std::uint32_t)data::count_levels : temp2;
            str = std::format("������ {0} ���� {1}\n", temp1, temp3);
            std::cout << "2: " << str;
        }
    }
}

void chapter03::solution16()
{
    std::cout << "������� ���������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 10 || n > 99)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::cout << "��������: " << n / 10 << "\n������: " << n % 10 << '\n';
        }
    }
}

void chapter03::solution17()
{
    std::cout << "������� ���������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 10 || n > 99)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::cout << "����� ����: " << n / 10 + n % 10 << '\n';
        }
    }
}

void chapter03::solution18()
{
    std::cout << "������� ���������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 10 || n > 99)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::cout << "��������: " << n % 10 << n / 10 << '\n';
        }
    }
}

void chapter03::solution19()
{
    std::cout << "������� ���������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n>999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::string str = std::format("{0}, {1}, {2}\n", n / 100, n / 10 % 10, n % 10);
            std::cout << "���������: " << str;
        }
    }
}

void chapter03::solution20()
{
    std::cout << "������� ���������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::string str = std::format(
                "������: {0}\n��������: {1}\n����� ����: {2}\n������������ ����: {3}\n"
                , n % 10
                , n / 10 % 10
                , n / 100 + n / 10 % 10 + n % 10
                , n / 100 * (n / 10 % 10) * (n % 10)
            );
            std::cout << "���������:\n" << str;
        }
    }
}

void chapter03::solution21()
{
    std::cout << "������� ���������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::string str = std::format("{2}{1}{0}\n", n / 100, n / 10 % 10, n % 10);
            std::cout << "���������: " << str;
        }
    }
}

void chapter03::solution22()
{
    std::cout << "������� ���������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::string str = std::format("{1}{2}{0}\n", n / 100, n / 10 % 10, n % 10);
            std::cout << "���������: " << str;
        }
    }
}

void chapter03::solution23()
{
    std::cout << "������� ���������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::string str = std::format("{2}{0}{1}\n", n / 100, n / 10 % 10, n % 10);
            std::cout << "���������: " << str;
        }
    }
}

void chapter03::solution24()
{
    std::cout << "������� ���������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::string str = std::format("{1}{0}{2}\n", n / 100, n / 10 % 10, n % 10);
            std::cout << "���������: " << str;
        }
    }
}

void chapter03::solution25()
{
    std::cout << "������� ���������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::string str = std::format("{0}{2}{1}\n", n / 100, n / 10 % 10, n % 10);
            std::cout << "���������: " << str;
        }
    }
}

void chapter03::solution26()
{
    std::cout << "������� ���������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "������������ ����\n";
            return;
        }

        int n1 = n / 100;
        int n2 = n / 10 % 10;
        int n3 = n % 10;

        if (n1 == n2 || n2 == n3 || n3 == n1)
        {
            std::cout << "������������ ����\n";
            return;
        }

        std::string str = std::format(
            "{0}{1}{2}\n{0}{2}{1}\n{1}{0}{2}\n{1}{2}{0}\n{2}{0}{1}\n{2}{1}{0}\n"
            , n1, n2, n3);
        std::cout << "���������:\n" << str;
    }
}

void chapter03::solution27()
{
    std::cout << "������� ������������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 1000 || n > 9999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::cout << "���������: " << sumNumbers(n) << '\n';
        }
    }

    std::cout << "������� ����������� �����: ";
    std::cin >> n;

    if (checkInput())
    {
        if (n < 10000 || n > 99999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::cout << "���������: " << sumNumbers(n) << '\n';
        }
    }
}

void chapter03::solution28()
{
    std::cout << "������� ������������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 1000 || n > 9999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::cout << "���������:\n��������: " << numReverse(n) << '\n';
            std::cout << "������������:\n";
            std::string n_str = std::to_string(n);
            std::string n_str_result = std::format("{0}{1}{2}{3}", n_str[1], n_str[0], n_str[3], n_str[2]);
            std::cout << "1-2 � 3-4: " << std::stoi(n_str_result) << '\n';
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
    std::cout << "������� ����������� ����� (n > 9): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n <= 9)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::string str = std::format("������: {0}\n��������: {1}\n", n % 10, n / 10 % 10);
            std::cout << "���������:\n" << str;
        }
    }
}

void chapter03::solution30()
{
    std::cout << "������� ����������� ����� (n > 99): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n <= 99)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::string str = std::format("��������: {0}\n�����: {1}\n", n / 10 % 10, n / 100 % 10);
            std::cout << "���������:\n" << str;
        }
    }
}

void chapter03::solution31()
{
    std::cout << "������� ����������� ����� (n > 999): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n <= 999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::string str = std::format("�����: {0}\n�����: {1}\n", n / 100 % 10, n / 1000 % 10);
            std::cout << "���������:\n" << str;
        }
    }
}

void chapter03::solution32()
{
    std::cout << "���������: x = " << 237 % 100 * 10 + 237 / 100 << '\n';
}

void chapter03::solution33()
{
    std::cout << "������� ���������� �����: ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::cout << "���������: n = " << n % 10 * 100 + n / 10 << '\n';
        }
    }
}

void chapter03::solution34()
{
    std::cout << "���������: x = " << 564 / 10 % 100 + 564 % 10 * 100 << '\n';
}

void chapter03::solution35()
{
    std::cout << "������� ���������� ����� (1 <= n <= 999): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 1 || n > 999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::cout << "���������: n = " << n % 10 * 100 + n / 10 << '\n';
        }
    }
}

void chapter03::solution36()
{
    std::cout << "���������: x = " << 546 / 100 * 10 + 546 / 10 % 10 * 100 + 6 << '\n';
}

void chapter03::solution37()
{
    std::cout << "������� ���������� ����� (10 <= n <= 999): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 10 || n > 999 || n / 10 % 10 == 0)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::cout << "���������: x = " << n / 100 * 10 + n / 10 % 10 * 100 + n % 10 << '\n';
        }
    }
}

void chapter03::solution38()
{
    std::cout << "���������: x = " << 456 % 10 * 10 + 456 / 10 % 10 + 456 / 100 * 100 << '\n';
}

void chapter03::solution39()
{
    std::cout << "������� ���������� ����� (100 <= n <= 999): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 100 || n > 999)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::cout << "���������: x = " << n % 10 * 10 + n / 10 % 10 + n / 100 * 100 << '\n';
        }
    }
}

void chapter03::solution40()
{
    std::cout << "���������: x = " << 654 / 100 + 654 % 10 * 100 + 654 / 10 % 10 * 10 << '\n';
}

void chapter03::solution41()
{
    std::cout << "������� ���������� ����� (1 <= n <= 999): ";
    int n;
    std::cin >> n;

    if (checkInput())
    {
        if (n < 1 || n > 999 || n % 10 == 0)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::cout << "���������: x = " << n / 100 + n % 10 * 100 + n / 10 % 10 * 10 << '\n';
        }
    }
}

void chapter03::solution42()
{
    std::cout << "������� a2, a1, b: ";
    int a2, a1, b;
    std::cin >> a2 >> a1 >> b;

    if (checkInput())
    {
        int c2 = a2 + (a1 + b) / 10;
        int c1 = (a1 + b) % 10;

        if (c2 / 10 > 0)
        {
            std::cout << "���-�� �� ��...\n";
        }
        else
        {
            std::cout << "���������: " << c2 << " � " << c1 << '\n';
        }
    }
}

void chapter03::solution43()
{
    std::cout << "������� a2, a1, b2, b1: ";
    int a2, a1, b2, b1;
    std::cin >> a2 >> a1 >> b2 >> b1;

    if (checkInput())
    {
        int c2 = a2 + b2 + (a1 + b1) / 10;
        int c1 = (a1 + b1) % 10;

        if (c2 / 10 > 0)
        {
            std::cout << "���-�� �� ��...\n";
        }
        else
        {
            std::cout << "���������: " << c2 << " � " << c1 << '\n';
        }
    }
}

void chapter03::solution44()
{
    std::cout << "������� a3, a2, a1, b2, b1: ";
    int a3, a2, a1, b2, b1;
    std::cin >> a3 >> a2 >> a1 >> b2 >> b1;

    if (checkInput())
    {
        int c2 = a2 + b2 + (a1 + b1) / 10;
        int c3 = a3 + c2 / 10;
        c2 %= 10;
        int c1 = (a1 + b1) % 10;

        if (c2 / 10 > 0)
        {
            std::cout << "���-�� �� ��...\n";
        }
        else
        {
            std::cout << "���������: " << c3 << ", " << c2 << " � " << c1 << '\n';
        }
    }
}

void chapter03::solution45()
{
    std::cout << "������� ����� (1 <= k <= 180): ";
    std::uint32_t k;
    std::cin >> k;

    if (checkInput())
    {
        if (k < 1 || k > 180)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::uint32_t temp{ (k + 1) / 2 + 9 };
            std::cout << "���������:\n"
                << "����� ����: " << temp - 9 << '\n'
                << "����� ����: " << temp / 10 << " � " << temp % 10 << '\n'
                << "k-� �����: " << (k % 2 ? temp / 10 : temp % 10) << '\n';
        }
    }
}

void chapter03::solution46()
{
    std::cout << "������� ����� (1 <= k <= 150): ";
    std::uint32_t k;
    std::cin >> k;

    if (checkInput())
    {
        if (k < 1 || k > 150)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::uint32_t temp{ (k + 2) / 3 + 100 };
            std::cout << "���������:\n"
                << "������ ���: " << temp % 10 << '\n'
                << "1, 4, 7, ...: " << temp / 100 << '\n'
                << "2, 5, 8, ...: " << temp / 10 % 10 << '\n';
        }
    }
}

void chapter03::solution47()
{
    std::cout << "������� h, m, s: ";
    std::uint32_t h{}, m{}, s{};
    std::cin >> h >> m >> s;

    if (checkInput())
    {
        if (h > 23 || m > 59 || s > 59)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::cout << "����: " << 30. * (h % 12) + m / 2. + s / 120. << " ��������\n";
        }
    }
}

void chapter03::solution48()
{
    std::cout << "������� ���� (0 <= y < 360): ";
    std::uint32_t y{};
    std::cin >> y;

    if (checkInput())
    {
        if (y >= 360)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::string time = std::format("{0:02}:{1:02}\n", y / 30, y % 30 * 2);
            std::cout << "�����: " << time;
        }
    }
}

void chapter03::solution49()
{
    std::cout << "������� ���� (0 < y <= 360): ";
    std::uint32_t y{};
    std::cin >> y;

    if (checkInput())
    {
        if (y > 360 || y < 1)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::uint32_t h{ y / 30 };
            std::uint32_t m{ y % 30 * 2 };
            std::string time = std::format("{0:02}:{1:02}\n", h, m);
            std::cout << "���� �������� �������: " << m * 6 << '\n';
            std::cout << "�����: " << time;
        }
    }
}

// ������� �������� ����� "����������" ����
// ���-�� ��� ����������� ����, ���-�� ��������� ������, ���-�� �����������
void chapter03::solution50()
{
    std::cout << "������� h, m: ";
    std::uint32_t h{}, m{};
    std::cin >> h >> m;

    if (checkInput())
    {
        if (h > 12 || h == 0 || m > 59)
        {
            std::cout << "������������ ����\n";
        }
        else
        {
            std::uint32_t delta{ 0 };
            int h1{ (int)h }, m1{ (int)m };
            int h_angle{ (30 * h1 + m1 / 2) % 360 };
            int m_angle{ (m1 * 6) % 360 };

            while (std::abs(h_angle - m_angle) > 3)
            {
                ++delta;
                ++m1;
                h1 = (h1 + m1 / 60) % 12;
                m1 %= 60;
                h_angle = (30 * h1 + m1 / 2) % 360;
                m_angle = (m1 * 6) % 360;
            }

            std::cout << "������� �������� ����� " << delta << " �����\n";
            delta = 0;
            h1 = h;
            m1 = m;

            while (!(std::abs(h_angle - m_angle) % 180 < 94 && std::abs(h_angle - m_angle) % 180 > 86))
            {
                ++delta;
                ++m1;
                h1 = (h1 + m1 / 60) % 12;
                m1 %= 60;
                h_angle = (30 * h1 + m1 / 2) % 360;
                m_angle = (m1 * 6) % 360;
            }

            std::cout << "������� ����� ��������������� ����� " << delta << " �����\n";
        }
    }
}

void chapter03::solution51()
{
    std::cout << "������� a � b: ";
    int a, b;
    std::cin >> a >> b;

    if (checkInput())
    {
        int results[] = { a + b, 1 };
        std::cout << "���������: " << results[a >= b && a % b == 0 || b > a && b % a == 0] << '\n';
    }
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
