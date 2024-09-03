#include <iostream>
#include "triangle.h"

triangle::triangle() {};

triangle::triangle(int side){
    std::cout << "������ ��� �����������\n ������� �������" << std::endl;
    do {
        std::cout << "������� ���� A: ";
        std::cin >> A;
        std::cout << "������� ���� B: ";
        std::cin >> B;
        if (A + B < 180) {}
        else { std::cout << "����� �������� ������, ���������� ��� ���" << std::endl; }
        C = 180 - A - B;
    } while (C <= 0);
    set_name(A, B, C);
    set_sitelong();
    info();
}

void triangle::set_name(float A, float B, float C) {


    if (A == 90 || B == 90 || C == 90) // ��� � ��� � ��� � =90 �������� 
    {
        std::cout << "\t���� �: " << C << std::endl;
        if (A == B || B == C || C == A) {
            name = "������������� ��������������";
        }
        else { name = "�������������"; }
    }
    else if (A == C && B == C) // �=� � �=� � �=�
    {
        std::cout << "\t���� �: " << C << std::endl;
        name = "�����c��������";
    }
    else if (A == B || B == C || C == A) // �=� ��� �=� ��� �=�
    {
        std::cout << "\t���� �: " << C << std::endl;
        name = "��������������";
    }
    else { name = "�����������"; }

};

void triangle::set_sitelong() {
    do {
        std::cout << "������� a:";
        std::cin >> a;
        std::cout << "������� b:";
        std::cin >> b;
        std::cout << "������� c:";
        std::cin >> c;
        if (a + b < c && b + c < a && c + a < b) {
            std::cout << "������� ����� �������, ����� ������ �� ����� ���� ������ �������, ��������� �����" << std::endl;
        }
    } while (a + b < c && b + c < a && c + a < b);
    std::cout << "����� ������� ��� ������, ��� �������" << std::endl;
}

void triangle::info() {
    std::cout << "��������� ��� ";
    std::cout << name << ":" << std::endl;
    std::cout << "����   :\t" << "A: " << A << "\tB: " << B << "\tC: " << C << std::endl;
    std::cout << "�������:\t" << "a: " << a << "\tb: " << b << "\tc: " << c << std::endl;

}


void triangle::set_side(int side) {
    this->side = side;
}

int triangle::get_side() { return side; }

std::string triangle::get_name() { return name; }
