#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

using namespace std;

class Vehicle
{
    private:

    string name, fuel, engine;
    int maxSpeed, wheels;

    public:

    Vehicle(string = "Uknown", string = "Uknown", string = "Uknown", int = 0, int = 0);
    void display();
};

#endif //VEHICLE_H