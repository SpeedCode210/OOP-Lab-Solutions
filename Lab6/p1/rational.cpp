#include "rational.h"
#include <numeric>
#include <string>
using namespace std;

RationalNumber::RationalNumber(int num, int den)
{
    if (den < 0)
    {
        num *= -1;
        den *= -1;
    }

    if (den == 0)
    {
        throw "Division by 0 is forbidden.";
    }

    int d = gcd(num, den);

    denominator = den / d;
    numerator = num / d;
}

RationalNumber RationalNumber::operator+(const RationalNumber &b)
{
    return RationalNumber(numerator * b.denominator + denominator * b.numerator, b.denominator * denominator);
}

RationalNumber RationalNumber::operator-(const RationalNumber &b)
{
    return RationalNumber(numerator * b.denominator - denominator * b.numerator, b.denominator * denominator);
}

RationalNumber RationalNumber::operator*(const RationalNumber &b)
{
    return RationalNumber(numerator * b.numerator, b.denominator * denominator);
}

RationalNumber RationalNumber::operator/(const RationalNumber &b)
{
    return RationalNumber(numerator * b.denominator, b.numerator * denominator);
}

RationalNumber RationalNumber::operator-()
{
    return RationalNumber(-numerator, denominator);
}

RationalNumber RationalNumber::operator+=(const RationalNumber &b)
{
    numerator, denominator = numerator * b.denominator + denominator * b.numerator, b.denominator * denominator;
    return *this;
}

RationalNumber &RationalNumber::operator++()
{
    numerator += denominator;
    return *this;
}

RationalNumber RationalNumber::operator++(int)
{
    RationalNumber temp = *this;
    numerator += denominator;
    return temp;
}

bool __rational_less(const RationalNumber &a, const RationalNumber &b)
{
    if (a.numerator < 0 and a.denominator >= 0)
        return true;
    if (a.numerator >= 0 and a.denominator <= 0)
        return false;
    return a.numerator * b.denominator < b.numerator * a.denominator;
}

ostream &operator<<(ostream &os, const RationalNumber &r)
{
    os << r.numerator;
    if(r.denominator != 1)
        os << "/" << r.denominator;
    return os;
}

bool RationalNumber::operator<(const RationalNumber &b)
{
    return __rational_less(*this, b);
}

bool RationalNumber::operator==(const RationalNumber &b)
{
    return numerator == b.numerator and denominator == b.denominator;
}

bool RationalNumber::operator>(const RationalNumber &b)
{
    return __rational_less(b, *this);
}

bool RationalNumber::operator>=(const RationalNumber &b)
{
    return !__rational_less(*this, b);
}

bool RationalNumber::operator<=(const RationalNumber &b)
{
    return !__rational_less(b, *this);
}

RationalNumber::operator int()
{
    return numerator/denominator;
}

RationalNumber::operator double()
{
    return (double)numerator/(double)denominator;
}

RationalNumber::operator string()
{
    return to_string(numerator) + (denominator == 1 ? "" : "/" +to_string(denominator));
}
