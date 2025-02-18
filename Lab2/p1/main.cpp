#include "date.h"
#include <iostream>
using namespace std;

int main()
{
    const int MAXDAYS = 160;
    Date date1(10, 25, 1998), date2; // date2 defaults to 1/1/90

    cout << "date1 = ";
    date1.print();
    cout << "\ndate2 = ";
    date2.print();
    cout << endl;

    for (int loop = 1; loop <= MAXDAYS; ++loop)
    {
        // Write call to nextDay
        cout << "date" << loop << " = ";
        date1.print();
        cout << "\n";
        date1 = date1.nextDay();
    }
    return 0;
}