#include <iostream>

using namespace  std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int count, reversed_number = 0;
	int remainder;

	cout << "Введите целое число: ";
	cin >> count;

	while (count != 0)
	{
		remainder = count % 10;
		reversed_number = reversed_number * 10 + remainder;
		count /= 10;
	}

	cout << "Обратное число: " << reversed_number << endl;

	return 0;
}