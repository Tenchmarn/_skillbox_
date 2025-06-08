#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number;

	cout << "Введите число: ";
	cin >> number;

	int count_1 = (number) ? 0 : 1;

	while (number)
	{
		number /= 10;
		count_1++;
	}

	cout << "Цифр в числе: " << count_1;

	return 0;
}