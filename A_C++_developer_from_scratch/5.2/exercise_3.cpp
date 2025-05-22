#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int year, days;
	string type_year;

	cout << "Введите год: "; cin >> year;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				type_year = " - высокосный";
				days = 366;
			}
			else
			{
				days = 365;
				type_year = " - невысокосный";
			}
		}
		else
		{
			type_year = " - высокосный";
			days = 366;
		}
	}
	else
	{
		days = 365;
		type_year = " - невысокосный";
	}

	cout << "Год" << type_year << " и в нем: " << days << " дней.";

	cout << '\n';
	return 0;
}