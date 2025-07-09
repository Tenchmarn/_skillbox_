#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int stock = 100; 
	int month; 
	int count_month;

	cout << "Введите месяц: ";
	cin >> month;
	cout << '\n';

	for (count_month = 1; count_month <= month; count_month++)
	{
		stock = stock - 4;

		cout << "После " << count_month
			<< " месяца у вас в запасе останется "
			<< stock << " кг гречки\n";
		if (stock <= 0)
		{
			cout << "\n\tПосле " << count_month
				<< " месяца гречка закончится\n";
			break;
		}
		else if (stock > 0 && count_month == month)
		{
			cout << "\n\tПосле " << count_month
				<< " месяца гречка останется\n";
		}
	}

	return 0;
}