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

        int bulls = 0;    // быки - кол-во цифр совпадающих по значению и местоположению
        int cows = 0;     // коровы - кол-во цифр совпадающих по значению, но не по местоположению

        // Подсчет быков
        for (int i = 0; i < 4; i++)
        {
            if (str_number[i] == str_input[i])
            {
                bulls++;
            }
        }

        // Подсчет коров + ~вычет быков
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (i != j && str_number[i] == str_input[j])
                {
                    // Проверка позиции
                    bool is_bull = false;
                    for (int k = 0; k < 4; k++)
                    {
                        if (k == j && str_number[k] == str_input[k])
                        {
                            is_bull = true;
                            break;
                        }
                    }

                    if (!is_bull)
                    {
                        // Повторная проверка
                        bool already_counted = false;
                        for (int k = 0; k < i; k++)
                        {
                            if (str_number[k] == str_number[i])
                            {
                                already_counted = true;
                                break;
                            }
                        }

                        if (!already_counted)
                        {
                            cows++;
                            break; // переходим к следующей цифре загаданного числа
                        }
                    }
                }
            }
        }

        cout << "\nБыков: " << bulls << ", Коров: " << cows << endl;

        if (bulls == 4)
        {
            cout << "Вы угадали число!\n";
            break;
        }

        cout << "Желаете продолжить? (n/y): ";
        cin >> new_attempt;

    } while (new_attempt != 'n' && new_attempt != 'N');

    cout << "\n\n\tЗавершение программы!\n\n";

    return 0;
}