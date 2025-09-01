#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;

    cout << "Input the text: ";
    getline(cin, text);

    bool foundPattern = false;

    // Проверка строки на 1 символ
    if (text.length() == 1)
    {
        cout << "Yes" << endl;
        return 0;
    }

    // Проверяем все возможные длины подстрок
    for (int len = 1; len <= text.length() / 2; len++)
    {
        // Если длина строки делится нацело на длину подстроки
        if (text.length() % len == 0)
        {
            bool isRepeated = true;

            // Проверяем, повторяется ли эта подстрока по всей строке
            for (int i = len; i < text.length(); i += len)
            {
                // Сравниваем текущий сегмент с первым сегментом
                for (int j = 0; j < len; j++)
                {
                    if (text[i + j] != text[j])
                    {
                        isRepeated = false;
                        break;
                    }
                }
                if (!isRepeated)
                {
                    break;
                }
            }

            if (isRepeated)
            {
                foundPattern = true;
                break;
            }
        }
    }

    if (foundPattern)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}