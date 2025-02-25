#include <iostream>

class Point
{

    friend void display(Point &p);

public:
    Point(int abs = 0, int ord = 0)
    {
        x = abs;
        y = ord;
    }

private:
    int x, y;
};


void display(Point &p){
    std::cout << p.x << ' ' << p.y << '\n';
}

signed main(){
    Point P(4,5);
    display(P);
}