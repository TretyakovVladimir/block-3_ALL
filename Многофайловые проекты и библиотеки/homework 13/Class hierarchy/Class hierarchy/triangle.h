#pragma once
#include <iostream>
#include <string>


class triangle {
protected:
    std::string name;
    int side;
    int a = 0, b = 0, c = 0;
    float A, B, C;

public:
    triangle();

    triangle(int side);

    void set_name(float A, float B, float C);

    void set_sitelong();

    void info();

    void set_side(int side);

    int get_side();

    std::string get_name();

};
