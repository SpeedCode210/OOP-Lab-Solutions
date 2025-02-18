#include <iostream>
#include "triangle.h"
using namespace std;

int main(){
    Triangle T1(5,8,5);
    T1.printTriangleDetails();
    Triangle T2(3,12,4);
    auto sides = T2.getSides();
    cout << "T2's sides : " << get<0>(sides) << " - " << get<1>(sides) << " - " << get<2>(sides) << "\n";
    double a,b,c;
    cout << "Please enter the three triangle sides : ";
    cin >> a >> b >> c;
    Triangle T3(a,b,c);
    T3.printTriangleDetails();
}