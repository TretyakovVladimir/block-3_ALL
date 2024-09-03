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
    bool operator==(Fraction op_r) {
        int num = numerator_ * op_r.denominator_;
        int num_op_r = op_r.numerator_ * denominator_;
        return num == num_op_r;
    }
    bool operator!=(Fraction op_r) {
        return !(*this == op_r);
    }

    bool operator<(Fraction op_r) {
        int num = numerator_ * op_r.denominator_;
        int num_op_r = op_r.numerator_ * denominator_;
        return num < num_op_r;
    }
    bool operator>(Fraction op_r) {
        return    op_r < *this;
    }
    bool operator<=(Fraction op_r) {
        return !(*this > op_r);
    }
    bool operator>=(Fraction op_r) {
        return !(*this < op_r);
    }
};

int main()
{
    Fraction f1(7, 11);
    Fraction f2(6, 11);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << "\n";
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    return 0;
}