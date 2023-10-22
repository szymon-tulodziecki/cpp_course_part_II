#include <iostream>
#include "friendship.h"

using namespace std;

Point :: Point(string n, float xx, float yy)
{
    name = n;
    x = xx;
    y = yy;
}

void Point :: load()
{
    cout << "Enter x: ";
    cin >> x;
    cout << endl;

    cout << "Enter y: ";
    cin >> y;
    cout << endl;

    cout << "Enter name: ";
    cin >> name;
    cout << endl;
}

Rectangle :: Rectangle(string n, float xx , float yy, float w, float h)
{
    name = n;
    x = xx;
    y = yy;
    width = w;
    height = h;
}

void Rectangle :: load()
{
    cout << "Enter x of the left down point: ";
    cin >> x;
    cout << endl;

    cout << "Enter x of the left down point: ";
    cin >> y;   
    cout << endl;

    cout << "Enter width of the rectangle: ";
    cin >> width;
    cout << endl;

    cout << "Enter height of the rectangle: ";
    cin >> height;
    cout << endl;

    cout << "Enter the name: ";
    cin >> name;
    cout << endl;
}