#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "vehicle.h"

using namespace std;

class Car : public Vehicle 
{
    private:

    string name, fuel, engine, type;
    int maxSpeed, wheels;

    public:

    Car(string = "Audi", string = "Diesel", string = "Two liters", string = "Car", int = 230, int = 4);
    void display();

};

#endif //CAR_H