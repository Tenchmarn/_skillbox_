#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int count = 1, number, count_rezul = 1;

	cout << "Введите площадь: ";
	cin >> number;

	if (number < 0)
	{
		cout << "Ввод неправильный!\n";
		return 0;
	}

	for (count, count_rezul; count_rezul < number; count++)
		count_rezul = count * count;

	if (count_rezul == number) cout << "Скидка есть! Точный квадрат.\n";
	else cout << "Скидки нет. Квадрат не точный!\n";

	return 0;
}