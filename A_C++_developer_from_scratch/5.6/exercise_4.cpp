#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int amount_withdrawal;

	int paper_1 = 100, paper_1_1 = 0,
		paper_2 = 200, paper_2_1 = 0,
		paper_3 = 500, paper_3_1 = 0,
		paper_4 = 1000, paper_4_1 = 0,
		paper_5 = 2000, paper_5_1 = 0,
		paper_6 = 5000, paper_6_1 = 0;

	cout << "Максимальная сумма снятия - 150 000 тысяч.\n";
	cout << "Введите сумму для снятия: ";
	cin >> amount_withdrawal;
	
	if ((amount_withdrawal <= 150000)
		&& (amount_withdrawal >= 0)
		&& (amount_withdrawal % paper_1 == 0))
	{
		int remains_1 = 0;

		cout << "Банкомат может выдать следующие купюры: \n";

		if (amount_withdrawal >= paper_6)
		{
			remains_1 = amount_withdrawal % paper_6;
			paper_6_1 = (amount_withdrawal - remains_1) / paper_6; 
			amount_withdrawal -= (amount_withdrawal - remains_1);
		}
		cout << "5000 - " << paper_6_1 << '\n';

		if (amount_withdrawal >= paper_5)
		{
			remains_1 = amount_withdrawal % paper_5; 
			paper_5_1 = (amount_withdrawal - remains_1) / paper_5;
			amount_withdrawal -= (amount_withdrawal - remains_1);  
		}
		cout << "2000 - " << paper_5_1 << '\n';

		if (amount_withdrawal >= paper_4)
		{
			remains_1 = amount_withdrawal % paper_4;
			paper_4_1 = (amount_withdrawal - remains_1) / paper_4;
			amount_withdrawal -= (amount_withdrawal - remains_1);
		}
		cout << "1000 - " << paper_4_1 << '\n';

		if (amount_withdrawal >= paper_3)
		{
			remains_1 = amount_withdrawal % paper_3;
			paper_3_1 = (amount_withdrawal - remains_1) / paper_3;
			amount_withdrawal -= (amount_withdrawal - remains_1);
		}
		cout << "0500 - " << paper_3_1 << '\n';
		
		if (amount_withdrawal >= paper_2)
		{
			remains_1 = amount_withdrawal % paper_2;
			paper_2_1 = (amount_withdrawal - remains_1) / paper_2;
			amount_withdrawal -= (amount_withdrawal - remains_1);
		}
		cout << "0200 - " << paper_2_1 << '\n';

		if (amount_withdrawal >= paper_1)
		{
			remains_1 = amount_withdrawal % paper_1;
			paper_1_1 = (amount_withdrawal - remains_1) / paper_1;
			amount_withdrawal -= (amount_withdrawal - remains_1);
		}
		cout << "0100 - " << paper_1_1 << '\n';
	}
	else
	{
		cout << "Ошибка!";
	}

	cout << '\n';

	return 0;
}