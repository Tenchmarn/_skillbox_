#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    string roman_symbols("IVXLCDM");
    string result("");
    // 0 - I (1)
    // 1 - V (5)
    // 2 - X (10)
    // 3 - L (50)
    // 4 - C (100)
    // 5 - D (500)
    // 6 - M (1000)

    int number(0);
    int digit(0);
    int position(0); // позиция разряда (0 - единицы, 1 - десятки, 2 - сотни, 3 - тысячи)

    // Ввод числа
    while (true)
    {
        cout << "\nВведите число (от 1 до 3999): ";
        cin >> number;
        if (number > 3999)
        {
            cout << "\tЧисло больше положенного!";
        }
        else if (number < 1)
        {
            cout << "\tЧисло меньше положенного!";
        }
        else
        {
            break;
        }
    }

    // обработка
    while (number != 0)
    {
        digit = number % 10;
        number /= 10;

        string temp = ""; // временная строка

        // Определение индексов
        int unit_index = position * 2;      // единицы* (I, X, C, M)
        int five_index = position * 2 + 1;  // пятерки* (V, L, D)
        int ten_index = position * 2 + 2;   // десятки* (X, C, M)

        // Ограничение индексов
        if (ten_index >= roman_symbols.size())
        {
            ten_index = roman_symbols.size() - 1;
        }
        if (five_index >= roman_symbols.size())
        {
            five_index = roman_symbols.size() - 1;
        }

        switch (digit)
        {
        case 1:
            temp += roman_symbols[unit_index];
            break;
        case 2:
            temp += roman_symbols[unit_index];
            temp += roman_symbols[unit_index];
            break;
        case 3:
            temp += roman_symbols[unit_index];
            temp += roman_symbols[unit_index];
            temp += roman_symbols[unit_index];
            break;
        case 4:
            temp += roman_symbols[unit_index];
            temp += roman_symbols[five_index];
            break;
        case 5:
            temp += roman_symbols[five_index];
            break;
        case 6:
            temp += roman_symbols[five_index];
            temp += roman_symbols[unit_index];
            break;
        case 7:
            temp += roman_symbols[five_index];
            temp += roman_symbols[unit_index];
            temp += roman_symbols[unit_index];
            break;
        case 8:
            temp += roman_symbols[five_index];
            temp += roman_symbols[unit_index];
            temp += roman_symbols[unit_index];
            temp += roman_symbols[unit_index];
            break;
        case 9:
            temp += roman_symbols[unit_index];
            temp += roman_symbols[ten_index];
            break;
        default:
            // 0
            break;
        }

        // Добавление разряда
        result = temp + result;
        position++;
    }

    cout << "Римское число: " << result << endl;

    return 0;
}