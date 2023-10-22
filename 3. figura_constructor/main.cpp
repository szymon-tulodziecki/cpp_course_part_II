#include <iostream>
#include "figura.h"

using namespace std;

int main()
{  
    int x;
    cout << "SQUARE: " << endl;
    cout << "Enter side length: ";
    cin >> x;
    Square s1(x);
    
    s1.calculateArea();
    s1.calculateCircuit();

    cout << "-------------------------------------------------" << endl;
    cout << endl;

    int l, k;
    cout << "RECTANGLE: " << endl;
    cout << "Enter length of side a: ";
    cin >> l;
    
    cout << endl;
    cout << "Enter length od side b: ";
    cin >> k;

    cout << endl;
    Rectangle r1(l, k);
    r1.calculateArea();
    r1.calculateCircuit();

    cout << "-------------------------------------------------" << endl;
    cout << endl;

    int d;
    cout << "CIRCLE: " << endl;
    cout << "Enter radius length: ";
    cin >> d;

    Circle c1(d);
    c1.calculateArea();
    c1.calculateCircuit();

    return 0;
}