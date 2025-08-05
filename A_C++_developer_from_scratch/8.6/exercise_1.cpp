#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float m, F; // масса, сила тяги в ньютонах, секунды
	int t;

	cout << "Введите массу в кг: "; cin >> m;
	cout << "Введите силу тяги в ньютонах: "; cin >> F;
	cout << "Введите секунды: "; cin >> t;

	float acceleration = F/m; // ускорение

	float result = (acceleration * pow(t, 2))/2;

	cout << "На " << result << " метра от первоначального положения.\n";

	return 0;
}