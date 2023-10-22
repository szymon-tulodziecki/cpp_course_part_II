#include <iostream>
#include <string>
#include "friendship_project.h"

using namespace std;

void assignUniversity(Student &s, University &u)
{
    cout << "----------------------------------------------" << endl;
    cout << s.student_id << " " << s.name << " " << s.surname << " " << " - " << u.name << endl; 
}
int main()
{
    Student s1;
    s1.load_Student();

    University u1;
    u1.load_University();

    assignUniversity(s1, u1);
    return 0;
}