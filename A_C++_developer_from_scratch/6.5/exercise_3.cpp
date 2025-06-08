#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);			// функция задает входную кодовую страницу
	SetConsoleOutputCP(1251);	// Задает выходную кодовую страницу, используемую консолью, связанной с вызывающим процессом

	string user_name = " ";
	int duty, repayment; // долг, погашение

	cout << "Введите сумму долга: ";
	cin >> duty;

	cout << "Введите имя должника: ";
	cin >> user_name;

	do 
	{
		if (duty < 0)
		{
			cout  << '\n' << user_name << " долг не может быть отрицательным!\n";
			return 0;
		}
		else if (duty == 0)
		{
			cout << '\n' << user_name << " на вашем счету нет долга!\n";
			return 0;
		}

		cout << '\n' << user_name << " введите сумму на погашение: ";
		cin >> repayment;

		duty -= repayment;

		cout << "остаток на вашем счету: "
			<< ((duty >= 0) ? duty : (cout << "Положительный " && -duty))
			<< endl;
			
		if (duty < 0) cout << "\n\tМожете забрать остаток!\n";

	} while (duty > 0);

	cout << "\n\tВы успешно выплатили долг! Поздравляем!\n";

	return 0;
}