#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int length_1, length_2, length_3;

	cout << "Введите длину 1: ";
	cin >> length_1;

	cout << "Введите длину 2: ";
	cin >> length_2;

	cout << "Введите длину 3: ";
	cin >> length_3;

	if ((length_1 + length_2) <= length_3) cout << "\n\tТреугольник сложить нельзя!";
	if ((length_1 + length_3) <= length_2) cout << "\n\tТреугольник сложить нельзя!";
	if ((length_3 + length_2) <= length_1) cout << "\n\tТреугольник сложить нельзя!";
	else cout << "Сложить треугольник можно!";

	cout << '\n';

	return 0;
}