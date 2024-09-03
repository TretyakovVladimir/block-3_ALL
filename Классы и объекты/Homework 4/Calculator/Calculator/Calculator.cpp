#include <iostream>

class calculator
{
public:
    double num1;
    double num2;
    double add() { return num1 + num2; }
    double multiply() { return num1 * num2; }
    double subtract_1_2() { return num1 - num2; }
    double subtract_2_1() { return num2 - num1; }
    double divide_1_2() { return num1 / num2; }
    double divide_2_1() { return num2 / num1; }
    bool set_num1(double num1) {
        this->num1 = num1;
        if (num1 != 0) { return true; }
        else {
            std::cout << "Неверный ввод!\n";
            return false;
        }
    }
    bool set_num2(double num2) {
        this->num2 = num2;
        if (num2 != 0) {
            return true;
        }
        else {
            std::cout << "Неверный ввод!\n";
            return false;
        }
    }
    void out() {
        std::cout << "num1 + num2 = " << add() << std::endl;
        std::cout << "num1 - num2 = " << subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << multiply() << std::endl;
        std::cout << "num1 / num2 = " << divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << divide_2_1() << std::endl;
    }
};

//void out(calculator& c) {
//    std::cout << "num1 + num2 = " << c.add() << std::endl;
//    std::cout << "num1 - num2 = " << c.subtract_1_2() << std::endl;
//    std::cout << "num2 - num1 = " << c.subtract_2_1() << std::endl;
//    std::cout << "num1 * num2 = " << c.multiply() << std::endl;
//    std::cout << "num1 / num2 = " << c.divide_1_2() << std::endl;
//    std::cout << "num2 / num1 = " << c.divide_2_1() << std::endl;
//}


int main(int argc, char** argv)
{
    setlocale(LC_ALL, "rus");
    double aNum1, aNum2;
    std::cout << "Введите Num1: ";
    std::cin >> aNum1;
    std::cout << "Введите Num2: ";
    std::cin >> aNum2;

    calculator c;
    c.set_num1(aNum1);
    c.set_num2(aNum2);
    c.out();
    do {
        std::cout << "Введите Num1: ";
        std::cin >> aNum1;
        c.set_num1(aNum1);
    } while (aNum1 == 0);

    do {
        std::cout << "Введите Num2: ";
        std::cin >> aNum2;
        c.set_num2(aNum2);
    } while (aNum2 == 0);
    std::cout << std::endl;
    c.out();
    return 0;
}


