#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string answer = " ";

	int low = 0;
	int high = 63;

	cout << "Загадайте число в диапазоне от 0 до 63.\n";

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (low == high) {
            cout << "Ваше число: " << low << "!\n";
            break;
        }

        cout << "Ваше число больше " << mid << "? (да/нет): ";
        cin >> answer;

        if (answer == "да") {
            low = mid + 1;
        }
        else if (answer == "нет") {
            high = mid;
        }
        else {
            cout << "Пожалуйста, отвечайте только 'да' или 'нет'.\n";
        }
    }

	return 0;
}