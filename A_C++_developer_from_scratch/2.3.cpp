#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int countCircle = 4;
	int speed = 358;
	int engineIndicator = 254;
	int wheelsIndicator = 93;
	int rudderIndicator = 49;
	int WindCount = -21;
	int RainCount = -17;


	cout << "===================" << endl;
	cout << "Супер гонки. Круг " << countCircle << endl;
	cout << "===================" << endl;
	cout << "Шумахер (" << speed << ")" << endl;
	cout << "===================" << endl;
	cout << "Водитель: Шумахер" << endl;
	cout << "Скорость: " << speed << endl;
	cout << "-------------------" << endl;
	cout << "Оснащение" << endl;
	cout << "Двигатель: " << engineIndicator << endl;
	cout << "Колеса: " << wheelsIndicator << endl;
	cout << "Руль: " << rudderIndicator << endl;
	cout << "-------------------" << endl;
	cout << "Действия плохой погоды" << endl;
	cout << "Ветер: " << WindCount << endl;
	cout << "Дождь: " << RainCount << endl;



	return 0;
}