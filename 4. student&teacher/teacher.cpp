#ifndef TEACHER_CPP
#define TEACHER_CPP

#include <iostream>
#include "teacher.h"

using namespace std;

Teacher :: Teacher(string n, string sn, string sub)
{
    name = n;
    surname = sn;
    S_subject = sub;
}

void Teacher :: displayTeacher()
{
    cout << name << endl;
    cout << "-----------------------" << endl;
    cout << surname << endl;
    cout << "-----------------------" << endl;
    cout << S_subject << endl;
    cout << "-----------------------" << endl;
}

#endif //TEACHER_CPP