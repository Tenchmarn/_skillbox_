#include <iostream>
#include <windows.h> // подключение заголовочного файла для SetConsoleCP() и SetConsoleOutputCP() 

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);			// функция задает входную кодовую страницу
	SetConsoleOutputCP(1251);	// Задает выходную кодовую страницу, используемую консолью, связанной с вызывающим
	
	string stop_1, stop_2, stop_3, stop_4; // остановки

	stop_1 = " \"Улица олихова\". ";
	stop_2 = " \"Улица собачья\". ";
	stop_3 = " \"Угол дома на озерах\". ";
	stop_4 = " \"Перекресток пчела\". ";

	int counterMoney = 0, ticket = 20; // счетчик денег за пассажира, цена билета
	int passengerInBus = 0, passengersReleased, passengerEntered;  // пассажиры в автобусе, пассажиры вышли


	cout << "Прибываем на остановку" << stop_1 << "В салоне пассажиров: " << passengerInBus;

	cout << "\nСколько пассажиров вышло на остановке? "; 
	cin >> passengersReleased;
	passengerInBus -= passengersReleased;

	cout << "Сколько пассажиров зашло на остановке? "; 
	cin >> passengerEntered;
	passengerInBus += passengerEntered;
	counterMoney += passengerEntered * ticket;

	cout << "Отправляемся с остановки" << stop_1 << "В салоне пассажиров: " << passengerInBus;


	cout << "\n\n\t-----------Едем---------\n\n";


	cout << "Прибываем на остановку" << stop_2 << "В салоне пассажиров: " << passengerInBus;

	cout << "\nСколько пассажиров вышло на остановке? "; 
	cin >> passengersReleased;
	passengerInBus -= passengersReleased;

	cout << "Сколько пассажиров зашло на остановке? "; 
	cin >> passengerEntered;
	passengerInBus += passengerEntered;
	counterMoney += passengerEntered * ticket;

	cout << "Отправляемся с остановки" << stop_2 << "В салоне пассажиров: " << passengerInBus;


	cout << "\n\n\t-----------Едем---------\n\n";


	cout << "Прибываем на остановку" << stop_3 << "В салоне пассажиров: " << passengerInBus;

	cout << "\nСколько пассажиров вышло на остановке? ";
	cin >> passengersReleased;
	passengerInBus -= passengersReleased;

	cout << "Сколько пассажиров зашло на остановке? ";
	cin >> passengerEntered;
	passengerInBus += passengerEntered;
	counterMoney += passengerEntered * ticket;

	cout << "Отправляемся с остановки" << stop_3 << "В салоне пассажиров: " << passengerInBus;


	cout << "\n\n\t-----------Едем---------\n\n";


	cout << "Прибываем на остановку" << stop_4 << "В салоне пассажиров: " << passengerInBus;

	cout << "\nСколько пассажиров вышло на остановке? ";
	cin >> passengersReleased;
	passengerInBus -= passengersReleased;

	cout << "Сколько пассажиров зашло на остановке? ";
	cin >> passengerEntered;
	passengerInBus += passengerEntered;
	counterMoney += passengerEntered * ticket;

	cout << "Отправляемся с остановки" << stop_4 << "В салоне пассажиров: " << passengerInBus;


	cout << "\n\n\t---------Конечная-------\n\n";


	int salaryDriver = 0, fuel = 0, taxes = 0, repair = 0, income = 0; // зарплата, топливо, налоги, ремонт, доход

	salaryDriver = (counterMoney / 4);
	fuel += taxes += repair += (counterMoney / 5);
	income = counterMoney - fuel - taxes - repair - salaryDriver;

	cout << "\tФорма вывода (после прибытия на последнюю остановку):\n";

	cout << "\nВсего заработано: " << counterMoney;
	cout << "\nЗарплата водителя: " << salaryDriver;
	cout << "\nРасходы на топливо: " << fuel;
	cout << "\nНалоги: " << taxes;
	cout << "\nРасходы на ремонт машины: " << repair;
	cout << "\nИтого доход : " << income << "\n";


	return 0;
}
