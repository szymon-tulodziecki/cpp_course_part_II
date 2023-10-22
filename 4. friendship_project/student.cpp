#include <iostream>
#include "friendship_project.h"

using namespace std;

Student :: Student(string n, string sn, int id)
{
   name = n;
   surname = sn;
   student_id = id;
}

void Student :: load_Student()
{
    cout << "Enter Student name: ";
    cin >> name;
    cout << endl;

    cout << "Enter Student surname: ";
    cin >> surname;
    cout << endl;

    cout << "Enter Student id: ";
    cin >> student_id;
    cout << endl;
    }