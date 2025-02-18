#ifndef LAB2_DATE_H
#define LAB2_DATE_H

// Simple Date class
class Date
{
public:
    Date(int m, int d, int y);
    Date();
    void print();
    bool isValid();
    Date nextDay();
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    int getDay();
    int getMonth();
    int getYear();

private:
    int month;
    int day;
    int year;
};

#endif 