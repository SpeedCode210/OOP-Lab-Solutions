#include <iostream>
#include "point.h"
using namespace std;

int main()
{
    Point A(3, 5);
    cout << "Created point A(" << A.getX() << "," << A.getY() << ")\n";
    Point B(-10, 30);
    cout << "Created point B(" << B.getX() << "," << B.getY() << ")\n";
    A.translate(5.5, -12.5);
    cout << "Moved point A(" << A.getX() << "," << A.getY() << ")\n";
    cout << "The distance AB is equal to " << A.distance(B) << '\n';
}