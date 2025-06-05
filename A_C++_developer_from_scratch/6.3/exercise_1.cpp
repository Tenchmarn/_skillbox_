#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, sum = 0, count_1 = 0;

	do
	{
		cout << "Введите пин-код любой длинны из цифр: ";
		cin >> n; // 987855

		while (n != 0)
		{
			sum += n % 10;
			n /= 10;
		}

		if (sum != 42)
		{
			cout << "\tВведите число еще раз.\n";
			sum = 0;
		}

	} while (sum != 42);

	cout << "\n\tВвод корректный.\n";

	return 0;
}