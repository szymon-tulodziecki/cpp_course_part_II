#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

using namespace std;

class Circle
{
    private:
    
    float radius;
    float area;

    public:

    Circle(float = 0.0, float = 0.0);
    void Calculate_Area();
    void Display_Area();
};

#endif //CIRCLE_H