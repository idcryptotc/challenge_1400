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
        std::cout << "����� 3. ������������� ����������\n";
        std::cout << "����� ����� �� 1 �� 51\n";
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
