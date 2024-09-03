#include <iostream>
#include <string>


//    void print() {
//        std::cout << "Количество сторон: " << get_side() << " - " << get_name() << std::endl;
//    }



class triangle {
protected:
    std::string name;
    int side;
    int a=0, b=0, c=0;
    float A,B,C;

public:
    triangle() {};
    triangle(int side) {
        std::cout << "Хорошо это Треугольник\n Давайте уточним"<< std::endl;
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
      /*      std::cout << get_name() << std::endl;*/
            info();
        }
    
    void set_name(float A, float B, float C) {
               
      
           if (A == 90 || B == 90 || C == 90) // или А или В или С =90 градусов 
        {
               std::cout << "\tугол С: " << C << std::endl;
               if (A == B || B == C || C == A) {
                   name = "Прямоугольник равнобедренный";
               }
               else {name = "Прямоугольник"; }
        }
        else if (A == C && B == C) // А=С и В=С и А=С
        {
            std::cout << "\tугол С: " << C<< std::endl;
            name = "Равноcторонний";
        }
        else if ( A == B || B == C || C == A) // А=С или В=С или А=С
        {
               std::cout << "\tугол С: " << C << std::endl;
               name = "Равнобедренный";
        }
        else { name = "Треугольник"; }
        
    };

    void set_sitelong() {
        do {
            std::cout << "Введите a:";
            std::cin >> a;
            std::cout << "Введите b:";
            std::cin >> b;
            std::cout << "Введите c:";
            std::cin >> c;
            if (a + b < c && b + c < a && c + a < b) {
                std::cout << "Неверно ввели условие, сумма сторон не может быть больше третьей, повторите снова"<< std::endl;
            }
        } while (a + b < c && b + c < a && c + a < b);
            std::cout << "будем считать что знаете, что вводите"<< std::endl;
    }

    void info() {
        std::cout << "Результат это ";
        std::cout << name << ":" << std::endl;
        std::cout << "Углы   :\t" << "A: " << A << "\tB: " << B << "\tC: " << C << std::endl;
        std::cout << "Стороны:\t" << "a: " << a << "\tb: " << b << "\tc: " << c << std::endl;

    }


    void set_side(int side) {
                this->side = side;
            }
    int get_side() { return side; }

    std::string get_name() { return name; }

    };


    class square : public triangle {
    private:
        int d;
        float D;

    public:
        square() {};
        square(int side) {
            set_side(side);
            std::cout << "Хорошо это четырехугольник\n" << "Давайте уточним какой именно! " << "\nВведите угол A: ";
            std::cin >> A;
            std::cout << "Введите угол B: ";
            std::cin >> B;
            std::cout << "Введите угол С: ";
            std::cin >> C;
            D = 360 - A - B - C;
            set_name(A, B, C, D);
           /* std::cout << get_name();*/
            info();

        };


        void set_name(float A, float B, float C, float D) {

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
                    name = "Трапеция"; }
               
            }
            else { name = "Четырехугольник"; }

        }

        void info() {
            std::cout << "Результат это ";
            std::cout << name << ":" << std::endl;
            std::cout << "Углы   :\t" << "A: " << A << "\tB: " << B << "\tC: " << C << "\tD: " << D << std::endl;
            std::cout << "Стороны:\t" << "a: " << a << "\tb: " << b << "\tc: " << c << "\td: " << d << std::endl;

        }
    };

void inition(int side) {
    if (side == 3) {
        triangle(3);
    }
    else if (side == 4) {
        square(4);
    }
    else {
        std::cout << "Такая фигура не предусмотрена\n";
    }
}



int main()
{
    setlocale(LC_ALL, "rus");

    int side, number;
    std::cout << "Сколько фигур рассматриваем?\n";
        std::cin >> number;
        for (int i=0; i<number; i++)
        {
            std::cout << "Введите количество сторон: ";
            std::cin >> side;
            inition(side);
        }

    

    return 0;
}