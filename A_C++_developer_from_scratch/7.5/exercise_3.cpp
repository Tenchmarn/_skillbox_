#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int x = 6, y = 15;
	char ch = ' ';

	while (1)
	{
		
		cout << "[Марсоход]: " << "Марсоход находится на позиции "
			<< x << ", " << y << ", введите команду: \n";
		cout << "[Оператор]: "; cin >> ch;
		if (ch == 'w') y++;
		if (ch == 'a') x--;
		if (ch == 's') y--;
		if (ch == 'd') x++;
		
		if (x > 15) x--;
		if (x < 0) x++;
		if (y > 20) y--;
		if (y < 0) y++;
			
	}

	return 0;
}