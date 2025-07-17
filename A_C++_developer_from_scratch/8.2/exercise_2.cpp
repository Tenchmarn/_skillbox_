#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

    float protein_per_100, carbs_per_100, weight;

    // Ввод данных
    cout << "Введите протеин на 100 грамм: ";
    cin >> protein_per_100;

    cout << "Введите углеводы на 100 грамм: ";
    cin >> carbs_per_100;

    cout << "Введите массу: ";
    cin >> weight;

    // Расчёт
    float protein = (protein_per_100 / 100.) * weight;
    float carbs = (carbs_per_100 / 100.) * weight;

    // Вывод
    cout << "Белок: " << protein << " гр.\n";
    cout  << "Углеводы: " << carbs << " гр.\n";

	return 0;
}