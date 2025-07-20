#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float bottom_c, bottom_f;
	cout << "Нижняя граница: ";
	cin >> bottom_c;

	float top_c, top_f;
	cout << "Верхняя граница: ";
	cin >> top_c;

	float step_c, step_f;
	cout << "Шаг: ";
	cin >> step_c;

	cout << "\n";
	cout << "C     F";
	cout << "\n\n";
	if (bottom_c == 0)
	{
		bottom_f = 32;
	}
	else
	{
		bottom_f = (bottom_c * 9 / 5) + 32;
	}
	cout << ((bottom_c == 0) ? "0" : "") << bottom_c << "     " << bottom_f << '\n';

	step_f = (step_c * 9 / 5) + 32;
	cout << step_c << "     " << step_f << '\n';

	top_f = (top_c * 9 / 5) + 32;
	cout << top_c << "     " << top_f << '\n';

	return 0;
}