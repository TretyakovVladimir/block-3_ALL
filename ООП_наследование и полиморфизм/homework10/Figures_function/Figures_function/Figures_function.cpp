#include <iostream>
#include <string>

class object {
private:
    int side;
    std::string boolside;
    std::string name;

protected:

    void set_name(std::string name) {
        this->name = name;
    }

    void set_side(int side) {
        this->side = side;
    }

    void set_boolside(std::string boolside) {
        this->boolside = boolside;
    }

    std::string get_boolside() {
        return boolside;
    }

    int get_side() { return side; }

    std::string get_name() { return name; }

    virtual void print() {
        std::cout << get_name() << ":" << std::endl;
        std::cout << get_boolside() << std::endl;
        std::cout << "Количество сторон : " << get_side() << std::endl;
    }

    virtual bool check() {
        if (get_side() == 0) {
            return true;
        }
        else { return false; }
    }

    void check_set_boolsede() {
        if (check()) {
            if (get_side() == 3 || get_side() == 4) {
                set_boolside("Правильный");
            }
            else { set_boolside("Правильная"); }
            
        }
        else {
            if (get_side() == 3 || get_side() == 4) {
                set_boolside("Неправильный");
            }
            else { set_boolside("Неправильная"); }
             }
    }


public:
    object() {};
    object(int side) {
        set_side(side);
        set_name("Фигура");
        std::cout << "\nПроверка " << get_side() << std::endl;
        check_set_boolsede();
        print();
    }

};


class triangle : public object {
protected:
    int a, b, c;
    float A, B, C;
public:
    triangle() {};
    triangle(int side) {
        set_name("Треугольник");

        print();

    }
    triangle(int side, int a, int b, int c, float A, float B, float C) {
        set_side(side);
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;

        set_name_engle(A, B, C);
        check_set_boolsede();
        print();
    }
    bool check_side_ABC180() {
        if (static_cast<int>(A + B + C)==  180 && get_side() == 3) {
            return true;
        }
        else { return false;}
    }
    bool check_egle_C() {
        if (C == 90) {
            return true;
        }
        else { return false; }
    }
    bool check_ac_AC() {
        if (a == c && A == C) {
            return true;
        }
        else { return false; }
    }
    bool check_abc_ABC() {
        if (a == b && b == c && c == a && A == B && B == C && C == A) {
            return true;
        }
        else { return false; }
    }

    bool check() override {
            if ((get_name() == "Прямоугольник" || get_name() == "Прямоугольник равнобедренный") && check_side_ABC180() && check_egle_C() && get_side() == 3) {
                return true;
            }
            else if (get_name() == "Прямоугольник равнобедренный" && check_side_ABC180()  && check_egle_C() && check_ac_AC() && get_side() == 3) {
                return true;
            }
            else if (get_name() == "Равнобедренный" && check_side_ABC180() && check_ac_AC() && get_side() == 3) {
                return true;
            }
            else if (get_name() == "Равностронний" && check_side_ABC180() && check_abc_ABC() && get_side() == 3) {
                return true;
            }
            else if (get_name() == "Треугольник" && check_side_ABC180() && get_side() == 3) {
                return true;
            }
            else { return false; }

    }


    void set_name_engle(float A, float B, float C) {

        if (A == 90 || B == 90 || C == 90) // или А или В или С =90 градусов 
        {
            if (A == B || B == C || C == A) {
                set_name("Прямоугольник равнобедренный");
            }
            else { set_name("Прямоугольник"); }
        }
        else if (A == C && B == C) // А=С и В=С и А=С
        {
            set_name("Равноcторонний");
        }
        else if (A == B || B == C || C == A) // А=С или В=С или А=С
        {
            set_name("Равнобедренный");
        }
        else { set_name("Треугольник"); }
    };

    void print() override {
        std::cout << get_name() << ":"<< std::endl;
        std::cout << get_boolside() << std::endl;
        std::cout << "Количество сторон: " << get_side() << std::endl;
        std::cout << "Cтороны: " << "a= " << a << "\tb= " << b << "\tc= " << c << std::endl;
        std::cout << "Углы: " << "A= " << A << "\tB= " << B << "\tC= " << C << std::endl;
    }

};


class square : public triangle {
private:
    int d;
    float D;
public:
    square() {};
    square(int side) {
        set_name("Четырехугольник");
        set_side(side);
 
        print();

    }
    square(int side, int a, int b,int c, int d, float A, float B, float C, float D ) {
       
        set_side(side);
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        set_name_q(a,b,c,d,A,B,C,D);
        check_set_boolsede();
        print();

    }

    bool check_side_ABCD360() {
        if (static_cast<int>(A + B + C + D) == 360 && get_side() == 4) {
            return true;
        }
        else { return false; }
    }

    bool check_abcd_AC_BD() {
        if (a == c && b == a && a == d && A == C && B == D) {
            return true;
        }
        else { return false; }
    }

    bool check_abcd_90ACBD() {
        if ((A == 90 && A==B && B==C && C == D) && (a == c && a == b && a == d)) {
            return true;
        }
        else { return false; }
    }

    bool check_ac_bd_90ACBD() {
        if ((A == 90 && A == B && B == C && C == D) && (a == c && b == d && a != b)) {
            return true;
        }
        else { return false; }
    }

    bool check() override {
        if (get_name() == "Квадрат" && check_side_ABCD360() && check_abcd_90ACBD()) {
            return true;
        }
        else if (get_name() == "Прямоугольник" && check_side_ABCD360() && check_ac_bd_90ACBD()) {
            return true;
        }
        else if (get_name() == "Равнобедренный" && check_side_ABCD360() && check_ac_AC()) {
            return true;
        }
        else if (get_name() == "Ромб" && check_side_ABCD360() && check_abcd_AC_BD()) {
            return true;
        }
        else if (get_name() == "Четырехугольник" && check_side_ABCD360()) {
            return true;
        }
        else { return false; }
    }

        void set_name_q(int a, int b, int c, int d, float A, float B, float C, float D) {

            if (A + B == 180 || B + C == 180 || C + D == 180) {
                if (A == 90 && B == 90 && C == 90) {
                    if (c == a && d == b); {
                        if (a == b) { set_name("Квадрат"); }
                        else { set_name("Прямоугольник"); }
                    }

                }
                else if (A == C || B == C) // А=С или В=С
                {
                    if (c == a && d == b) {
                        if (a == b) { set_name("Ромб"); }
                        else { set_name("Параллерограмм"); }
                    }
                }
                else if ((A == 90 && B == 90) || (C == 90 && D == 90) || (B == 90 && C == 90) || (A == 90 && D == 90)) {

                    set_name("Прямоугольная трапеция");
                }
                else {
                    set_name("Трапеция");
                }

            }
            else { set_name("Четырехугольник"); }

        }

    void print() override {
        std::cout << get_name() << ":" << std::endl;
        std::cout << get_boolside() << std::endl;
        std::cout << "Количество сторон: " << get_side() << std::endl;
        std::cout << "Cтороны: " << "a= " << a << "\tb= " << b << "\tc= " << c << "\td= " << d << std::endl;
        std::cout << "Углы: " << "A= " << A << "\tB= " << B << "\tC= " << C << "\tD=" << D << std::endl;
    }
};



void inition(int side) {
    if (side != 3 && side != 4) {
        object A(side);
    }
    else if (side == 3) {
        triangle B(3);
    }
    else {
        square C(4);
    }
}

void inition(int side, int a, int b, int c, float A, float B, float C) {
    triangle(side, a, b, c, A, B, C);
}

void inition(int side, int a, int b, int c, int d, float A, float B, float C, float D) {
    square(side, a, b, c, d, A, B, C, D);
}

int main()
{
    setlocale(LC_ALL, "rus");

    // фигура правильная
	inition(0);

    // треугольник правильный
	inition(3, 10, 20, 30, 50, 60, 70 );
    // прямоугольник неправильный
    inition(3, 10, 20, 50, 50, 60, 90);
    // прямоугольник правильный
    inition(3, 10, 20, 30, 50, 40, 90);
    // Равнобедренный неправильный
    inition(3, 10, 20, 10, 50, 60, 50);
    // Равносторонний правильный
    inition(3, 30, 30, 30, 60, 60, 60); 

    // Четырехугольник правильный
    inition(4, 20, 20, 20, 20, 90, 90, 90, 90);
    // Прямоугольник правильный
    inition(4, 10, 20, 10, 20, 90, 90, 90, 90);
    // Квадрат правильный
    inition(4, 20, 20, 20, 20, 90, 90, 90, 90);
    // Параллелограмм неправильный
    inition(4, 20, 30, 20, 30, 30, 40, 30, 40);
    // Ромб неправильный
    inition(4, 30, 30, 30, 30, 30, 40, 30, 40);
	
}