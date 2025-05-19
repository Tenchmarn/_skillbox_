#include <iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "RUS");

	int people_man, people_barber;

	cout << "Сколько мужчин проживает в городе?: ";
	cin >> people_man; // 9000

	cout << "Сколько всего барберов работают в барбешопах?: ";
	cin >> people_barber;


	if (people_barber * 8 * 30 >= people_man)
	{
		cout << "Барберов хватает!";
	}
	if (people_barber * 8 * 30 < people_man)
	{
		cout << "Барберов не хватает!";
	}

	return 0;
}