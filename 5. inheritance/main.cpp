#include <iostream>
#include <cmath>

using namespace std;

class Point
{   
    private: 

    float x, y;
    string name;

    public:

    void display()
    {
        cout << "name" << "(" << ", " << y << ")" << endl;
    }
    Point(string n, float a, float b)
    {
        name = n;
        y = a;
        y = b;
    }
};

class Circle : public Point //Klasa koło dziedziczy publicznie z klasy punkt
{
    float r;
    string name;

    public:

    void display()
    {
        cout << "Circle named: " << name << endl;
        cout << "Middle of the circle: " << endl;
        Point :: display();
        cout << "Radius: " << r << endl;

        cout << "Are of the circle is equal to: " << M_PI * pow(r, 2.0) << endl;
    }

    Circle(string nk = "Circle", string np = "S", float a = 0, float b = 0, float pr = 1)
    :Point(np, a, b)
    {
        name = nk;
        r = pr;

    }
    
};
int main()
{
    Circle k1;

    k1.display();
    return 0;
}
