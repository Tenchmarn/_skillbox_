#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int count = 10;			// счетчик
	int attempt = 1;		//попытки

	string answer = " ";

	cout << "Необходимо обезвредить бомбу! У Вас 10 попыток!\n";

	for (count; count > 0; attempt++)
	{
		count--;
		cout << "\n\tВведите команд(ы)\n\"да\" - обезвредить;\n"
			<< "\"Нет\" - не обезвреживать;\n";
		cout << "Ваш ответ: "; cin >> answer;
		cout << "\n";

		if (count == 0) 
		{
			cout << "\n\tБомба взорвалась!\n";
			return 0;
		}
		else if (answer == "да")
		{
			cout << "\tБомба обезврежена!\n";
			cout << "Вам оставалось " << count << " попыток.\n";
			break;
		}
		else if (answer == "нет") cout << "\n\t\tСчетчик тикает. У Вас остается мало попыток!\n";
		else cout << "\t\tКоманда неизвестна. У Вас осталось " << count << " попыток!";
	}

	cout << "Количество ваших попыток составляло: "
		<< attempt << '\n';

	return 0;
}