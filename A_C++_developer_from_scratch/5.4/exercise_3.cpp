#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n;
	int max = 9, min = 6;

	cout << "Введите число: ";
	cin >> n;

	if (n >= min && n <= max)
	{
		cout << "Да";
	}
	else if (n < min)
	{
		cout << "Нет, меньше 6 штук нельзя.";
	}
	else if (n > max) // 21
	{
		if (n % max == 0)
		{
			cout << "Да, можно купить " << n / max << " коробки по "
				<< max << " штук.";
		}
		else if (n % min == 0)
		{
			cout << "Да, можно купить " << n / min << " коробки по "
				<< min << " штук.";
		}
		else
		{
			cout << "Нельзя!";
		}
	}
	else
	{
		cout << "Ошибка!";
	}


	cout << '\n';

	return 0;
}