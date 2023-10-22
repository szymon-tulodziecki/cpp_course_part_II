#include <iostream>
#include "car.h"
#include "vehicle.h"

using namespace std;

Car :: Car(string n , string f, string e, string t, int mS, int wh)
: Vehicle(n, f, e, mS, wh)
{
    name = n;
    fuel = f;
    engine = e;
    type = t;
    maxSpeed = mS;
    wheels = wh;
}
void Car :: display()
{   
    cout << "Type: " << type << endl;
    cout << "------------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Fuel: " << fuel << endl;
    cout << "Engine: " << engine << endl;
    cout << "Max Speed: " << maxSpeed << endl;
    cout << "Wheels: " << wheels << endl;
}