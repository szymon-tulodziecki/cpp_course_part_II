#include <iostream>

using namespace std;


class Person
{
    string name;
    int age;

    public:

    Person();
    Person(const string n, int a);
    void printInfo();
};