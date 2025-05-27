#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int height, weight, hands = 2, legs = 2; // рост, вес, руки, ноги
	int experience; // опыт полета
	string colour_eyes; // цвет глаз
	int counter = 0; // счетчик приема

	cout << "Введите рост: ";
	cin >> height;

	cout << "Введите вес: ";
	cin >> weight;

	cout << "Введите количество рук: ";
	cin >> hands;

	cout << "Введите количество ног: ";
	cin >> legs;

	cout << "Введите опыт полета (часы): ";
	cin >> experience;

	cout << "Введите цвет глаз: ";
	cin >> colour_eyes;

	if (height >= 145 || height <= 165)
	{
		counter++;
	}
	if (weight >= 45 || weight <= 65)
	{
		counter++;
	}
	if (hands == 2)
	{
		counter++;
	}
	if (legs == 2)
	{
		counter++;
	}
	if (experience >= 100)
	{
		counter++;
	}
	if (colour_eyes != "зеленый")
	{
		counter++;
	}

	if (counter == 6)
	{
		cout << "Годен!";
	}
	else
	{
		cout << "Не годен!";
	}

	cout << '\n';

	return 0;
}