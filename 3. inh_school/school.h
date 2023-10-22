#ifndef SCHOOL_H
#define SCHOOL_H

#include <iostream>

using namespace std;

class School
{
    private:

    string name;
    int number;

    public:

    void displaySchool();
    School(string = "Harward University", int = 19);

};

#endif //SCHOOL_H