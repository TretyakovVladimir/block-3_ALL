#include "inition.h"

void inition(int side) {
    if (side == 3) {
        triangle a(3);
    }
    else if (side == 4) {
        square b(4);
    }
    else {
        std::cout << "Такая фигура не предусмотрена\n";
    }
}