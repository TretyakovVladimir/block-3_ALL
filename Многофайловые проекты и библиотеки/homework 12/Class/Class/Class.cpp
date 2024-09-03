#include <iostream>
#include <cstring>
#include <windows.h>
#include "Counter.h"



int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    

    Counter Z;

    std::string answer;
    char command;
    int init;
    std::cout << "Вы хотите указать начальное значение счетчика? Ввведите да или нет: ";
    std::cin >> answer;
    if (answer == "да" || answer == "Да") {
        std::cout << "Введите  начальное значение счетчика: ";
        std::cin >> init;
        Z.set_init(init);
    }
    else {
        Z.set_init(1);
    }

    std::cout << "Введите команду ('+', '-', '=' или 'x'): ";

    std::cout << "Принято начальное число счетчика = " << Z.get_init() << std::endl;
    do {
        std::cin >> command;
        Z.print(command);
    } while (command != 'x');

    return 0;
}

