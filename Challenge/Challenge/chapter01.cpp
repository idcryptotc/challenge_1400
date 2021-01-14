#include <iostream>
#include <Windows.h>
#include "chapter01.h"

void chapter01::startFunction()
{
	while (true)
	{
		system("cls");
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
				switch (n)
				{
				case 1:
					{
						solution01();
						break;
					}
				case 2:
					{
						break;
					}
				case 3:
					{
						break;
					}
				case 4:
					{
						break;
					}
				case 5:
					{
						break;
					}
				case 6:
					{
						break;
					}
				case 7:
					{
						break;
					}
				case 8:
					{
						break;
					}
				case 9:
					{
						break;
					}
				case 10:
					{
						break;
					}
				case 11:
					{
						break;
					}
				case 12:
					{
						break;
					}
				case 13:
					{
						break;
					}
				case 14:
					{
						break;
					}
				case 15:
					{
						break;
					}
				case 16:
					{
						break;
					}
				case 17:
					{
						break;
					}
				}

				break;
			}
		}
		catch (...)
		{
			std::cout << "Чё? Мозг проебал?" << std::endl;
			Sleep(1000);
		}
	}
}

void chapter01::solution01()
{
}

void chapter01::solution02()
{
}

void chapter01::solution03()
{
}

void chapter01::solution04()
{
}

void chapter01::solution05()
{
}

void chapter01::solution06()
{
}

void chapter01::solution07()
{
}

void chapter01::solution08()
{
}

void chapter01::solution09()
{
}

void chapter01::solution10()
{
}

void chapter01::solution11()
{
}

void chapter01::solution12()
{
}

void chapter01::solution13()
{
}

void chapter01::solution14()
{
}

void chapter01::solution15()
{
}

void chapter01::solution16()
{
}

void chapter01::solution17()
{
}
