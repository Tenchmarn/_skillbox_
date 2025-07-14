#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int stock = 100; 
	int month = 1;

	cout << "\nВсего гречки было на начало подсчёта: " << stock << " кг\n";

	for (month; stock >= 0; month++)
	{
		stock = stock - 4;

		cout << "После " << month
			<< " месяца у вас в запасе останется "
			<< stock << " кг гречки\n";
		if (stock <= 0)
		{
			cout << "\n\tПосле " << month
				<< " месяца гречка закончится\n";
			break;
		}
	}

	return 0;
}
