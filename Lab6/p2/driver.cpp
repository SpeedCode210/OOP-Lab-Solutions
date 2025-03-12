#include <bits/stdc++.h>
#include "poly.h"
using namespace std;
signed main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    cout << "Enter the polynomial :\n";
    Polynomial P;
    P.enterTerms();
    P.printPolynomial();
    cout << endl;
}