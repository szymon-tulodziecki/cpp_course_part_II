#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student
{
    private:

    string name;
    string surname;

    public:

    void displayStudent();
    Student(string = "Szymon", string = "Tulodziecki");

};

#endif //STUDENT_H