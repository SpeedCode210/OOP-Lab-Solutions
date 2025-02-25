#include <iostream>
#include <numeric>
#include <cmath>
#include "rational.h"

Rational::Rational(long long num, long long den)
{
    numerator = num;
    denominator = den;
    if (den < 0){
        den *= -1;
        num *= -1;
    }
    reduce();
}

void Rational::reduce()
{
    long long d = std::gcd(numerator, denominator);
    numerator /= d;
    denominator /= d;
}

Rational Rational::operator+(const Rational &b)
{
    auto x = Rational(numerator*b.denominator + b.numerator*denominator, b.denominator*denominator);
    x.reduce();
    return x;
}

Rational Rational::operator-(const Rational &b)
{
    auto x = Rational(numerator*b.denominator - b.numerator*denominator, b.denominator*denominator);
    x.reduce();
    return x;
}

Rational Rational::operator*(const Rational &b)
{
    auto x = Rational(numerator*b.numerator, b.denominator*denominator);
    x.reduce();
    return x;
}

Rational Rational::operator/(const Rational &b)
{
    auto x = Rational(numerator*b.denominator, b.numerator*denominator);
    x.reduce();
    return x;
}

bool Rational::operator==(const Rational &b)
{
    return numerator == b.numerator and denominator == b.denominator;
}

void Rational::print(bool decimal)
{
    if(decimal) std::cout << (double)numerator/(double)denominator;
    else std::cout << numerator << '/' << denominator;
}

double sqrt(const Rational &b){
    return std::sqrt(b.numerator)/std::sqrt(b.denominator);
}