#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number;

	cout << "Введите число для умножения: ";
	cin >> number;

	cout << '\n';

	for (int count = 0; count <= 10; count++) 
		cout << number << '*' << count << " = " << number * count << '\n';

	cout << '\n';

	return 0;
}