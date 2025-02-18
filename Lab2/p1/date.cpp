#include "date.h"
#include <iostream>
using namespace std;

int numberOfDays(int m, int y)
{
    if ((m % 2 && m <= 7) || (!(m % 2) && m >= 8))
        return 31;
    if (m != 2)
        return 30;

    return 28 + (y % 4 == 0 && (y % 100 || y % 400 == 0));
}

Date::Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;

    if (!isValid())
        throw invalid_argument("Invalid date initialized !");
}

Date::Date()
{
    month = 1;
    day = 1;
    year = 1990;
}

// Print the Date in the form mm-dd-yyyy
void Date::print()
{
    cout << (month < 10 ? "0" : "") << month << '-' << (day < 10 ? "0" : "") << day << '-';
    for (int i = 1000; year < i; i /= 10)
        cout << "0";
    cout << year;
}

void Date::setDay(int d){
    day = d;
}

void Date::setYear(int y){
    year = y;
}

void Date::setMonth(int m){
    month = m;
}

int Date::getDay(){
    return day;
}

int Date::getMonth(){
    return month;
}

int Date::getYear(){
    return year;
}

bool Date::isValid()
{
    if (month > 12 || month < 1)
        return false;
    if (day < 1)
        return false;
    if (day > numberOfDays(month, year))
        return false;
    return true;
}

Date Date::nextDay()
{
    int day = this->day;
    int month = this->month;
    int year = this->year;

    day += 1;
    if (day > numberOfDays(this->month, this->year))
    {
        month++;
        day = 1;
    }

    if (month == 13)
    {
        month = 1;
        year++;
    }

    return Date(month, day, year);
}