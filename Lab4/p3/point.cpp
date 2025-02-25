#include "point.h"

Point::Point(Rational X, Rational Y)
{
    x = X;
    y = Y;
}

void Point::SetX(Rational X)
{
    x =X;
}

void Point::SetY(Rational Y)
{
    y = Y;
}

Rational Point::GetX()
{
    return x;
}

Rational Point::GetY()
{
    return y;
}
