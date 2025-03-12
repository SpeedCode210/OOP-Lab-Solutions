#ifndef H_RATIONAL
#define H_RATIONAL
#include <ostream>
#include <string>
using std::ostream;
using std::string;

class RationalNumber
{
    friend bool __rational_less(const RationalNumber &a, const RationalNumber &b);
    friend ostream& operator<<(ostream& os, const RationalNumber& dt);

public:
    RationalNumber(int num = 0, int den = 1);
    RationalNumber operator+(const RationalNumber &);
    RationalNumber operator-(const RationalNumber &);
    RationalNumber operator*(const RationalNumber &);
    RationalNumber operator/(const RationalNumber &);
    RationalNumber operator-();
    RationalNumber operator+=(const RationalNumber &);
    RationalNumber &operator++();
    RationalNumber operator++(int);
    bool operator<(const RationalNumber &);
    bool operator==(const RationalNumber &);
    bool operator>(const RationalNumber &);
    bool operator>=(const RationalNumber &);
    bool operator<=(const RationalNumber &);
    operator int();
    operator double();
    operator string();

private:
    int numerator;
    int denominator;
};

#endif