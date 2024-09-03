#include <iostream>

class Fraction
{
private:
    int numerator_;
    int denominator_;

public:
    Fraction(int numerator, int denominator)
    {
        numerator_ = numerator;
        denominator_ = denominator;
    }
   

    Fraction operator+(const Fraction& op_l) {
        int numerator = numerator_ * op_l.denominator_ + op_l.numerator_ * denominator_;
        int denominator = denominator_ * op_l.denominator_;

        check(numerator_, denominator_, op_l.numerator_, op_l.denominator_, numerator, denominator);

        return Fraction(numerator, denominator);
    }

    Fraction operator-(Fraction op_l) {
        int numerator = numerator_ * op_l.denominator_ - op_l.numerator_ * denominator_;
        int denominator = denominator_ * op_l.denominator_;

        check(numerator_, denominator_, op_l.numerator_, op_l.denominator_, numerator, denominator);

        return Fraction(numerator, denominator);
    }

    Fraction operator*(Fraction op_l) {
        int numerator = numerator_ * op_l.numerator_;
        int denominator = denominator_ * op_l.denominator_;

        check(numerator_, denominator_, op_l.numerator_, op_l.denominator_, numerator, denominator);

        return Fraction(numerator, denominator);
    }

    Fraction operator/(Fraction op_l) {
        int numerator = numerator_ * op_l.denominator_;
        int denominator = denominator_ * op_l.numerator_;

        check(numerator_, denominator_, op_l.numerator_, op_l.denominator_, numerator, denominator);
        return Fraction(numerator, denominator);
    }

    Fraction& operator++() {
        numerator_ = numerator_ + denominator_;
        return *this;
    }



    Fraction operator++(int) {
        numerator_ = numerator_ + denominator_;
        Fraction copy = *this;

        return copy;
    }

    Fraction& operator--() {
        numerator_ = numerator_ - denominator_;;

        return *this;
    }

    Fraction operator--(int) {
        Fraction copy = *this;
        --(*this);
        return copy;
    }

    void check(int  a_n, int a_d, int b_n, int b_d, int& C_n, int& C_d) {
        if ((C_n) % a_d == 0 && C_d % a_d == 0) {
            C_n = C_n / a_d;
            C_d = C_d / a_d;
        }
        else if (C_n % b_d == 0 && C_d % b_d == 0) {
            C_n = C_n / b_d;
            C_d = C_d / b_d;
        }
    }


    friend  void print(Fraction f1, Fraction f2, Fraction f3, std::string operation) {
        std::cout << f1.numerator_ << "/" << f1.denominator_ << operation << f2.numerator_ << "/" << f2.denominator_ << " = " << (f3).numerator_ << "/" << (f3).denominator_ << std::endl;;
    }

    friend void print(Fraction f1) {
        std::cout << f1.numerator_ << "/" << f1.denominator_ << std::endl;
    }
};



int main()
{
    setlocale(LC_ALL, "rus");

    int a_n, a_d, b_n, b_d;
    std::cout << "Введите числитель 1-ой дроби: ";
    std::cin >> a_n;
    std::cout << "Введите знаменатель 1-ой дроби: ";
    std::cin >> a_d;
    std::cout << "Введите числитель 2-ой дроби: ";
    std::cin >> b_n;
    std::cout << "Введите знаменатель 2-ой дроби: ";
    std::cin >> b_d;



    Fraction f1(a_n, a_d);
    Fraction f2(b_n, b_d);
    Fraction f3(7, 4);

    print(f1, f2, f1 + f2, " + ");
    print(f1, f2, f1 - f2, " - ");
    print(f1, f2, f1 * f2, " * ");
    print(f1, f2, f1 / f2, " / ");
    std::cout << "Значение дроби 1 = "; print(f1);
    print(f1, f2, ++f1 * f2, " (++prefix) * ");
    std::cout << "Значение дроби 1 = "; print(f1);
    print(f1, f2, f1-- * f2, " (postfix--) * ");
    std::cout << "Значение дроби 1 = "; print(f1);
    print(--f1);
    print(f1);
    print(f1--);
    print(f1);

    return 0;
}