#include <iostream>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "RUS");

    int profit;
    float tax_1 = 13, tax_2 = 20, tax_3 = 30;
    float tax_amount = 0; // налоговая сумма

    cout << "Введите размер прибыли: ";
    cin >> profit;

    if (profit >= 50000)
    {
        tax_amount = ((profit - 50000) * (tax_3 / 100)) + 
            ((50000 - 10000) * (tax_2 / 100)) + 
            (10000 * (tax_1 / 100));
    }
    else if (profit >= 10000)
    {
        tax_amount = ((profit - 10000) * (tax_2 / 100)) + 
            (10000 * (tax_1 / 100));
    }
    else if (profit > 0)
    {
        tax_amount = profit * (tax_1 / 100);
    }

    cout << "Размер налога равен: " << tax_amount;
    
    if (profit == 0)
    {
        cout << "\nПравда? Ничего не заработали? А если найдем?\n";
    }
    else if (profit < 0)
    {
        cout << "\nОжидалось не отрицательное число!\n";
    }
    cout << '\n';

    return 0;
}