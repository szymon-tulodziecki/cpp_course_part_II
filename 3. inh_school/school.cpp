#include <iostream>
#include "school.h"

using namespace std;

void School :: displaySchool()
{
    cout << number << " - " << name << endl;
}

School :: School(string n, int nr)
{
    name = n;
    number = nr;
}