#include <iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "RUS");

	int a, square;

	cout << "Введите число: ";
	cin >> a;

	square = a * a;

	cout << "Квадрат числа " << a << ": " << square;

	return 0;
}