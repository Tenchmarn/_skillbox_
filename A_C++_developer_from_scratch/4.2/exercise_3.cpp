#include <iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Программа высчитывает модуль числа.\n";

	int x;

	cout << "Введите число: ";
	cin >> x;

	if (x >=0)
	{
		cout << "Модуль числа " << x << " равен " << x;
	}
	if (x < 0)
	{
		x = -x;
		cout << "Модуль числа -" << x << " равен " << x;
	}
	
	return 0;
}