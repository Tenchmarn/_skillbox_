#include <iostream>

using std::cout; // взятие объекта потока вывода cout из пространства имен

int main()
{
	setlocale(LC_ALL, "RUS"); // функция для настройки региональных региональных

	cout << "Приветствуем вас в калькуляторе квартплаты!\n";

	int FullCostRepair = 4000000, NumberApartaments = 40, Entrance = 10;
	int CostOneApartments = FullCostRepair / (Entrance * NumberApartaments);

	cout << "Введите сумму, указанную в квитанции: " << FullCostRepair << '\n';
	cout << "Сколько подъездов в вашем доме? " << Entrance << '\n';
	cout << "Сколько квартир в каждом подъезде? " << NumberApartaments << '\n';
	cout << "----Считаем----- \n";
	cout << "Каждая квартира должна платить по " << CostOneApartments << " руб.\n";

	return 0;
}