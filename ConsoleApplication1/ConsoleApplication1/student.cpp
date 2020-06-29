#include "student.h"

void student::setgrade(int g)
{
    grade = g;
}

int student::getgrade()
{
    return grade;
}

void student::setGPA(double ga)
{
    GPA = ga;
}

double student::getGPA()
{
    return GPA;
}

student::student(string s) : Person(s)
{
}
