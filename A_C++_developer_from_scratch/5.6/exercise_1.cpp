#include <iostream>



using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int speed, height; // скорость, высота

	cout << "Введите скорость (км/ч): ";
	cin >> speed;

	cout << "Введите высоту: ";
	cin >> height;


	if ((speed >= 750 && speed <= 850) && (height >= 9000 && height <= 9500))
	{
		cout << "ДА!";
	}
	else
	{
		cout << "Нет";
	}

	cout << '\n';

	return 0;
}