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

		if (ch == 'w')
		{
			if (y < 20) y += 1;
		}
		if (ch == 'a')
		{
			if (x > 0) x -= 1;
		}
		if (ch == 's')
		{
			if (y > 0) y -= 1;
		}
		if (ch == 'd')
		{
			if (x < 15) x += 1;
		}			
	}

	return 0;
}
