#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int kilometer;			// километр
	int pace;				// темп
	float average_pace = 0;	// средний темп

	int second = 0,
		minuts = 0,
		horse = 0;

	cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? ";
	cin >> kilometer;

	for (int count = 1; count <= kilometer; count++)
	{
		cout << "Какой у тебя был темп на километре ";
		cout << count << "? ";
		cin >> pace;
		average_pace += pace;
	}

	second = ceil(average_pace / kilometer); // 1785

	minuts = second / 60;
	second %= 60;

	cout << "Твой средний темп за тренировку: "
		<< minuts << " минут "
		<< round(second) << " секунд.\n";

	return 0;
}