#include <iostream>
#include "intset.h"
using namespace std;

int main(){
    cout << "Enter the first set :\n";
    IntegerSet s1;
    s1.inputSet();
    cout << "Enter the second set :\n";
    IntegerSet s2;
    s2.inputSet();

    cout << "Set 1 :\n";
    s1.printSet();

    cout << "Set 2 :\n";
    s2.printSet();

    cout << "Union :\n";
    s1.unionOfSets(s2).printSet();

    cout << "Intersection :\n";
    s2.intersectionOfSets(s1).printSet();
}