#include "Fraction.h"
#include <iostream>

using namespace std;

Fraction::Fraction()
{
    numerator = 0;
    denominator = 0;
}
Fraction::Fraction(int n, int d)
{
    numerator = n;
    denominator = d;
}
Fraction Fraction::operator+ (Fraction f)
{
    Fraction result;
    result.numerator = (numerator * f.denominator) + (f.numerator * denominator);
    result.denominator = denominator * f.denominator;
    return result;
}
Fraction Fraction::operator- (Fraction f)
{
    Fraction result;
    result.numerator = (numerator * f.denominator) - (f.numerator * denominator);
    result.denominator = denominator * f.denominator;
    return result;
}
std::istream& operator>> (std::istream& in , Fraction& f)
{
    char c;
    cin >> f.numerator >> c >> f.denominator;
    return in;
}
std::ostream& operator<< (std::ostream& out , Fraction f)
{
    cout << f.numerator << " / " << f.denominator;
    return out;
}
