#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number;
	int count_1;

	do {
		cout << "Введите номер билета: ";
		cin >> number;

		int ticket = number;
		count_1 = (number) ? 0 : 1;

		while (number)
		{
			number /= 10;
			count_1++;
		}

		int left = 0;
		int right = 0;

		if (count_1 >= 10)
		{
			cout << "\n\tБилет слишком велик!\n";
			return 0;
		}
		else if (count_1 % 2 == 0)
		{
			int count_2 = count_1;

			while (count_1 > count_2 / 2)
			{
				right += ticket % 10;
				ticket /= 10;
				count_1--;
			}

			while ((count_1 <= count_2 / 2) && count_1)
			{
				left += ticket % 10;
				ticket /= 10;
				count_1--;
			}

			if (left == right) cout << "\n\tБилет счастливый!\n";
			else cout << "\n\tПовезёт в следующий раз!\n";
		}
		else cout << "\n\tБилет не правильный!\n\n";

	} while (count_1);

	cout << '\n';

	return 0;
}