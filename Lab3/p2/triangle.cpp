#include "triangle.h"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Triangle::Triangle(double a, double b, double c)
{
    setSides(a, b, c);
}

tuple<double, double, double> Triangle::getSides()
{
    return tuple<double, double, double>(firstSide, secondSide, thirdSide);
}

double Triangle::getPerimeter()
{
    return firstSide + secondSide + thirdSide;
}

double Triangle::getArea()
{
    double p = getPerimeter() / 2.0;
    return sqrt(p * (p - firstSide) * (p - secondSide) * (p - thirdSide));
}

void Triangle::setSides(double a, double b, double c)
{
    if (isValid(a, b, c))
    {
        firstSide = a;
        secondSide = b;
        thirdSide = c;
    }
    else
    {
        firstSide = secondSide = thirdSide = 0;
    }
}

void Triangle::printTriangleDetails()
{
    cout << setprecision(2) << fixed;
    cout << "Triangle [" << firstSide 
         << " - " << secondSide << " - " << thirdSide << "]\n";

    cout << "Area = " << getArea() << '\n';
    cout << "Perimeter = " << getPerimeter() << '\n';
    cout << "Type = " << triangleTypeToString(triangleType()) << '\n';
}

bool Triangle::isValid(double a, double b, double c)
{
    if (a + b <= c)
        return false;
    if (a + c <= b)
        return false;
    if (c + b <= a)
        return false;
    return true;
}

TriangleType Triangle::triangleType()
{
    if (!isValid(firstSide, secondSide, thirdSide))
        return NonValid;
    if (firstSide == secondSide && secondSide == thirdSide)
        return Equilateral;
    if (firstSide == secondSide || secondSide == thirdSide || firstSide == thirdSide)
        return Isosceles;
    return Scalene;
}

string Triangle::triangleTypeToString(TriangleType t)
{
    switch (t)
    {
    case NonValid:
        return "Non-valid";
    case Equilateral:
        return "Equilateral";
    case Isosceles:
        return "Isosceles";
    case Scalene:
        return "Scalene";
    }
    return "Invalid Triangle Type";
}
