#include <iostream>
#include "triangle.h"

triangle::triangle() {};

triangle::triangle(int side){
    std::cout << "Хорошо это Треугольник\n Давайте уточним" << std::endl;
    do {
        std::cout << "Введите угол A: ";
        std::cin >> A;
        std::cout << "Введите угол B: ";
        std::cin >> B;
        if (A + B < 180) {}
        else { std::cout << "Ввели неверные данные, попробуйте еще раз" << std::endl; }
        C = 180 - A - B;
    } while (C <= 0);
    set_name(A, B, C);
    set_sitelong();
    info();
}

void triangle::set_name(float A, float B, float C) {


    if (A == 90 || B == 90 || C == 90) // или А или В или С =90 градусов 
    {
        std::cout << "\tугол С: " << C << std::endl;
        if (A == B || B == C || C == A) {
            name = "Прямоугольник равнобедренный";
        }
        else { name = "Прямоугольник"; }
    }
    else if (A == C && B == C) // А=С и В=С и А=С
    {
        std::cout << "\tугол С: " << C << std::endl;
        name = "Равноcторонний";
    }
    else if (A == B || B == C || C == A) // А=С или В=С или А=С
    {
        std::cout << "\tугол С: " << C << std::endl;
        name = "Равнобедренный";
    }
    else { name = "Треугольник"; }

};

void triangle::set_sitelong() {
    do {
        std::cout << "Введите a:";
        std::cin >> a;
        std::cout << "Введите b:";
        std::cin >> b;
        std::cout << "Введите c:";
        std::cin >> c;
        if (a + b < c && b + c < a && c + a < b) {
            std::cout << "Неверно ввели условие, сумма сторон не может быть больше третьей, повторите снова" << std::endl;
        }
    } while (a + b < c && b + c < a && c + a < b);
    std::cout << "будем считать что знаете, что вводите" << std::endl;
}

void triangle::info() {
    std::cout << "Результат это ";
    std::cout << name << ":" << std::endl;
    std::cout << "Углы   :\t" << "A: " << A << "\tB: " << B << "\tC: " << C << std::endl;
    std::cout << "Стороны:\t" << "a: " << a << "\tb: " << b << "\tc: " << c << std::endl;

}


void triangle::set_side(int side) {
    this->side = side;
}

int triangle::get_side() { return side; }

std::string triangle::get_name() { return name; }
