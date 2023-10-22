#include <iostream>
#include "circle.h"
#include <cmath>

using namespace std;

Circle :: Circle(float r, float a)
{
    radius = r;
    area = a;
}

void Circle :: Calculate_Area()
{
    area = M_PI * pow(radius, 2.0); 
}

void Circle :: Display_Area()
{
    cout << "Area of the circle with radius " << radius << " is equal to " << area << endl;
    
}

