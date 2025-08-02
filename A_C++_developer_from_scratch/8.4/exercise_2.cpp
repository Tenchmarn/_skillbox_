#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    float angle_deg;
    cout << "Введите угол тангажа в градусах: ";


    if (!(cin >> angle_deg)) {
        cout << "Ошибка ввода! Введите число.\n";
        return 1;
    }

    while (angle_deg > 180)
    {
        angle_deg -= 360;
    }
    while (angle_deg < -180)
    {
        angle_deg += 360;
    }

    float angle_rad = angle_deg * 3.1415926535f / 180;

    if (angle_rad >= -0.28f && angle_rad <= 0.28f)
    {
        cout << "Угол безопасен." << '\n';
    }
    else
    {
        cout << "Угол небезопасен!" << '\n';
    }

    return 0;
}