#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>

using namespace std;

class Teacher;
class Student
{
    private: 
    
    string name;
    string surname;
    int index;

    public:

    Student(string = "Uknown", string = "Uknown", int = 0);
    void displayStudent();
};

class Teacher
{
    private:
    
    string name;
    string surname;
    string S_subject;

    public:

    Teacher(string = "Uknown", string = "Uknown", string = "Uknown");
    void displayTeacher();

    friend class Student;
};

#endif