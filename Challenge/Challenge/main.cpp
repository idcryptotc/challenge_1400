#include <iostream>
#include <conio.h>
#include "main.h"

int main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "Hello, ��� � ����! ����� ����� ���� ������� �����...\n����������� � ������� :)" << std::endl;
	std::cout << "���� ������� �����-�� ������� ���-�� �������� � ���� ���-�� �������" << std::endl;
	std::cout << "����������:" << std::endl;
	std::cout << "����� 1" << std::endl;
	std::cout << "������ �����: " << std::endl;
	char c = tolower(_getch());

	switch (c)
	{
	case '1':
		{
			chapter01::startFunction();
			break;
		}
	default:
		{
			std::cout << "����� �� ���, ����... :(" << std::endl;
		}
	}
	_getch();
	return 0;
}