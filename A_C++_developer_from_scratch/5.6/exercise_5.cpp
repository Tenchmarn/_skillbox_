#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "RUS");

    int A, B, C; // 1 коробка
    int M, N, K; // 2 коробка

    cout << "Введите длину 1 коробки: ";
    cin >> A;

    cout << "Введите ширину 1 коробки: ";
    cin >> B;

    cout << "Введите высоту 1 коробки: ";
    cin >> C;

    cout << "Введите длину 2 коробки: ";
    cin >> M;

    cout << "Введите ширину 2 коробки: ";
    cin >> N;

    cout << "Введите высоту 2 коробки: ";
    cin >> K;

    bool fits = false;

    if (A <= M && B <= N && C <= K) fits = true;
    else if (A <= M && B <= K && C <= N) fits = true;
    else if (A <= N && B <= M && C <= K) fits = true;
    else if (A <= N && B <= K && C <= M) fits = true;
    else if (A <= K && B <= M && C <= N) fits = true;
    else if (A <= K && B <= N && C <= M) fits = true;
    else
    {
        cout << "Ошибка!";
    }

    if (fits) 
    {
        cout << "Коробка в коробке!";
    }
    else 
    {
        cout << "Первая коробка не помещается во вторую!";
    }

    return 0;
}