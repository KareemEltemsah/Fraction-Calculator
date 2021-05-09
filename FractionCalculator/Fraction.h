#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED

class Fraction
{
private:
    int numerator;
    int denominator;
public:
    // constructors
    Fraction ();
    Fraction (int n, int d);

    Fraction operator + (Fraction F);// adding
    Fraction operator - (Fraction F);// subtracting
    Fraction operator * (Fraction F);// multiplying
    Fraction operator / (Fraction F);// dividing
    // comparing
    Fraction operator < (Fraction F);
    Fraction operator > (Fraction F);
    Fraction operator ==(Fraction F);
    Fraction operator <=(Fraction F);
    Fraction operator >=(Fraction F);
    // input & output
    friend std::istream& operator>> (std::istream& in , Fraction& f);
    friend std::ostream& operator<< (std::ostream& out , Fraction f);
    void reduce();// function to reduce fraction numbers
};
std::istream& operator>> (std::istream& in , Fraction& f);
std::ostream& operator<< (std::ostream& out , Fraction f);

#endif // FRACTION_H_INCLUDED
