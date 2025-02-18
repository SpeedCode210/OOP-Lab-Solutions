#include "complex.h"
#include <iostream>

using namespace std;

signed main() {
  Complex A(1, 1);
  A.printComplex();
  Complex B(2, 2);
  B.printComplex();
  B.addition(A);
  B.printComplex();
  B.subtraction(A);
  B.printComplex();
  B.multiplication(A);
  B.printComplex();
}
