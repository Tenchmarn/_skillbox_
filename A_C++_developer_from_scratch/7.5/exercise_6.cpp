#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int length;
    int quantity_chains;

    cout << "Введите общую длину колонтитула: ";
    cin >> length;

    while (length <= 0) 
    {
        cout << "Длина должна быть положительным числом. Введите снова: ";
        cin >> length;
    }

    cout << "Введите количество восклицательных знаков: ";
    cin >> quantity_chains;

    while (quantity_chains < 0 || quantity_chains > length) 
    {
        cout << "Количество знаков должно быть от 0 до " << length << ". Введите снова: ";
        cin >> quantity_chains;
    }

    cout << '\n';

    int tildas_each_side = (length - quantity_chains) / 2;

    for (int i = 0; i < tildas_each_side; i++) 
    {
        cout << '~';
    }
    for (int i = 0; i < quantity_chains; i++) 
    {
        cout << '!';
    }
    for (int i = 0; i < tildas_each_side; i++) 
    {
        cout << '~';
    }
    if ((length - quantity_chains) % 2 != 0) 
    {
        cout << '~';
    }

    cout << '\n';

    return 0;
}

