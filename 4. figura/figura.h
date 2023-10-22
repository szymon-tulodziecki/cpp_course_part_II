#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>

using namespace std;

class Figura
{
    private:

    string choice;

    public:

    Figura(string = "blank");
    void displayMenu();
    void select();
    void connecting();

    friend class Rectangle;
    friend class Circle;
    friend class Square;

};

#endif //FIGURA_H