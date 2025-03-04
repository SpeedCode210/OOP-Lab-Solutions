#include <bits/stdc++.h>
#include "course.h"
using namespace std;
signed main()
{
    Course DSA("DSA", 5);
    string* hi = DSA.getStudents();
    DSA.addStudent("Raouf");
    DSA.addStudent("Red1");
    DSA.addStudent("Zakaria");
    DSA.addStudent("Potato");
    DSA.addStudent("Batata");
    DSA.dropStudent("Raouf");
    DSA.dropStudent("Potato");

    Course ITE("ITE", 3);
    hi = ITE.getStudents();
    ITE.addStudent("Red1");
    ITE.addStudent("Raouf");
    ITE.dropStudent("Raouf");
    ITE.addStudent("Omar");
}