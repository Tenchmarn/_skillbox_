
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    float H = 0.f; // ввод данных (от земли до пола лифта)
    float distance_between_floors = 3.975f; // расстояние между этажами
    int count_floor = 1; // счетчик этажей

    cout << "Введите высоту лифта (от земли до пола лифта): ";
    cin >> H;

    if (H < 0)
    {
        cout << "Ошибка, расстояние не может быть ниже нуля!" << '\n';
        cout << "Перезапустите программу!" << '\n';
        return 1;
    }

    count_floor = static_cast<int>((H + distance_between_floors / 2) / distance_between_floors) + 1;

    cout << "Лифт на этаже " << count_floor << ".\n";

    return 0;
}