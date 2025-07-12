#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int height;

	cout << "Введите высоту елочки: ";
	cin >> height;

    while (height <= 0) 
    {
        cout << "Высота должна быть положительной. Введите снова: ";
        cin >> height;
    }

    for (int row = 1; row <= height; ++row) 
    {

        for (int space = 0; space < height - row; ++space) 
        {
            cout << " ";
        }

        for (int hash = 0; hash < 2 * row - 1; ++hash) 
        {
            cout << "#";
        }

        cout << endl;
    }

	return 0;
}
