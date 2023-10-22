#include <iostream>
#include <cmath>
#include "square.h"

using namespace std;

Square :: Square(float a, float ar)
{
    side_A = a;
    area = ar;
}

void Square :: Calculate_Area()
{
    area = pow(side_A, 2.0); 
}

void Square :: Display_Area()
{
    cout << "Area of the square with side= " << side_A << " is equal to: " << area << endl;   
}

