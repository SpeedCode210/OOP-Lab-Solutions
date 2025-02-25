#include "point.h"

#ifndef H_SEGMENT
#define H_SEGMENT

class Segment
{
public:
    Segment(Point A, Point B);
    void SetA(Point A);
    void SetB(Point B);
    Point GetA();
    Point GetB();
    double dimension();

private:
    Point a, b;
};

#endif