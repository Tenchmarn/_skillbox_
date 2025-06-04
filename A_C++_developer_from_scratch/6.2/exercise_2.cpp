#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	SetConsoleCP(1251);			// функция задает входную кодовую страницу
	SetConsoleOutputCP(1251);	// Задает выходную кодовую страницу, используемую консолью, связанной с вызывающим процессом

	string answer_user_1 = "";
	string answer_user_2 = "";

	cout << "Привет, как тебя зовут?\n";
	cin >> answer_user_1;

	cout << answer_user_1 << " купи слона!\n";

	while (true)
	{
		cin >> answer_user_2;
		cout << "Все говорят \"" << answer_user_2
			<< "\", а ты купи слона!\n";
	}

	return 0;
}