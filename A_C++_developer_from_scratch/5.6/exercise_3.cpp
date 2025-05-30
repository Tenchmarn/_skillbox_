#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int day_number;
    int first_weekday;

    cout << "Введите номер дня недели для 1 мая (1-пн, 2-вт, ..., 7-вс): ";
    cin >> first_weekday;

    if (first_weekday < 1 || first_weekday > 7)
    {
        cout << "Ошибка! День недели должен быть от 1 до 7." << endl;
        return 1;
    }

    cout << "Введите день мая (1-31): ";
    cin >> day_number;

    if (day_number >= 1 && day_number <= 31)
    {
        // Определяем день недели для текущего дня
        int current_weekday = (first_weekday - 1 + day_number - 1) % 7 + 1;

        // Проверяем, является ли день выходным:
        // 1) Праздники (1-5 и 8-10 мая)
        // 2) Суббота (6) или Воскресенье (7)
        if ((day_number >= 1 && day_number <= 5)
            || (day_number >= 8 && day_number <= 10)
            || (current_weekday == 6)
            || (current_weekday == 7))
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