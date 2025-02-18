#ifndef H_COMPLEX
#define H_COMPLEX
class Complex {
public:
  Complex(double real = 0.0,
          double imag = 0.0); // Constructor with default values
  void addition(const Complex &);
  void subtraction(const Complex &);
  void multiplication(const Complex &);
  void printComplex(void);
  void setComplexNumber(double, double);

private:
  double realPart;
  double imaginaryPart;
};
#endif
