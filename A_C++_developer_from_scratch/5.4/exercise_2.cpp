#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int x, y;
	int counter = 0;

	cout << "Введите ширину отверстия: ";
	cin >> x;

	cout << "Введите высоту отверстия: ";
	cin >> y;

	int x_1, y_1, z_1;

	cout << "\n\tРазмер кирпича.\n";

	cout << "Введите ширину: ";
	cin >> x_1;

	cout << "Введите высоту: ";
	cin >> y_1;

	cout << "Введите длину: ";
	cin >> z_1;


	if (x >= x_1 && y >= y_1)
	{
		counter++;
	}
	else if (x >= x_1 && y >= z_1)
	{
		counter++;
	}
	else if (x >= y_1 && x >= z_1)
	{
		counter++;
	}
	else
	{
		cout << "Ошибка!";
	}


	if (counter == 1)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}


	return 0;
}