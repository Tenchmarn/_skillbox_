#include <iostream> 
int main() 
{
	setlocale(LC_ALL, "RUS"); // Функция для настройки региональных параметров

	int lap = 4;			// круг
	int engine = 254;		// двигатель
	int wheels = 93;		// колеса
	int steerinWheel = 49;	// руль
	int wind = 21;			// ветер
	int rain = 17;			// дождь

	int speed = engine + wheels + steerinWheel - wind - rain;		// скорость


	std::cout << "===================\n";
	std::cout << "Супер гонки. Круг " << lap << "\n";
	std::cout << "===================\n";
	std::cout << "Шумахер (" << speed << ")\n";
	std::cout << "===================\n";
	std::cout << "Водитель: Шумахер\n";
	std::cout << "Скорость: " << speed << "\n";
	std::cout << "-------------------\n";
	std::cout << "Оснащение\n";
	std::cout << "Двигатель: +" << engine << "\n";
	std::cout << "Колеса: +" << wheels << "\n";
	std::cout << "Руль: +" << steerinWheel << "\n";
	std::cout << "-------------------\n";
	std::cout << "Действия плохой погоды\n";
	std::cout << "Ветер: -" << wind << "\n";
	std::cout << "Дождь: -" << rain << "\n";

	return 0;
}