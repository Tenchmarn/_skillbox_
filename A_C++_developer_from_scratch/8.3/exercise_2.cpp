#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float x, y;

	cout << "Введите местоположение фигуры." << '\n';

	cout << "y = ";
	do
	{
		cin >> y;
		if (y > 0.81 || y < 0)
		{
			cout << "введите корректное значение y = ";
		}
	} while (y > 0.81 || y < 0);

	cout << "x = ";
	do
	{
		cin >> x;
		if (x > 0.81 || x < 0)
		{
			cout << "введите корректное значение x = ";
		}
	} while (x > 0.81 || x < 0);

	cout << "Фигура находиться в клетке ("
		<< int(x * 10) << ", "
		<< int(y * 10) << ")."
		<< '\n';

	return 0;
}