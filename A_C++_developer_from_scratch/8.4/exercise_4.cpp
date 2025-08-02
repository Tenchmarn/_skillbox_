#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int lower_limit; //	нижний
	int upper_limit; // верхний
	float intermediate_point; // промежуточная точка
	float brightness; // яркость

	cout << "Введите яркость левой границы градиента: ";
	cin >> lower_limit;

	cout << "Введите правую границу градиента: ";
	cin >> upper_limit;

	cout << "Введите положение точки между границами: ";
	cin >> intermediate_point;
	
	brightness = lower_limit + (upper_limit - lower_limit) * intermediate_point;


	cout << "Яркость точки: " << brightness << '\n';

	return 0;
}