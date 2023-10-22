#include <iostream>
#include <cmath>

using namespace std;

class Square
{   
    int side;

    public:

    Square(int s);
    void calculateArea();
    void calculateCircuit();
    
};

class Rectangle
{   
    int side_a;
    int side_b;

    public:

    Rectangle(int a, int b);
    void calculateArea();
    void calculateCircuit();
    
};

class Circle
{   
    int radius;

    public:

    Circle(int c);
    void calculateArea();
    void calculateCircuit();
    
};
