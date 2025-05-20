#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int employee_1, employee_2, employee_3;
	int max, min, difference, average; // максимальная, минимальная, разница, средняя


	cout << "Введите зарплату первого сотрудника: ";
	cin >> employee_1;

	cout << "Введите зарплату второго сотрудника: ";
	cin >> employee_2;

	cout << "Введите зарплату третьего сотрудника: ";
	cin >> employee_3;

	cout << "-----Считаем-----";

				// 1 Вариант - нахождение максимальной зарплаты
	/*
	if (employee_1 > employee_2 && employee_1 > employee_3)
	{
		max = employee_1;
	}
	else if (employee_2 > employee_1 && employee_2 > employee_3)
	{
		max = employee_2;
	}
	else
	{
		max = employee_3;
	}
	*/
				// 2 Вариант - нахождение максимальной зарплаты
	/*
	max = (employee_1 > employee_2) ? employee_1 : employee_2;
	max = (max > employee_3) ? max : employee_3;
	*/

				// 3 Вариант - нахождение максимальной зарплаты
	if (employee_1 > employee_3)
	{
		max = (employee_1 > employee_2) ? employee_1 : employee_2;
	}
	else 
	{
		max = (employee_3 > employee_2) ? employee_3 : employee_2;
	}


				// 1 Вариант - нахождение минимальной зарплаты
	/*
	if (employee_1 < employee_2 && employee_1 < employee_3)
	{
		min = employee_1;
	}
	else if (employee_2 < employee_3 && employee_2 < employee_1)
	{
		min = employee_2;
	}
	else
	{
		min = employee_3;
	}
	*/
				// 2 Вариант - нахождение минимальной зарплаты
	/*
	min = (employee_1 < employee_2) ? employee_1 : employee_2;
	min = (min < employee_3) ? min : employee_3;
	*/

				// 3 Вариант - нахождение минимальной зарплаты
	if (employee_1 < employee_3)
	{
		min = (employee_1 < employee_2) ? employee_1 : employee_2;
	}
	else
	{
		min = (employee_3 < employee_2) ? employee_3 : employee_2;
	}

	cout << "\nСамая высокая зарплата в отделе: " << max;

				// нахождение разницы между зарплатами
	difference = max - min;
	cout << "\nРазница между самой высокой и самой низкой зарплатой в отделе : " << difference << " рублей.";

				// нахождение средней разрплаты
	average = (employee_1 + employee_2 + employee_3) / 3;
	cout << "\nСредняя зарплата в отделе: " << average << " рублей.";

	cout << '\n';


	return 0;
}
