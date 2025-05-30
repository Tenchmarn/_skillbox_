#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int day_number;
    cout << "Введите день: ";
    cin >> day_number;

    if (day_number >= 1 && day_number <= 31)
    {

        if ((day_number >= 1 && day_number <= 5)
            || (day_number >= 8 && day_number <= 10)
            || (day_number % 7 == 6)
            || (day_number % 7 == 0))
        {
            cout << "Выходной день!";
        }
        else
        {
            cout << "Рабочий день.";
        }
    }
    else
    {
        cout << "Ошибка! Введён неверный день.";
    }

    return 0;
}


