#include <iostream>
#include <conio.h>
#include "main.h"

#pragma warning(push)
#pragma warning(disable: 6031)

int main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "Hello, Хер с горы! здесь будет куча скучных задач...\nнахуяренных в консоли :)" << std::endl;
	std::cout << "Тебе придётся каким-то образом что-то выбирать и даже что-то вводить" << std::endl;
	std::cout << "Содержание:" << std::endl;
	std::cout << "Глава 1" << std::endl;
	std::cout << "Глава 2" << std::endl;
	std::cout << "Глава 3" << std::endl;
	std::cout << "Выбери главу: " << std::endl;
	char c = tolower(_getch());

	switch (c)
	{
	case '1':
		{
			chapter01::startFunction();
			break;
		}
	case '2':
		{
			chapter02::startFunction();
			break;
		}
	case '3':
		{
			chapter03::startFunction();
			break;
		}
	default:
		{
			std::cout << "Хуйню же ввёл, блин... :(" << std::endl;
		}
	}
	_getch();
	return 0;
}