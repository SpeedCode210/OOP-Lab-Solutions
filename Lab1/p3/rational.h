#ifndef H_RATIONAL
#define H_RATIONAL
class Rational
{
    friend double sqrt(const Rational &b);
public:
    Rational(long long num = 0, long long den = 1);
    void reduce();
    Rational operator+(const Rational &b);
    Rational operator-(const Rational &b);
    Rational operator*(const Rational &b);
    Rational operator/(const Rational &b);
    bool operator==(const Rational &b);
    void print(bool decimal = false);

private:
    long long numerator, denominator;
};
#endif