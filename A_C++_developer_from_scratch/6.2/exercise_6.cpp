#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number;

	cout << "Введите число: ";
	cin >> number;

	int sum = 0;

	while (number != 0) {

		sum += number % 10;

		number /= 10;

	}

	cout << "Сумма цифр равна:" << sum;

	return 0;
}
