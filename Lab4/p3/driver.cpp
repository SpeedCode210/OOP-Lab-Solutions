#include <iostream>
#include "segment.h"

using namespace std;

int main(){
    Rational x(1,3);
    Rational y(2,3);
    Rational w(8,6);
    Rational z(2,4);
    Point a(x,y);
    Point b(w,z);
    Segment c(a,b);
    cout << c.dimension() << '\n';
}