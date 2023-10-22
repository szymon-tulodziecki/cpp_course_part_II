#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle
{
    private:
    
    float side_A;
    float side_B;
    float area;

    public:

    Rectangle(float = 0.0, float = 0.0, float = 0.0);
    void Calculate_Area();
    void Display_Area();
};

#endif //RECTANGLE_H