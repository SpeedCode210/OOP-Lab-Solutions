#include "course.h"

Course::Course(const string &courseName, int capacity)
{
    this->students = new string[capacity];
    this->capacity = capacity;
    this->courseName = courseName;
    this->numberOfStudents = 0;

}

Course::~Course()
{
    delete [] this->students;
}

string Course::getCourseName() const
{
    return string();
}

void Course::addStudent(const string &name)
{
    if(numberOfStudents == capacity) throw "Maximum capacity of the course reached !";
    students[numberOfStudents] = name;
    numberOfStudents++;
}

void Course::dropStudent(const string &name)
{
    for(int i = 0; i < numberOfStudents; i++){
        if(this->students[i] == name){
            for(int j = i+1; j < numberOfStudents; j++)
                students[j-1] = students[j];
            numberOfStudents--;
            break;
        }
    }
}

string *Course::getStudents() const
{
    return this->students;
}

int Course::getNumberOfStudents() const
{
    return this->numberOfStudents;
}
