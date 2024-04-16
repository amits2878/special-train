#include <iostream>
using namespace std;

class Fraction {
    private:
        int numerator, denominator;

    public:
        Fraction () { cout << "created f3" << endl;}
        Fraction (int numerator, int denominator) : numerator (numerator), denominator (denominator) {}
        void print () const {
           ///cout << "numerator: " << numerator << endl;
            ///cout << "denominator: " << denominator << endl;
            cout << "Fraction: " << numerator <<"/"<< denominator << endl;
        }
        void add (Fraction const & f1, Fraction const & f2)  {
            int lcm = f1.denominator * f2.denominator;
            int resultNum1 = f2.numerator * (lcm / f2.denominator);
            int resultNum2 = f1.numerator * (lcm / f1.denominator);
            int resultNumerator = resultNum1 + resultNum2;

            numerator = resultNumerator;
            denominator = lcm;
            normalize();
        }
        void normalize () {
            int gcd = 1;
            int gFind = min (numerator, denominator);
            for (int i = 1; i <= gFind; i++) {
                if (numerator % i == 0 && denominator % i == 0) {
                    gcd = i;
                }
            }
            numerator = numerator / gcd;
            denominator = denominator / gcd;
        }
        void multiply (Fraction const & f1, Fraction const & f2) {
            numerator = f1.numerator * f2.numerator;
            denominator = f1.denominator * f2.denominator;
            normalize();
        }

};

int main () {
    Fraction f1 (10, 2);
    Fraction f2 (15, 4);
    Fraction f3;

    f3.add(f1, f2);
    f3.print();
    f3.multiply(f1, f2);
    f1.print();
    f2.print();
    f3.print();
    return 0;
}
