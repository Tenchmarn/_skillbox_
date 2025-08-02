#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float dot_board_x = 0.001f, dot_board_y = 0.001f; // точка на доске
	float dot_horse_x = 0.001f, dot_horse_y = 0.001f; // положение коня

	cout << "Введите местоположение коня.\n";
	cout << "x = "; cin >> dot_horse_x; 
	cout << "y = "; cin >> dot_horse_y; 

	cout << "Введите местоположение точки на доске.\n";
	cout << "x = "; cin >> dot_board_x; 
	cout << "y = "; cin >> dot_board_y;

	// преобразования
	int x_horse = int(dot_horse_x * 10);
	int y_horse = int(dot_horse_y * 10);
	int x_board = int(dot_board_x * 10);
	int y_board = int(dot_board_y * 10);

	printf("Конь в клетке (%i, %i). ", x_horse, y_horse);
	printf("Точка в клетке (%i, %i).", x_board, y_board);

	cout << '\n';

	bool can_reach = false;

	for (int dx = -2; dx <= 2; dx++) 
	{
		for (int dy = -2; dy <= 2; dy++) 
		{
			if (abs(dx) + abs(dy) == 3 && dx != 0 && dy != 0) 
			{
				int new_x = x_horse + dx;
				int new_y = y_horse + dy;

				if (new_x == x_board && new_y == y_board && new_x >= 0 && new_x < 8 && new_y >= 0 && new_y < 8) 
				{
					can_reach = true;
					break;
				}
			}
		}
		if (can_reach) break;
	}

	if (can_reach) 
	{
		cout << "Да, конь может ходить в эту точку.\n";
	}
	else {
		cout << "Нет, конь не может ходить в эту точку.\n";
	}

	return 0;
}