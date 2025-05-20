#include <iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "RUS");

	int x_1, x_2;

	cout << "Введите первое число: ";
	cin >> x_1;


	cout << "Введите второе число: ";
	cin >> x_2;

	cout << "-----Проверяем-----";

	if (x_1 < x_2)
	{
		cout << "\nНаименьшее число: " << x_1;
	}
	else if (x_1 == x_2)
	{
		cout << "\nЧисла равны!";
	}
	else
	{
		cout << "\nНаименьшее число: " << x_2;
	}

	cout << '\n';
	return 0;
}