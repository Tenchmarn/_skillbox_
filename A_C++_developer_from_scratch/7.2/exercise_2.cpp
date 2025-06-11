#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number;
	int sum = 0;

	cout << "Введите число: ";
	cin >> number;

	for (number; number != 0; number /= 10)
	{

		sum += number % 10;

	}

	cout << "Сумма цифр равна: " << sum << '\n';

	return 0;
}
