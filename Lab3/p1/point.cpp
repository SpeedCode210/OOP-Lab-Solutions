#include "point.h"
#include <cmath>
using namespace std;

Point::Point(double x, double y)
{
    X = x;
    Y = y;
}

void Point::translate(double x, double y)
{
    X += x;
    Y += y;
}

double Point::distance(Point p)
{
    return sqrt((X-p.X)*(X-p.X) + (Y-p.Y)*(Y-p.Y));
}

double Point::getX()
{
    return X;
}

double Point::getY()
{
    return Y;
}

void Point::setX(double x)
{
    X = x;
}

void Point::setY(double y)
{
    Y = y;
}
