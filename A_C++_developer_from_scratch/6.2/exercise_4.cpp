#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	SetConsoleCP(1251);			// функция задает входную кодовую страницу
	SetConsoleOutputCP(1251);	// Задает выходную кодовую страницу, используемую консолью, связанной с вызывающим процессом

	int count = 0;

	string message = " ";
	char ch = ' ';

	do
	{
		cout << "Введите количество повторений: ";
		cin >> count;

		cout << "Желаете напоминание о чем-то конкретном? (n/y): ";
		cin >> ch;

		if (ch == 'y')
		{
			cout << "Введите фразу: ";
			cin >> message;

		}

		while (count != 0)
		{
			if (ch == 'y')
			{
				cout << message << endl;
			}
			else if (ch == 'n')
			{
				cout << "\nВы хотели не забыть о чем-то.\n";
			}
			else
			{
				cout << "\tОшибка!" << endl;
				break;
			}
			count--;
		}

		cout << "\nЖелаете продолжить? (n/y): ";
		cin >> ch;

	} while (ch != 'n');

	return 0;
}