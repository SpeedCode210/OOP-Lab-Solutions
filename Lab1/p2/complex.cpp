#include "complex.h"
#include <iostream>

Complex::Complex(double real, double imag) {
  this->realPart = real;
  this->imaginaryPart = imag;
}

void Complex::addition(const Complex &x) {
  this->realPart += x.realPart;
  this->imaginaryPart += x.imaginaryPart;
}

void Complex::subtraction(const Complex &x) {
  this->realPart -= x.realPart;
  this->imaginaryPart -= x.imaginaryPart;
}

void Complex::multiplication(const Complex &x) {
  double a =
      x.realPart * this->realPart - x.imaginaryPart * this->imaginaryPart;
  this->imaginaryPart =
      x.imaginaryPart * this->realPart + x.realPart * this->imaginaryPart;
  this->realPart = a;
}

void Complex::printComplex() {
  std::cout << this->realPart << " + " << this->imaginaryPart << "i\n";
}

void Complex::setComplexNumber(double real, double imag) {
  this->realPart = real;
  this->imaginaryPart = imag;
}
