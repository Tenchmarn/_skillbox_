#include <iostream>

int main() 
{
	setlocale(LC_ALL, "RUS");

	int productCost;	
	int deliveryCost;
	int discount;		

	std::cout << "Введите стоимость товара: ";
	std::cin >> productCost;

	std::cout << "Введите стоимость доставки: ";
	std::cin >> deliveryCost;

	std::cout << "Введите скидку от суммы: ";
	std::cin >> discount;

	int price = productCost + deliveryCost - discount;

	std::cout << "\nСтоимость товара: " << productCost << "\n";
	std::cout << "Cтоимость доставки: " << deliveryCost << "\n";
	std::cout << "Скидка: " << discount << "\n";
	std::cout << "---------\n";
	std::cout << "Итого: " << price << "\n";

}