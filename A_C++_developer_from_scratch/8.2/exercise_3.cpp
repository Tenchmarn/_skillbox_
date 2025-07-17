#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int price;		// цена
	float weight;	// вес для покупки
	float result;	// результат
	int discount;	// скидка

	cout << "Введите цену за 100 грамм: ";
	cin >> price;

	cout << "Введите вес товара: ";
	cin >> weight;

	cout << "Введите скидку на товар: ";
	cin >> discount;

	result = (weight / 100) * price;

	if (discount > 0)
	{
		result = (result / 100) * discount;
		cout << "Цена покупки с учетом скидки: " << result << '\n';
	}
	else if (discount <= 0)
	{
		cout << "Цена покупки: " << result << '\n';
	}

	return 0;
}
