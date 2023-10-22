#ifndef STUDENT_CPP
#define STUDENT_CPP

#include <iostream>
#include "teacher.h"

using namespace std;

Student :: Student(string n, string sn, int i)
{
    name = n;
    surname = sn;
    index = i;
}

void Student :: displayStudent()
{
    cout << index << ". " << name << " " << surname << endl;
}

#endif //STUDENT_CPP