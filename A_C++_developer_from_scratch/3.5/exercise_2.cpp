﻿#include <iostream>

int main() 
{
	int a = 42;
	int b = 153;
	std::cout << "a: " << a << "\n"; /* На экран будет выведено 42 */
	std::cout << "b: " << b << "\n"; /* На экран будет выведено 153 */

	/* Меняем значения */

	int c;
	c = a; 
	a = b;
	b = c;


	std::cout << "a: " << a << "\n"; /* На экран будет выведено 153 */
	std::cout << "b: " << b << "\n"; /* На экран будет выведено 42 */

	return 0;
}

// первоначальный алгоритм
/*
a = a + b; // a = 195
b = a - b; // b = 42
a = a - b; // a = 153
*/