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
    this -> reduce();
}
int Fraction::getNumerator()
{
    return numerator;
}
Fraction Fraction::operator + (Fraction f)
{
    Fraction result;
    result.numerator = (numerator * f.denominator) + (f.numerator * denominator);
    result.denominator = denominator * f.denominator;
    result.reduce();
    return result;
}
Fraction Fraction::operator - (Fraction f)
{
    Fraction result;
    result.numerator = (numerator * f.denominator) - (f.numerator * denominator);
    result.denominator = denominator * f.denominator;
    result.reduce();
    return result;
}
Fraction Fraction::operator * (Fraction f)
{
    Fraction result;
    result.numerator = numerator * f.numerator;
    result.denominator = denominator * f.denominator;
    result.reduce();
    return result;
}
Fraction Fraction::operator / (Fraction f)
{
    Fraction result;
    result.numerator = numerator * f.denominator;
    result.denominator = denominator * f.numerator;
    result.reduce();
    return result;
}
bool Fraction::operator < (Fraction f)
{
    int y = (numerator * f.denominator) - (f.numerator * denominator);
    return (y < 0) ? true : false;
}
bool Fraction::operator > (Fraction f)
{
    int y = (numerator * f.denominator) - (f.numerator * denominator);
    return (y > 0) ? true : false;
}
bool Fraction::operator <= (Fraction f)
{
    int y = (numerator * f.denominator) - (f.numerator * denominator);
    return (y <= 0) ? true : false;
}
bool Fraction::operator >= (Fraction f)
{
    int y = (numerator * f.denominator) - (f.numerator * denominator);
    return (y >= 0) ? true : false;
}
bool Fraction::operator == (Fraction f)
{
    int y = (numerator * f.denominator) - (f.numerator * denominator);
    return (y == 0) ? true : false;
}
std::istream& operator>> (std::istream& in, Fraction& f)
{
    char c;
    cin >> f.numerator >> c >> f.denominator;
    return in;
}
std::ostream& operator<< (std::ostream& out, Fraction f)
{
    cout << f.numerator << " / " << f.denominator;
    return out;
}
void Fraction::reduce ()
{
    for (int i=max(numerator, denominator) ; i >= 2 ; i--)
    {
        if (numerator % i == 0 && denominator % i == 0)
        {
            numerator /= i;
            denominator /= i;
            break;
        }
    }
}
