#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, k;

	cout << "Введите число k: ";
	cin >> k;

	cout << "Введите степень числа k, n: ";
	cin >> n;

	int power = 1, i = 1;

	while (i<=n)
	{
		power *= k;
		cout << k << '^' << i << " = " << power << '\n';
		cout << '\n';
		i++;
	}

	cout << '\n';

	return 0;
}