#include <iostream>
#include "student.h"
#include "school.h"

using namespace std;

int main()
{
    School s1;
    s1.displaySchool();

    cout << endl;

    Student st1;
    st1.displayStudent();
    return 0;
}