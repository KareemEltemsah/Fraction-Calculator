#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED
#include <iostream>

class Fraction
{
private:
    int numerator;
    int denominator;
public:
    // constructors
    Fraction ();
    Fraction (int n, int d);
    // operations
    Fraction operator + (Fraction f);// adding
    Fraction operator - (Fraction f);// subtracting
    Fraction operator * (Fraction f);// multiplying
    Fraction operator / (Fraction f);// dividing
    // comparing
    bool operator < (Fraction f);
    bool operator > (Fraction f);
    bool operator ==(Fraction f);
    bool operator <=(Fraction f);
    bool operator >=(Fraction f);
    // input & output
    friend std::istream& operator>> (std::istream& in , Fraction& f);
    friend std::ostream& operator<< (std::ostream& out , Fraction f);
    void reduce();// function to reduce fraction numbers
};
std::istream& operator>> (std::istream& in , Fraction& f);
std::ostream& operator<< (std::ostream& out , Fraction f);

#endif // FRACTION_H_INCLUDED
