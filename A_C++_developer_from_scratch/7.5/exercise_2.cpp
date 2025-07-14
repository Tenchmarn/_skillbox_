#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int choice;						// выбор
	int water;						// вода
	int milk;						// молоко
	int count_americano = 0;		// счетчик_1
	int count_latte = 0;			// счетчик_2

	cout << "Введите количество воды в мл: ";
	cin >> water;

	cout << "Введите количество молока в мл: ";
	cin >> milk;

	do {
		cout << "\nВыберите напиток (1 - американо, 2 - латте): ";
		cin >> choice;

		int count = 0;

		if (choice == 1)
		{
			if (water >= 300)
			{
				cout << "\n\tВаш напиток готов!\n\n";
				water -= 300;
				count_americano++;
			}
			else
			{
				cout << "\n\tНе хватает воды!\n";
			}
		}
		else if (choice == 2)
		{
			if (water >= 30)
			{
				if (milk >= 270)
				{
					cout << "\n\tВаш напиток готов!\n\n";
					water -= 30;
					milk -= 270;
					count_latte++;
				}
				else
				{
					cout << "\n\tНе хватает молока!\n";
				}
			}
			else
			{
				cout << "\n\tНе хватает воды!\n";
			}
		}
		else
		{
			cout << "\n\tОшибка чтения символа!\n";
		}

	} while (water >= 300 || ((water >= 30) && (milk >= 270)));

	cout << "\n***Отчет***\n";
	cout << "Ингридиентов осталось: ";
	cout << "\n\tВода: " << water;
	cout << "\n\tМолоко:" << milk;
	cout << "\nКружек американо приготовлено: " << count_americano;
	cout << "\nКружек латте приготовлено: " << count_latte;
	cout << endl;

	return 0;
}
