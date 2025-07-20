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

	// определение номера клетки
	int cellX = int(x * 10);
	int cellY = int(y * 10);

	// вычисление центра клетки
	float centerX = (cellX + 0.5f) * 0.1f;  
	float centerY = (cellY + 0.5f) * 0.1f;

	// правки
	float deltaX = centerX - x;
	float deltaY = centerY - y;

	cout << "Фигура находится в клетке (" << cellY << ", " << cellX << ")." << endl;
	printf("Поправьте положение фигуры на (%.3f, %.3f).\n", deltaY, deltaX);

	return 0;
}