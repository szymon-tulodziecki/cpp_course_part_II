#include <iostream>
#include "figura.h"
#include <cmath>

using namespace std;

Square :: Square(int s)
{
    side = s;
}

void Square :: calculateArea()
{
    cout << "Area of this square with be equal to: " << side * side << endl;
}

void Square :: calculateCircuit()
{
    cout << "The circuit of this square will be equal to: " << 4 * side << endl;
}

Rectangle :: Rectangle(int a, int b)
{
    side_a = a;
    side_b = b;
}

void Rectangle :: calculateArea()
{
    cout << "The area of this rectangle will be equal to: " << side_a * side_b << endl;
}

void Rectangle :: calculateCircuit()
{
    cout << "The circui of the rectangle will be equalt to: " << 2 * side_a + 2 * side_b << endl;
}

Circle :: Circle(int r)
{
    radius = r;
}

void Circle :: calculateArea()
{
    cout << "Area of this circle will be equalt to: " << M_PI * (radius * radius) << endl;
}

void Circle :: calculateCircuit()
{
    cout << "Circuit of this circle will be equalt to: " << 2 * M_PI * radius << endl;
}