#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "----------Меню ресторана----------";

	int day_menu_number = 0;
	string menu_1 = "\nГороховый суп\nСалат \'Цезарь\' с креветками\nКуриная ножка с пюре\nМорс";
	string menu_special_1 = "\nСуп щи\nКартофельное пюре\nСалат овощной\nГренки\nКомпот\nМороженое";
	string menu_special_2 = "\nБульон\nШарлотка\nЗапеканка картофельная\nСтейк из акулятины\nСтейк из баранины\nКомпот домашний\nВафли\nМороженое";

	cout << "\nВведите день недели (от 1 до 7): ";
	cin >> day_menu_number;

	if (day_menu_number == 1)
	{
		cout << "Меню на сегодня (Понедельник):";
		cout << menu_1;
	}
	else if (day_menu_number == 2)
	{
		cout << "Меню на сегодня (Вторник):";
		cout << menu_special_2;
	}
	else if (day_menu_number == 3)
	{
		cout << "Меню на сегодня (Среда):";
		cout << menu_1;
	}
	else if (day_menu_number == 4)
	{
		cout << "Меню на сегодня (Четверг):";
		cout << menu_1;
	}
	else if (day_menu_number == 5)
	{
		cout << "Меню на сегодня (Пятника):";
		cout << menu_special_1;
	}
	else if (day_menu_number == 6)
	{
		cout << "Меню на сегодня (Суббота):";
		cout << menu_special_1;
	}
	else if (day_menu_number == 7)
	{
		cout << "Меню на сегодня (Воскресенье):";
		cout << menu_special_2;
	}
	else
	{
		cout << "\nОшибка дня! Перезапустите программу";
	}

	cout << '\n';

	return 0;
}