#include "intset.h"
#include <iostream>

const __int128_t ZERO = 0;
const __int128_t ONE = 1;

IntegerSet::IntegerSet()
{
    content = ZERO;
}

void IntegerSet::insertElement(int x)
{
    content |= ONE << x;
}

void IntegerSet::deleteElement(int x)
{
    content &= !(ONE << x);
}

IntegerSet IntegerSet::unionOfSets(const IntegerSet &b)
{
    IntegerSet res;
    res.content = content | b.content;

    return res;
}

IntegerSet IntegerSet::intersectionOfSets(const IntegerSet &b)
{
    IntegerSet res;
    res.content = content & b.content;
    return res;
}

void IntegerSet::inputSet()
{
    std::cout << "Add an element to the set, write -1 to stop." << std::endl;
    int x;
    std::cin >> x;
    if(x < 0) return;
    if(x > 100) std::cout << "The element is too large, try again." << std::endl;
    else insertElement(x);
    inputSet();

}

void IntegerSet::printSet()
{
    for(int i = 0; i < 101; i++){
        if(ONE << i & content) std::cout << i << ' ';
    }
    std::cout << '\n';
}

bool IntegerSet::operator==(const IntegerSet &b)
{
    return content == b.content;
}
