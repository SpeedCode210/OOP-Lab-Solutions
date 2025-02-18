#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point(double x, double y);
    void translate(double x, double y);
    double distance(Point &p);
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
private:
    double X;
    double Y;
};

#endif