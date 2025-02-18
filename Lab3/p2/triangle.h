#include <cmath>
#include <tuple>
#include <string>

#ifndef H_TRIANGLE
#define H_TRIANGLE
using namespace std;

enum TriangleType{
    Equilateral,
    Isosceles,
    Scalene,
    NonValid
};

class Triangle{
public:
    Triangle(double a = 0, double b = 0, double c = 0);
    tuple<double,double,double> getSides();
    double getPerimeter();
    double getArea();
    void setSides(double a, double b, double c);
    void printTriangleDetails();
private:
    double firstSide, secondSide, thirdSide;
    static bool isValid(double a, double b, double c);
    TriangleType triangleType();
    static string triangleTypeToString(TriangleType t);
};
#endif