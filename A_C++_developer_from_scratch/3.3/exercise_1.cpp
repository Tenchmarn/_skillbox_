#include <iostream>
#include <windows.h> // подключение заголовочного файла для SetConsoleCP() и SetConsoleOutputCP() 

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);			// функция задает входную кодовую страницу
	SetConsoleOutputCP(1251);	// Задает выходную кодовую страницу, используемую консолью, связанной с вызывающим процессом

	string nameUser;
	string raceUser;

	cout << "Введите имя персонажа: ";
	cin >> nameUser;

	cout << "Введите расу персонажа: ";
	cin >> raceUser;

	cout << "Родился новый " << raceUser
		<< ", его зовут " << nameUser << ". ";
	cout << "Доброй пожаловать в этот суровый мир!\n";

	return 0;
}