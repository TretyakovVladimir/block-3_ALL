#include <iostream>
#include "square.h"

square::square() {};

square::square(int side) {
    set_side(side);
    std::cout << "������ ��� ���������������\n" << "������� ������� ����� ������! " << "\n������� ���� A: ";
    std::cin >> A;
    std::cout << "������� ���� B: ";
    std::cin >> B;
    std::cout << "������� ���� �: ";
    std::cin >> C;
    D = 360 - A - B - C;
    set_name(A, B, C, D);
    info();

};



void square::set_name(float A, float B, float C, float D) {

    if (A + B == 180 || B + C == 180 || C + D == 180) {
        if (A == 90 && B == 90 && C == 90) {
            /*               set_sidelong_1();*/
            std::cout << "������� ������� ������� � - ";
            std::cin >> a;
            c = a;
            std::cout << "������� ������� ������� b - ";
            std::cin >> b;
            d = b;
            if (a == b) { name = "�������"; }
            else { name = "�������������"; }
        }
        else if (A == C || B == C) // �=� ��� �=�
        {
            std::cout << "������� ������� ������� � - ";
            std::cin >> a;
            c = a;
            std::cout << "������� ������� ������� b - ";
            std::cin >> b;
            d = b;
            if (a == b) { name = "����"; }
            else { name = "��������������"; }

        }
        else if ((A == 90 && B == 90) || (C == 90 && D == 90) || (B == 90 && C == 90) || (A == 90 && D == 90)) {
            std::cout << "������� ������� ������� � - ";
            std::cin >> a;
            std::cout << "������� ������� ������� b - ";
            std::cin >> b;
            std::cout << "������� ������� ������� c - ";
            std::cin >> c;
            std::cout << "������� ������� ������� d - ";
            std::cin >> d;
            name = "������������� ��������";
        }
        else {
            std::cout << "������� ������� ������� � - ";
            std::cin >> a;
            std::cout << "������� ������� ������� b - ";
            std::cin >> b;
            std::cout << "������� ������� ������� c - ";
            std::cin >> c;
            std::cout << "������� ������� ������� d - ";
            std::cin >> d;
            name = "��������";
        }

    }
    else { name = "���������������"; }

}

void square::info() {
    std::cout << "��������� ��� ";
    std::cout << name << ":" << std::endl;
    std::cout << "����   :\t" << "A: " << A << "\tB: " << B << "\tC: " << C << "\tD: " << D << std::endl;
    std::cout << "�������:\t" << "a: " << a << "\tb: " << b << "\tc: " << c << "\td: " << d << std::endl;

}
