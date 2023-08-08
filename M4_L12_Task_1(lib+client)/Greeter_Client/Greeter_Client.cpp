#include "Greeter.h"
#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	SetConsoleOutputCP(1251); // Устанавливаем кодировку консоли на UTF-8
	SetConsoleCP(1251); // Устанавливаем кодировку для ввода с консоли на UTF-8

	Greeter greeter;
	string name;

	cout << "Введите имя: ";
	getline(cin, name); // Используем getline для считывания строки

	string hello = greeter.greet(name);
	cout << hello;

	return 0;
}