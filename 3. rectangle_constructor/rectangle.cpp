#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle :: Rectangle()
{
    lenght = 0;
    width = 0;
}

Rectangle :: Rectangle(int l, int w)
{
    lenght = l;
    width = w;
}

void Rectangle :: calculateArea()
{
    cout << "The area of the rectangle is equal to: " << lenght * width;
}