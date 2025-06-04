#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, sum = 0, count_1;

	cout << "Введите количество для сложения: ";
	cin >> count_1;

	do
	{
		cout << "Введите цифру или число "
			<< count_1
			<< ": ";
		cin >> n;

		sum += n;

		count_1--;

	} while (count_1 != 0);

	cout << "\nРезультат сложения: " << sum;

	return 0;
}