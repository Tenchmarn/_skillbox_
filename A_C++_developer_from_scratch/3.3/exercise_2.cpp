#include <iostream>
#include <windows.h> // подключение заголовочного файла для SetConsoleCP() и SetConsoleOutputCP() 

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);			// функция задает входную кодовую страницу
	SetConsoleOutputCP(1251);	// Задает выходную кодовую страницу, используемую консолью, связанной с вызывающим процессом

	string textNameUser;
	string textPasswordUser;

	cout << "Введите логин: ";
	cin >> textNameUser;

	cout << "Введите пароль: ";
	cin >> textPasswordUser;

	cout << "-----\n";

	cout << textNameUser << ", вы успешно зашли!\n";

	return 0;
}