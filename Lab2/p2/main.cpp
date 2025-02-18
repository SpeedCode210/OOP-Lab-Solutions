// Complete everything that needs to be here.
#include "cat.h"
#include <iostream>
#include <vector>
using namespace std;

bool check(vector<Cat*> &cats){
    int gray_cats = 0;
    int brown_cats = 0;
    int blacks[] = {0,0,0};
    for (auto cat : cats){
        switch(cat->getFurColor()){
            case BrownFur:
                brown_cats++;
                break;
            case Gray:
                gray_cats++;
                break;
            case Black:
                blacks[cat->getEyeColor()]++;
        }
    }

    return (gray_cats > brown_cats && brown_cats) || (blacks[Green] && blacks[Blue] && blacks[BrownEyes] == 1);
}

int main()
{
    srand(time(0));

    int numberOfCats = 7;
    vector<Cat*> cats;
    for (int count = 0; count <= numberOfCats; count++)
    {
        cout << "Press a key to add the next cat to the room." << endl;
        cin.get();
        Cat* cat = new Cat;
        cats.emplace_back(cat);

        cout << "We have a new cat !\n";
        cout << "Fur Color : " << furToString(cat->getFurColor()) << '\n';
        cout << "Eye Color : " << eyeToString(cat->getEyeColor()) << '\n';
        cout << "Hair Length : " << hairToString(cat->getHairLength()) << '\n';

        if(check(cats)){
            cout << "A FIGHT HAS BROKEN OUT !!!!!!!!!!!!!\n";
        }
    }

    for(auto &p : cats)
        delete p;

    return 0;
}