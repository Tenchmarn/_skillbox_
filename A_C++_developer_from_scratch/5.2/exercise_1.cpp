#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
	setlocale(LC_ALL, "RUS");

	int x, y;
	string quarter;

	cout << "Введите координату Х: ";
	cin >> x;

	cout << "Введите координату У: ";
	cin >> y; 

	if ((x == 0) || (y == 0))
	{
		if (x == 0 && y > 0)
		{
			quarter = "граница 1 и 2 четверти";
		}
		else if (x == 0 && y < 0)
		{
			quarter = "граница 3 и 4 четверти";
		}
		else if (y == 0 && x > 0)
		{
			quarter = "граница 1 и 4 четверти";
		}
		else if (y == 0 && x < 0)
		{
			quarter = "граница 3 и 2 четверти";
		}
		else if ((x == 0) && (y == 0))
		{
			quarter = "пересечение четвертей!";
		}
		else
		{
			cout << "Ошибка!";
		}
	}
	else if ((x != 0) && (y != 0))
	{
		if (x > 0 && y > 0)
		{
			quarter = "1 четверть";
		}
		else if (x < 0 && y > 0)
		{
			quarter = "2 четверть";
		}
		else if (x > 0 && y < 0)
		{
			quarter = "4 четверть";
		}
		else if (x < 0 && y < 0)
		{
			quarter = "3 четверть";
		}
		else
		{
			cout << "Ошибка!";
		}
	}

	cout << "Точка координат: " << quarter << " - (" << x << '.' << y << ")";

	cout << '\n';


	return 0;
}