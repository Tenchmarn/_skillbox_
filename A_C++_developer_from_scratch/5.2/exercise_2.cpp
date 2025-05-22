#include <iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "RUS");

	int limit = 100000;		// лимит снятия 
	int withdrawal = 100;	// выдача банкнот по курсу
	int user_withdrawal;	// пользовательский вывод валюты
	int withdrawal_amount;  // сумма вывода средств
	

	cout << "Лимит по снятию: " << limit << '\n';
	cout << "Выдача по: " << withdrawal << '\n';
	cout << "Введите сумму снятия: ";
	cin >> user_withdrawal;		

	withdrawal_amount = user_withdrawal / withdrawal; 
	if (user_withdrawal < 100000 && user_withdrawal > 0)
	{
		if (user_withdrawal % withdrawal == 0) 
		{
			cout << "Вывод количества купюр: " << user_withdrawal / withdrawal;
		}
		else if (withdrawal_amount > 0)
		{
			cout << "Ошибка! Банкомат может выдать только: " << withdrawal_amount * withdrawal;
		}
	}
	else
	{
		cout << "Ошибка!";
	}


	cout << '\n';

	return 0;
}