#pragma once
#include <iostream>
#include <string>
#include "triangle.h"

class square : public triangle {
private:
    int d;
    float D;

public:
    square();
    square(int side);

    void set_name(float A, float B, float C, float D);

    void info();
};