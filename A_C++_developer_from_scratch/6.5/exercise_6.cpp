#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int contribution;			// вклад
	int percent;				// процентная ставка
	int desired_amount;			// желаемая сумма
	int year_count = 0;			// счетчик лет

	cout << "Введите размер вклада: ";
	cin >> contribution;

	cout << "Введите процентную ставку: ";
	cin >> percent;

	cout << "Введите желаемую сумму: ";
	cin >> desired_amount;

	while (contribution < desired_amount)
	{
		int interest = (contribution * percent) / 100;
		contribution += interest;

		year_count++;
	}

	cout << "Придётся подождать: " << year_count << " лет\n";

	return 0;
}