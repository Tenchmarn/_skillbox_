#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number, variable_1 = 1, variable_2 = 0, next_term = 0;
	int count = 1;

	cout << "Введите номер последовательности: ";
	cin >> number;

	while (count <= number)
	{
		next_term = variable_1 + variable_2;
		variable_1 = variable_2;
		variable_2 = next_term;
		count++;
	}
	
	cout << "Число в последовательности: " << next_term << '\n';

	return 0;
}

