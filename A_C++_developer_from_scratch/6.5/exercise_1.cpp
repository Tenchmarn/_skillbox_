#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	SetConsoleCP(1251);			// функция задает входную кодовую страницу
	SetConsoleOutputCP(1251);	// Задает выходную кодовую страницу, используемую консолью, связанной с вызывающим процессом


	string answer = "Ку-КУ!\n";
	int hour;


	cout << "Введите, который час: ";
	cin >> hour;

	if (hour <= 0 || hour > 24)
	{
		cout << "Ошибка, таких часов не существует!";
		return 0;
	}

	while (hour > 0)
	{
		cout << answer;
		hour--;
	}

	cout << '\n';


	return 0;
}