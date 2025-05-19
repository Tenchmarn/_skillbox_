#include <iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "\n\tВы покупаете 3 товара в магазине.\n";
	cout << "\n\tЕсли сумма вашего чека превышает 10 000 руб, \n\tвам будет сделана скидка 10%\n\n";

	int product_1, product_2, product_3, discount = 10, amount = 0;

	cout << "Введите стоимость товара 1: ";
	cin >> product_1;
	amount += product_1;

	cout << "Введите стоимость товара 2: ";
	cin >> product_2;
	amount += product_2;

	cout << "Введите стоимость товара 3: ";
	cin >> product_3;
	amount += product_3;

	

	if (amount >= 10000)
	{
		cout << "\n\tВам сделана скидка!\n";
		amount = amount - ((amount / 100) * discount);
	}
	
	cout << "\n\tСумма вашего чека: " << amount << '\n';


	return 0;
}