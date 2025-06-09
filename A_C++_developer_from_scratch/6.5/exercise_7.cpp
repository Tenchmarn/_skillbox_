#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int numerator;		// числитель
	int denominator;	// знаменатель
	int count = 0;		// счетчик


	cout << "Введите числитель: ";
	cin >> numerator;

	cout << "Введите знаменатель: ";
	cin >> denominator;

	if (denominator == 0) 
	{
		cout << "Ошибка: знаменатель не может быть нулем!\n";
		return 0;
	}
						// вычисление НОД
	int numerator_count = numerator < 0 ? -numerator : numerator;
	int denominator_count = denominator < 0 ? -denominator : denominator;

	while (denominator_count)
	{
		count = denominator_count;
		denominator_count = numerator_count % denominator_count;
		numerator_count = count;
	}

						// сокращение
	numerator /= numerator_count;
	denominator /= numerator_count;

	cout << "Результат: "
		<< numerator << '/' << denominator;

	if (numerator < 0)
	{
		cout << "\n\n(При вводе отрицательных чисел в\n"
			<< "выводе должен быть только один ведущий минус.\n"
			<< "Неправильный вывод программы: "
			<< -numerator << '/' << -denominator
			<< ", " << numerator << '/' << -denominator
			<< ".)\n";
	}

	return 0;
}