#include <iostream>
#include <conio.h>
#include "main.h"

#pragma warning(push)
#pragma warning(disable: 6031)

int main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "Hello, Друг! здесь будет куча скучных задач...\nсделанных в консоли :)\n";
	std::cout << "Тебе придётся каким-то образом что-то выбирать и даже что-то вводить\n";
	char c = 0;

	while (c != 'z')
	{
		std::cout << "Содержание:\n";
		std::cout << "Глава 1\n";
		std::cout << "Глава 2\n";
		std::cout << "Глава 3\n";
		std::cout << "Для выхода жми чё-нибудь\n";
		std::cout << "Выбери главу: \n";
		c = tolower(_getch());

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
				return 0;
			}
		}

		_getch();
		system("cls");
	}
}