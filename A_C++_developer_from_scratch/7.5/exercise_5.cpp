#include <iostream>

using namespace std;

int main()
{
	int width = 20;
	int height = 40;
	char ch = '^';

	for (int i = 0; i <= width; i++)
	{
		for (int j = 0; j <= height; j++)
		{
			if (((height / 2) == j) && ((width /2) != i))
			{
				cout << ch;
				ch = '|';
			}
			else if ((width / 2) == i)
			{
				if ((height / 2) == j)
				{
					cout << '+';
				}
				else if (j == height)
				{
					cout << '>';
				}
				else if(j < height)
				{
					cout << '-';
				}
			}
			else
			{
				cout << ' ';
			}
		}
		cout << '\n';
	}

	return 0;
}