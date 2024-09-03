#include <iostream>
#include <string>
#include <iostream>
#include "inition.h"
#include "triangle.h"
#include "square.h"





int main()
{
    setlocale(LC_ALL, "rus");


    int side, number;
    std::cout << "Сколько фигур рассматриваем?\n";
    std::cin >> number;
    for (int i = 0; i < number; i++)
    {
        std::cout << "Введите количество сторон: ";
        std::cin >> side;
        inition(side);
    }

    return 0;
}