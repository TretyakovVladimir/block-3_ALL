#include <iostream>
#include "square.h"

square::square() {};

square::square(int side) {
    set_side(side);
    std::cout << "Хорошо это четырехугольник\n" << "Давайте уточним какой именно! " << "\nВведите угол A: ";
    std::cin >> A;
    std::cout << "Введите угол B: ";
    std::cin >> B;
    std::cout << "Введите угол С: ";
    std::cin >> C;
    D = 360 - A - B - C;
    set_name(A, B, C, D);
    info();

};



void square::set_name(float A, float B, float C, float D) {

    if (A + B == 180 || B + C == 180 || C + D == 180) {
        if (A == 90 && B == 90 && C == 90) {
            /*               set_sidelong_1();*/
            std::cout << "Давайте уточним сторону а - ";
            std::cin >> a;
            c = a;
            std::cout << "Давайте уточним сторону b - ";
            std::cin >> b;
            d = b;
            if (a == b) { name = "Квадрат"; }
            else { name = "Прямоугольник"; }
        }
        else if (A == C || B == C) // А=С или В=С
        {
            std::cout << "Давайте уточним сторону а - ";
            std::cin >> a;
            c = a;
            std::cout << "Давайте уточним сторону b - ";
            std::cin >> b;
            d = b;
            if (a == b) { name = "Ромб"; }
            else { name = "Параллерограмм"; }

        }
        else if ((A == 90 && B == 90) || (C == 90 && D == 90) || (B == 90 && C == 90) || (A == 90 && D == 90)) {
            std::cout << "Давайте уточним сторону а - ";
            std::cin >> a;
            std::cout << "Давайте уточним сторону b - ";
            std::cin >> b;
            std::cout << "Давайте уточним сторону c - ";
            std::cin >> c;
            std::cout << "Давайте уточним сторону d - ";
            std::cin >> d;
            name = "Прямоугольная трапеция";
        }
        else {
            std::cout << "Давайте уточним сторону а - ";
            std::cin >> a;
            std::cout << "Давайте уточним сторону b - ";
            std::cin >> b;
            std::cout << "Давайте уточним сторону c - ";
            std::cin >> c;
            std::cout << "Давайте уточним сторону d - ";
            std::cin >> d;
            name = "Трапеция";
        }

    }
    else { name = "Четырехугольник"; }

}

void square::info() {
    std::cout << "Результат это ";
    std::cout << name << ":" << std::endl;
    std::cout << "Углы   :\t" << "A: " << A << "\tB: " << B << "\tC: " << C << "\tD: " << D << std::endl;
    std::cout << "Стороны:\t" << "a: " << a << "\tb: " << b << "\tc: " << c << "\td: " << d << std::endl;

}
