#include <iostream>

using namespace std;

class University;

class Student
{
    string name;
    string surname; 
    int student_id;

    public:

    Student(string = "Blank", string = "blank", int = 0);
    void load_Student();
    friend void assignUniversity(Student &s, University &u);
};

class University
{
    string name;

    public:

    University(string = "Uknown");
    void load_University();
    friend void assignUniversity(Student &s, University &u);
};

