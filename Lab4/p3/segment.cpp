#include "segment.h"

Segment::Segment(Point A, Point B)
{
    a = A;
    b = B;
}

void Segment::SetA(Point A)
{
    a = A;
}

void Segment::SetB(Point B)
{
    b = B;
}

Point Segment::GetA()
{
    return a;
}

Point Segment::GetB()
{
    return b;
}

double Segment::dimension()
{
    return sqrt((a.GetX() - b.GetX())*(a.GetX() - b.GetX()) + (a.GetY() - b.GetY())*(a.GetY() - b.GetY()));
}
