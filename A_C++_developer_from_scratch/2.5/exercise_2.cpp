#include <iostream>

using std::cout; // взятие объекта потока вывода cout из пространства имен

int main()
{
    setlocale(LC_ALL, "RUS");   // Функция для настройки региональных параметров

    int discount = 30;          // скидка
    int CostProduct = 1000;   // стоимость товара
    int CostDelivery = 1000;    // стоимость доставки

    cout << "Стоимость товара: " << CostProduct << '\n';
    cout << "Стоимость доставки: " << CostDelivery << '\n';
    cout << "Скидка: " << discount << '\n';

    int TotalCost = CostProduct + CostDelivery;
    int FinalCost = TotalCost - ((TotalCost / 100) * discount);

    cout << "Общая стоимость товара: " << FinalCost << '\n';

    return 0;
}
