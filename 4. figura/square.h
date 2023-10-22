#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>

using namespace std;

class Square
{
    private:
    
    float side_A;
    float area;

    public:

    Square(float = 0.0, float = 0.0);
    void Calculate_Area();
    void Display_Area();
};

#endif //SQUARE_H