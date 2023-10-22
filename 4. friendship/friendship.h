#include <iostream>

using namespace std;

class Rectangle;
class Point
{    
    string name;
    float x, y;

    public:

    Point(string n = "A", float xx = 0, float yy = 0);
    void load();
    
    friend void judge(Point pit, Rectangle rec);
};

class Rectangle
{
    string name;
    float x, y, width, height;

    public:
    Rectangle(string n = "blank", float xx = 0, float yy = 0, float w = 1, float h = 1 );
    void load();
    
    friend void judge(Point pit, Rectangle rec);

};
