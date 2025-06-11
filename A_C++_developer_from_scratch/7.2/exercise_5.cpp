#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	SetConsoleCP(1251);			// функция задает входную кодовую страницу
	SetConsoleOutputCP(1251);	// Задает выходную кодовую страницу, используемую консолью, связанной с вызывающим процессом

	string answer = "";
	int count = 0;

	for (count; answer != "Да, конечно, сделал"; count++)
	{
		cout << "Вы выполнили задание?\n";
		getline(std::cin, answer);
	}

	int result = count % 100;

	cout << "\nНу почему тебя нужно спрашивать "
		<< count << ((result % 10 >= 2 && result % 10 <= 4 && (result < 11 || result > 14)) ? " раза???" : " раз???")
		<< '\n';

	return 0;
}