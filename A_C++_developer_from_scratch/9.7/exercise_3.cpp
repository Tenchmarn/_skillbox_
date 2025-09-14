#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    string str_input;
    int number_words = 0;
    bool in_word = false;

    cout << "Введите строку: ";
    getline(cin, str_input);

    for (int count = 0; count < str_input.length(); count++)
    {
        if (str_input[count] != ' ')
        {
            if (!in_word)
            {
                number_words++;
                in_word = true;
            }
        }
        else
        {
            in_word = false;
        }
    }

    cout << "Ответ: " << number_words << '\n';

    return 0;
}