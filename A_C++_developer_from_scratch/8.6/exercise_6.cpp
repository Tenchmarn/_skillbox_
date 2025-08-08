
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float new_amplitude = 0; // начальная амплитута в сантиметрах
	float end_amplitude = 0; // конечная амплитуда в сантиметрах

	int count = 0;
	float percent = 8.4f; // процент затухания.

	cout << "Введите начальную амплитуду: ";
	cin >> new_amplitude;
	while (new_amplitude <= 0)
	{
		cout << "Вы не можите ввести начальную отрицательную или 0 амплитуду, повторите попытку: ";
		cin >> new_amplitude;
	}

	cout << "Введите конечную амплитуду: ";
	cin >> end_amplitude;
	while (end_amplitude <= 0)
	{
		cout << "Вы не можите ввести конечную отрицательную или 0 амплитуду, повторите попытку: ";
		cin >> end_amplitude;
	}


	while (new_amplitude >= end_amplitude)
	{
		new_amplitude -= ((new_amplitude / 100) * percent);
		count++;
	}
	cout << "\nМаятник остановился после " << count << " колебаний.\n";


	return 0;
}