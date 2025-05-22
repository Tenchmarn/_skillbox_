#include <iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "RUS");

	int experience, level = 1;

	cout << "Введите число очков опыта: ";
	cin >> experience;

	cout << "-----Считаем-----";

	if (experience < 1000)
	{
		level = 2;
	}
	else if (experience < 2500)
	{
		level = 3;
	}
	else
	{
		level = 4;
	}

	cout << "\nВаш уровень: " << level;

	return 0;
}
