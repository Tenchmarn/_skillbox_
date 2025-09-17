#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    string str_number;    // загадываемое число
    string str_input;    // число-ответ
    char new_attempt;    // повторная попытка ввода

    // проверка на загадочное число
    while (true)
    {
        bool passage = true;

        cout << "\n\tВведите задуманное число (4 цифры): ";
        cin >> str_number;

        if (str_number.length() != 4)
        {
            cout << "Число должно содержать ровно 4 цифры!\n";
            cout << "Повторите попытку!";
            passage = false;
        }
        else
        {
            for (int i = 0; i < str_number.length(); i++)
            {
                if (str_number[i] < '0' || str_number[i] > '9')
                {
                    cout << "Ошибка! Присутствует не цифра!\n";
                    cout << "Повторите попытку!";
                    passage = false;
                    break;
                }
            }
        }
        if (passage)
        {
            break;
        }
    }

    do {
        // проверка на вводимое пользователем число
        while (true)
        {
            bool passage = true;

            cout << "\n\tВведите число (4 цифры): ";
            cin >> str_input;

            if (str_input.length() != 4)
            {
                cout << "Число должно содержать ровно 4 цифры!\n";
                cout << "Повторите попытку!";
                passage = false;
            }
            else
            {
                for (int i = 0; i < str_input.length(); i++)
                {
                    if (str_input[i] < '0' || str_input[i] > '9')
                    {
                        cout << "Ошибка! Присутствует не цифра!\n";
                        cout << "Повторите попытку!";
                        passage = false;
                        break;
                    }
                }
            }
            if (passage)
            {
                break;
            }
        }

        int bulls = 0;    // быки - цифры на правильных позициях
        int cows = 0;     // коровы - цифры есть в числе, но не на своих местах

        // подсчет сопадений
        int total_matches = 0;

        // счет совпадения цифр (без учета позиций)
        for (char digit = '0'; digit <= '9'; digit++)
        {
            int count_in_number = 0;
            int count_in_input = 0;

            for (int i = 0; i < 4; i++)
            {
                if (str_number[i] == digit) count_in_number++;
                if (str_input[i] == digit) count_in_input++;
            }

            // (сколько раз цифра встречается в обоих числах)
            // минимум из 2-х. 
            total_matches += min(count_in_number, count_in_input);
        }

        // Подсчет быков (цифры на правильных позициях)
        for (int i = 0; i < 4; i++)
        {
            if (str_number[i] == str_input[i])
            {
                bulls++;
            }
        }

        // Коровы = все совпадения - быки
        cows = total_matches - bulls;

        cout << "\nБыков: " << bulls << ", Коров: " << cows << endl;

        if (bulls == 4)
        {
            cout << "Вы угадали число!\n";
            break;
        }
        else
        {
            cout << "Желаете продолжить? (n/y): ";
            cin >> new_attempt;
        }

    } while (new_attempt != 'n' && new_attempt != 'N');

    cout << "\n\tЗавершение программы!\n\n";

    return 0;
}
