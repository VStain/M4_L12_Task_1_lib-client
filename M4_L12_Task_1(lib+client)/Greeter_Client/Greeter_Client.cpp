#include "Greeter.h"
#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	SetConsoleOutputCP(1251); // ������������� ��������� ������� �� UTF-8
	SetConsoleCP(1251); // ������������� ��������� ��� ����� � ������� �� UTF-8

	Greeter greeter;
	string name;

	cout << "������� ���: ";
	getline(cin, name); // ���������� getline ��� ���������� ������

	string hello = greeter.greet(name);
	cout << hello;

	return 0;
}