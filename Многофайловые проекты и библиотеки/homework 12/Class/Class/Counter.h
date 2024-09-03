#pragma once
#include <iostream>
#include <cstring>

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
