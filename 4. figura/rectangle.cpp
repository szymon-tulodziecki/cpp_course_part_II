#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle :: Rectangle(float a, float b, float ar)
{
    side_A = a;
    side_B = b;
    area = ar;
    
}

void Rectangle :: Calculate_Area()
{
    area = side_A * side_B; 
}

void Rectangle :: Display_Area()
{
    cout << "Area of the rectangle with side A: " << side_A << " and side_B: " << side_B << " is equal to: " << area << endl;   
}

