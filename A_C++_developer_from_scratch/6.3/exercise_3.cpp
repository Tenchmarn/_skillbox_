#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number, count_1 = 0;

	cout << "Введите число состоящее только из 0 или 1: ";
	cin >> number;

	int zeros = 0;
	int ones = 0;

	if (number == 0)
	{
		cout << "Число состоит только из нулей.\n";
		return 0;
	}

	while (number > 0)
	{
		int digit = number % 10;

		if (digit == 0) 
		{
			zeros++;
		}
		else if (digit == 1) 
		{
			ones++;
		}
		else 
		{
			cout << "Число содержит цифры, отличные от 0 и 1" << endl;
			return 0;
		}
		number /= 10;
	}

	if (zeros == 0) 
	{
		cout << "Число состоит только из единиц" << endl;
	}
	else if (ones == 0) 
	{
		cout << "Число состоит только из нулей" << endl;
	}
	else 
	{
		cout << "Число содержит и нули, и единицы" << endl;
	}


	return 0;
}