#include <iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number_1, number_2, remains = 0;

	cout << "Введите первое число: ";
	cin >> number_1;

	cout << "Введите второе число: ";
	cin >> number_2;

	cout << "-----Проверяем-----\n";

	if (number_1 % number_2 == 0)
	{
		cout << "Да, " << number_1 << " делится на " << number_2 << " без остатка!";
	}
	else
	{
		cout << "Нет, " << number_1 << " не делится на " << number_2 << " без остатка!";
	}

	cout << '\n';

	return 0;
}