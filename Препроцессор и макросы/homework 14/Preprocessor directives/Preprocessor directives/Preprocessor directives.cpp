#include <iostream>
#define MODE 1
#if MODE == 1
int add(int a, int b) {
	int c;
	c = a + b;
	return c;
}
#endif

#ifndef MODE
#error MODE укажите
#endif

int main(int argc, char** argv)
{

	setlocale(LC_ALL, "Russian");

#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;
	int a = 0;
	int b = 0;
	std::cout << "Введите число 1:" << std::endl;
	std::cin >> a;
	std::cout << "Введите число 2:" << std::endl;
	std::cin >> b;
	std::cout << "Результат сложения:" << add(a, b);
#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif

	return 0;

}