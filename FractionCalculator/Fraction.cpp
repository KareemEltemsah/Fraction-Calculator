#include <iostream>
#include "Fraction.h"

Fraction::Fraction()
{
    nNumerator = 0;
    nDenominator = 0;
}
Fraction::Fraction(int n, int d)
{
    numerator = n;
    denominator = d;
}


std::istream& operator>> (std::istream& in , Fraction& f)
{
    char c;
    cin >> f.nNumerator >> c >> f.nDenominator;
    return in;
}
std::ostream& operator<< (std::ostream& out , Fraction f)
{
    cout << f.nNumerator << " / " << f.nDenominator;
    return out;
}
