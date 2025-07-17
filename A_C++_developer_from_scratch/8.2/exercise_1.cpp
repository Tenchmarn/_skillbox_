#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int price;		// цена
	float weight;	// вес для покупки
	float result;	// результат

	cout << "Введите цену за 100 грамм: ";
	cin >> price;

	cout << "Введите вес товара: ";
	cin >> weight;

	result = (weight / 100) * price;

	cout << "Цена покупки: " << result << '\n';

	return 0;
}
