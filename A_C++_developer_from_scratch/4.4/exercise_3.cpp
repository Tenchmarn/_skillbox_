#include <iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number;

	cout << "Введите число: ";
	cin >> number;

	cout << "-----Проверяем-----";


	if (number % 2 == 0)
	{
		cout << "\nЧисло " << number << " - чётное";
	}
	else
	{
		cout << "\nЧисло не чётное!";
	}

	cout << '\n';

	return 0;
}