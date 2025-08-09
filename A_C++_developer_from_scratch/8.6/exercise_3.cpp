#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	// опредление с объявлением
	int cube_z_1 = 5, 
		cube_x_1 = 5, 
		cube_y_1 = 5;

	// объявление
	float 
		bar_z_1,
		bar_x_1,
		bar_y_1;

	bool condition = true;
	int total_cubes = 1;

	cout << "Введите размеры бруска: \n";

	while (true)
	{
		cout << "X: "; cin >> bar_x_1;

		if (bar_x_1 < 5)	// повторная инициализация
		{
			cout << "Введите значение Х больше или равное 5.\n";
		}
		else
		{
			condition = (int(bar_x_1) % cube_x_1 == 0);
			if (condition)
			{
				total_cubes *= floor(bar_x_1);
			}
			else
			{
				total_cubes *= floor(bar_x_1 - (int(bar_x_1) % cube_x_1));
			}
			break;
		}
	}

	while (true)
	{
		cout << "Y: "; cin >> bar_y_1;

		if (bar_y_1 < 5)	// повторная инициализация
		{
			cout << "Введите значение Y больше или равное 5.\n";
		}
		else
		{
			condition = (int(bar_y_1) % cube_y_1 == 0);
			if (condition)
			{
				total_cubes *= floor(bar_y_1);
			}
			else
			{
				total_cubes *= floor(bar_y_1 - (int(bar_y_1) % cube_y_1));
			}
			break;
		}
	}

	while (true)
	{
		cout << "Z: "; cin >> bar_z_1;

		if (bar_z_1 < 5)	// повторная инициализация
		{
			cout << "Введите значение Z больше или равное 5.\n";
		}
		else		
		{
			condition = (int(bar_z_1) % cube_z_1 == 0);
			if (condition)
			{
				total_cubes *= floor(bar_z_1);
			}
			else
			{
				total_cubes *= floor(bar_z_1 - (int(bar_z_1) % cube_z_1));
			}
			break;
		}
	}

	// всего кубиков
	total_cubes /= (cube_x_1 * cube_y_1 * cube_z_1); 

	cout << "Из бруска "
		<< bar_x_1 << "-"
		<< bar_y_1 << "-"
		<< bar_z_1 << " можно изготовить "
		<< total_cubes << " кубиков.\n";


	int kit = 0;

	for (int i = 2; ; i++)
	{
		int pokazatel = i * i * i;

		if (pokazatel > total_cubes)
		{
			cout << "Из " << total_cubes
				<< " кубиков можно собрать набор из "
				<< kit << " кубиков.\n";
			break;
		}
		else 
		{
			kit = pokazatel;
		}
	}

	return 0;
}
