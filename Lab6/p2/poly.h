#ifndef H_POLY
#define H_POLY
class Polynomial
{
public:
    Polynomial();
    Polynomial operator+ (const Polynomial &);
    Polynomial operator- (const Polynomial &);
    Polynomial operator* (const Polynomial &);
    const Polynomial operator= (const Polynomial &);
    Polynomial& operator+= (const Polynomial &);
    Polynomial& operator-= (const Polynomial &);
    Polynomial& operator*= (const Polynomial &);
    void enterTerms(); // input terms of polynomial
    void printPolynomial();

private:
    int exponents[100];
    int coefficients[100];
    void polynomialCombine(); // combine common terms
};
#endif