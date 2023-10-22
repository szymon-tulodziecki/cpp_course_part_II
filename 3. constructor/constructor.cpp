#include <iostream>
#include "constructor.h"

using namespace std;

Person :: Person()
{
   name = "Uknown";
   age = 0;
}

Person :: Person(const string n, int a)
{
    name = n;
    age = a;
}

void Person :: printInfo()
{
    cout << name << " - " << age;
}