#include "rational.h"

#ifndef H_POINT
#define H_POINT

class Point{
public:
    Point(Rational X = Rational(), Rational Y = Rational());
    void SetX(Rational X);
    void SetY(Rational Y);
    Rational GetX();
    Rational GetY();
private:
    Rational x,y;
};

#endif