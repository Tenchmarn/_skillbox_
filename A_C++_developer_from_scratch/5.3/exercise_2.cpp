#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int car_1, car_2, car_3, car_4;
	int weight = 1200; // вес


	cout << "Введите вес машины 1: ";
	cin >> car_1;

	cout << "Введите вес машины 2: ";
	cin >> car_2;

	cout << "Введите вес машины 3: ";
	cin >> car_3;

	cout << "Введите вес машины 4: ";
	cin >> car_4;


	if (car_1 > 1200) cout << "\n\tВес машины 1 превышает "
		<< weight << " и имеет: " << car_1;
	if (car_2 > 1200) cout << "\n\tВес машины 2 превышает "
		<< weight << " и имеет: " << car_2;
	if (car_3 > 1200) cout << "\n\tВес машины 3 превышает "
		<< weight << " и имеет: " << car_3;
	if (car_4 > 1200) cout << "\n\tВес машины 4 превышает "
		<< weight << " и имеет: " << car_4;
	if (car_1 || car_2 || car_3 || car_4 <= 0)
	{
		if (car_1 <= 0) cout << "\n\tМашина 1 весит не столько сколько нужно!";
		if (car_2 <= 0) cout << "\n\tМашина 2 весит не столько сколько нужно!";
		if (car_3 <= 0) cout << "\n\tМашина 3 весит не столько сколько нужно!";
		if (car_4 <= 0) cout << "\n\tМашина 4 весит не столько сколько нужно!";
	}

	cout << '\n';

	return 0;
}