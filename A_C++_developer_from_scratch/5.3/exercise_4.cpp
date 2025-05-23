#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int a, b, c;
	int counter = 0; // счетчик


	cout << "Введите число 1: ";
	cin >> a; 

	cout << "Введите число 2: ";
	cin >> b; 

	cout << "Введите число 3: ";
	cin >> c; 

	if ((a == b) && (a == c)) counter = 3;
	else if ((a == b) && (a != c)) counter = 2;
	else if ((a != b) && (a == c)) counter = 2;
	else if (b == c) counter = 2;
	else counter = 0;

	cout << "\n\tОтвет: " << counter << " совпадающих.";

	cout << '\n';

	return 0;
}