#include <iostream>
#include "helicopter.h"
#include "vehicle.h"

using namespace std;

Helicopter :: Helicopter(string n , string f, string e, string t, int mS, int wh, int es)
: Vehicle(n, f, e, mS, wh)
{
    name = n;
    fuel = f;
    engine = e;
    type = t;
    maxSpeed = mS;
    wheels = wh;
    engine_speed = es;
}

void Helicopter :: display()
{
    cout << "Type: " << type << endl;
    cout << "------------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Fuel: " << fuel << endl;
    cout << "Engine: " << engine << endl;
    cout << "Max Speed: " << maxSpeed << endl;
    cout << "Wheels: " << wheels << endl;
    cout << "Engine Speed: " << engine_speed << endl;
}