#include <iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Автомобиль выехал из Москвы в Рязань.\n";
	cout << "Cумеет ли добраться автомобиль до Рязани за два часа?\n";
	cout << "Расстояние между городами - 200 км.\n";

	int average_speed;

	cout << "\nВведите среднюю скорость движения автомобиля (км/ч): ";
	cin >> average_speed;

	average_speed *= 2;

	if (average_speed >= 200)
	{
		cout << "\n\tВы проехали";
	}
	cout << "\nПройденное расстояние: " << average_speed << " километров.\n";


	return 0;
}