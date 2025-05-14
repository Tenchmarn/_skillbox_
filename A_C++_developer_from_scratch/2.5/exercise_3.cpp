#include <iostream>

using std::cout; // взятие объекта потока вывода cout из пространства имен

int main() 
{
	setlocale(LC_ALL, "RUS"); // Функция для настройки региональных параметров

	cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\n";

	int WorkingShiftTime = 480, GetOrderTime = 2, OrderCollectionTime = 4;
	int ServiceCustomers = WorkingShiftTime / (GetOrderTime + OrderCollectionTime);

	cout << "Введите длительность смены в минутах: " << WorkingShiftTime << '\n';
	cout << "Сколько минут клиент делает заказ? " << GetOrderTime << '\n';
	cout << "Сколько минут кассир собирает заказ? " << OrderCollectionTime << '\n';
	cout << "-----Считаем----- \n";

	cout << "За смену длиной " << WorkingShiftTime
		<< " минут кассир успеет обслужить " << ServiceCustomers
		<< " клиентов.\n";

	return 0;
}