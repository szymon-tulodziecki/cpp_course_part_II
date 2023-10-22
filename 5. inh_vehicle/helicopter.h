#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <iostream>
#include "vehicle.h"

using namespace std;

class Helicopter : public Vehicle
{
private:
    
    string name, fuel, engine, type;
    int maxSpeed, wheels, engine_speed;

public:
    
    Helicopter(string = "Tomahawk", string = "Rocket Fuel", string = "Rocket Engine", string = "Helicopter", int = 349, int = 0, int = 20000);
    void display();
};

#endif //HELICOPTER_H