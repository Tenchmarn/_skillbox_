#include <iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number_1, number_2, amount, check;

	cout << "Введите первое число: ";
	cin >> number_1;

	cout << "Введите второе число: ";
	cin >> number_2;

	amount = number_1 + number_2;

	cout << "Введите сумму: ";
	cin >> check;

	cout << "-----Проверяем-----";

	if (amount == check)
	{
		cout << "\nВерно!";
	}
	else
	{
		cout << "\nОшибка! Верный результат: " << amount;
	}

	return 0;
}