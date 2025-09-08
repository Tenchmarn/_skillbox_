#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    string str_num;
    bool seen_dot = false;      // метка точки
    bool seen_digit = false;    // метка цифры
    bool valid = true;          // истинная метка

    cout << "Введите число: ";
    cin >> str_num;

    for (int i = 0; i < str_num.length() && valid; i++)
    {
        char c = str_num[i];

        // проверка на является ли символ цифрой
        bool is_digit = (c >= '0' && c <= '9');

        if (i == 0) // проверки на цифру, точку или минус
        {
            if (c == '-') 
            {
                // Знак минус - допустимый первый символ (проверка)
                if (str_num.length() == 1) 
                {
                    valid = false; 
                }
            }
            else if (c == '.') 
            {
                seen_dot = true;
            }
            else if (is_digit) 
            {
                seen_digit = true;
            }
            else // Недопустимый символ
            {
                valid = false; 
            }
        }
        else 
        {
            if (c == '.') // Последующие символы: цифра или точка (только одна)
            {
                if (seen_dot) // Если вторая точка - ошибка
                {
                    valid = false; 
                }
                else 
                {
                    seen_dot = true;
                }
            }
            else if (is_digit) 
            {
                seen_digit = true;
            }
            else // Если недопустимый символ
            {
                valid = false; 
            }
        }
    }

    if (valid && seen_digit) 
    {
        cout << "Yes";
    }
    else 
    {
        cout << "No";
    }

    return 0;
}