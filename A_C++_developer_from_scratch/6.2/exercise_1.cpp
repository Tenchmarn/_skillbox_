#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	SetConsoleCP(1251);			// функция задает входную кодовую страницу
	SetConsoleOutputCP(1251);	// Задает выходную кодовую страницу, используемую консолью, связанной с вызывающим процессом

	string answer = "";

	while (answer != "Да, конечно, сделал")
	{
		cout << "Вы выполнили задание?\n";
		getline(std::cin, answer);
	}

	return 0;
}