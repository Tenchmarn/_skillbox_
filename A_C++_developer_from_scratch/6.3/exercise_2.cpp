#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int i = 1, a, count = 1;

	cout << "Введите площадь: ";
	cin >> a; // 49

	while (count < a)
	{
		count = i * i;
		i++;
	}

	if (count == a)
	{
		cout << "Скидка есть! Точный квадрат.";
	}
	else
	{
		cout << "Скидки нет. Квадрат не точный!";
	}

	return 0;
}