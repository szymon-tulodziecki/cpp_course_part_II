#include <iostream>
#include "student.h"

using namespace std;

void Student :: displayStudent()
{
    cout << name << " - " << surname << endl;
}

Student :: Student(string n, string s)
{
    name  = n;
    surname = s;
}