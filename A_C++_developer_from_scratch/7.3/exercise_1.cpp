#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, sum = 0, count = 1;

	cout << "\tВведите пин-код из 4-х цифр.\n";

	for (; sum != 42; count++)
	{
		if (count == 5)
		{
			count = 1;
			sum = 0;
			cout << "\n\tВвод некорректный, попробуйте еще раз\n";
		}

		cout << "Введите цифру " << count << " пин-кода: ";
		cin >> n;

		sum += n;
	}

	cout << "\n\tВвод корректный.\n";

	return 0;
}