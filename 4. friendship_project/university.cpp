#include <iostream>
#include <string>
#include "friendship_project.h"


using namespace std;

University :: University(string n)
{
    name = n;
}

void University :: load_University()
{
    cout << "Enter the University name: ";
    getline(cin, name);
    cout << endl;
} 