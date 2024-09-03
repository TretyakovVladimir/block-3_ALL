#include <iostream>
#include <string>
#include "header.h"


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	int x;
	int y;
	int value;
	
	do {
		std::cout << "Введите первое число: " << std::endl;
		std::cin >> x;
		std::cout << "Введите второе число: " << std::endl;
		std::cin >> y;
		std::cout << "Введите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 0 - выйти): " << std::endl;
		std::cin >> value;
		if (value == 1) {
			std::cout << "Результат: " << sum(x, y) << std::endl;
		}
		else if (value == 2) {
			std::cout << "Результат: " << sub(x, y) << std::endl;
		}
		else if (value == 3) {
			std::cout << "Результат: " << sqr(x, y) << std::endl;
		}
		else if (value == 4) {
			std::cout << "Результат: " << d(x, y) << std::endl;
		}
		else if (value == 5) {
			std::cout << "Результат: "<< degree(x, y) << std::endl;
		}
	} 
	while (value != 0);


	return 0;

}