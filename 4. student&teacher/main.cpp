#include <iostream>
#include "teacher.h"

using namespace std;

int main()
{
    Teacher t1("Marian", "Nowak", "English");
    Student s1("Jan", "Kowalski", 1);

    t1.displayTeacher();

    cout << "STUDENTS: " << endl;
    s1.displayStudent();
    
    return 0;
}