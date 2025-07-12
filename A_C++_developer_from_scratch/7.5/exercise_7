#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int N; // бактерии
	int Y; // антибиотик

	int hour = 1;


	cout << "Введите количество бактерий: ";
	cin >> N;

	while (N <= 0) 
	{
		cout << "Количество бактерий должно быть положительным. Введите снова: ";
		cin >> N;
	}

	cout << "Введите количество антибиотика: ";
	cin >> Y;

	while (Y < 0) 
	{
		cout << "Количество антибиотика не может быть отрицательным. Введите снова: ";
		cin >> Y;
	}

	while (N > 0 && Y > 0) 
	{
		N *= 2;

		int antibiotic_power = 10 - hour + 1; 

		if (antibiotic_power <= 0) 
		{
			Y = 0;
		}
		else 
		{
			int killed = Y * antibiotic_power;
			if (killed >= N) 
			{
				N = 0;
			}
			else 
			{
				N -= killed;
			}
		}

		cout << "После " << hour << " часа бактерий осталось " << N << endl;

		hour++;
	}

	return 0;
}
