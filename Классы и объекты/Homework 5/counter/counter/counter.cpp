#include <iostream>
#include <string>
#include <windows.h>

class Counter {
private:
    int init;

public:
    Counter() {};


    void print(char command) {
        if (command == '+' || command == '-' || command == '=') {
            if (command == '+') {
                set_init(init + 1);
                std::cout << get_init() << std::endl;
            }
            if (command == '-') {
                set_init(init - 1);
                std::cout << get_init() << std::endl;
            }
            if (command == '=') {
                set_init(init);
                std::cout << get_init() << std::endl;
            }
        }
        else {
            std::cout << "Досвидание";
        }

    }


    void set_init(int init) {
        this->init = init;
    }


    int get_init() {
        return init;
    }


};

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

}