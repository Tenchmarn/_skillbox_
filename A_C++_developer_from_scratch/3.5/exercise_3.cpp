#include <iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "RUS");

	int beginHeight = 100;	// начальная высота бамбука.
	int dailyGrowth = 50;	// ежедневный рост;
	int nightFade = 20;		// размер съедаемого гусеницами бамбука за одну ночь;

	cout << "\n\tПодсчет высоты бамбука к середине третьего дня.\n";
	cout << "\nПараметры:\n";
	cout << "\nРазмер съедаемого гусеницами бамбука за одну ночь: " << nightFade << " сантиметров.";
	cout << "\nНачальная высота бамбука: " << beginHeight << " сантиметров.";
	cout << "\nЕжедневный рост: " << dailyGrowth << " сантиметров." << "\n";

	int calculationResult = beginHeight + (dailyGrowth - nightFade) * 2 + dailyGrowth / 2;

	cout << "\nПодсчет высоты бамбука к половине третьего дня: " << calculationResult << " сантиметров.\n";

	return 0;
}