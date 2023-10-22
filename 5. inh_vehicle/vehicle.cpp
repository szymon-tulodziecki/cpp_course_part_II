#include <iostream>
#include "vehicle.h"

using namespace std;

Vehicle :: Vehicle(string n, string f, string e, int mS, int wh)
{
    name = n;
    fuel = f;
    engine = e;
    maxSpeed = mS;
    wheels = wh;
}

void Vehicle :: display()
{
    cout << "Name: " << name << endl;
    cout << "Fuel: " << fuel << endl;
    cout << "Engine: " << engine << endl;
    cout << "Max Speed: " << maxSpeed << endl;
    cout << "Wheels: " << wheels << endl;
}