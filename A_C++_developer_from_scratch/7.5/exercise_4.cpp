#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int width, height;

	cout << "Введите ширину и высоту рамки: ";
	cin >> width >> height;

	for (int j = 1; j <= height; j++)
	{
		cout << '|';
		for (int i = 1; i <= width - 2; i++)
		{
			if ((j == 1) || (j == height))
			{
				cout << '-';
			}
			else
			{
				cout << ' ';
			}
		}
		cout << '|' << '\n';
	}

	return 0;
}