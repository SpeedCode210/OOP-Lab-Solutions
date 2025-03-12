#include "poly.h"
#include <bits/stdc++.h>
using namespace std;

Polynomial::Polynomial()
{
    fill(exponents, exponents + 100, -1);
    fill(coefficients, coefficients + 100, -1);
}

Polynomial Polynomial::operator+(const Polynomial &b)
{
    Polynomial P;
    map<int, int> cache;
    for (int i = 0; i < 100; i++)
    {
        if (exponents[i] != -1)
            cache[exponents[i]] += coefficients[i];
        if (b.exponents[i] != -1)
            cache[b.exponents[i]] += b.coefficients[i];
    }
    int p = 0;
    for (auto &x : cache)
    {
        P.coefficients[p] += x.second;
        P.exponents[p] += x.first;
        p++;
    }

    return P;
}

Polynomial Polynomial::operator-(const Polynomial &b)
{
    Polynomial P;
    map<int, int> cache;
    for (int i = 0; i < 100; i++)
    {
        if (exponents[i] != -1)
            cache[exponents[i]] += coefficients[i];
        if (b.exponents[i] != -1)
            cache[b.exponents[i]] += b.coefficients[i];
    }
    int p = 0;
    for (auto &x : cache)
    {
        P.coefficients[p] += x.second;
        P.exponents[p] -= x.first;
        p++;
    }

    return P;
}

Polynomial Polynomial::operator*(const Polynomial &b)
{
    Polynomial P;
    map<int, int> cache;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (exponents[i] != -1 and exponents[j] != -1)
                cache[exponents[i] + exponents[j]] += coefficients[i] * coefficients[j];
        }
    }
    int p = 0;
    for (auto &x : cache)
    {
        P.coefficients[p] += x.second;
        P.exponents[p] -= x.first;
        p++;
    }

    return P;
}

const Polynomial Polynomial::operator=(const Polynomial &b)
{
    for (int i = 0; i < 100; i++)
    {
        exponents[i] = b.exponents[i];
        coefficients[i] = b.coefficients[i];
    }
    return *this;
}

Polynomial &Polynomial::operator+=(const Polynomial &b)
{
    auto P = *this + b;
    *this = P;
    return *this;
}

Polynomial &Polynomial::operator-=(const Polynomial &b)
{
    auto P = *this - b;
    *this = P;
    return *this;
}

Polynomial &Polynomial::operator*=(const Polynomial &b)
{
    auto P = *this * b;
    *this = P;

    return *this;
}

void Polynomial::enterTerms()
{
    int p = 0;
    while (true)
    {
        cout << "Enter a monome ax^i (a i) :\n";
        int a, i;
        cin >> a;
        if (a == 0)
            break;
        cin >> i;
        coefficients[p] = a;
        exponents[p] = i;
        p++;
    }
}

void Polynomial::printPolynomial()
{
    bool flag = false;
    for (int i = 0; i < 100; i++)
    {
        if (exponents[i] == -1)
            continue;
        if (flag)
            cout << " + ";
        cout << "x^" << exponents[i];
        flag = true;
    }
}

void Polynomial::polynomialCombine()
{
    map<int, int> cache;
    for (int i = 0; i < 100; i++)
    {
        if (exponents[i] != -1)
            cache[exponents[i]] += coefficients[i];
    }
    
    fill(exponents, exponents + 100, -1);
    fill(coefficients, coefficients + 100, -1);

    int p = 0;
    for (auto &x : cache)
    {
        coefficients[p] += x.second;
        exponents[p] -= x.first;
        p++;
    }
}
