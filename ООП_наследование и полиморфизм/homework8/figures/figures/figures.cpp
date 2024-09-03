#include <iostream>
#include <string>




class object {
private:
    int side;
    std::string name;

public:

    void set_name(std::string name) {
        this->name = name;
    }

    void set_side(int side) {
        this->side = side;
    }

    int get_side() { return side; }

    std::string get_name() { return name; }

    void print() {
        std::cout << "Количество сторон: " << get_side() << " - " << get_name() << std::endl;
    }

public:
    object() {};
        object(int value) {
            set_name("Объект");
            set_side(value);
            print();
    }
    };


class triangle : public object {
public:
    triangle() {};
    triangle(int value) {
        set_name("Треугольник");
        set_side(value);
        print();
        
    }
   


};

 

class square : public object {
public:
    square() {};
    square(int value) {
        set_name("Четырехугольник");
        set_side(value);
        print();

    }
};

void inition(int side) {
    if (side != 3 && side != 4) {
        object(0);
    }
    else if (side == 3) {
        triangle(3);
    }
    else {
        square(4);
    }
}



int main()
{
    setlocale(LC_ALL, "rus");

    //int side;
    //std::cout << "Введите количество сторон: ";
    //std::cin >> side;
    //inition(side);

    inition(0);
    inition(3);
    inition(4);


        return 0;
}