#include <iostream>
#include "car.h"
#include "vehicle.h"
#include "helicopter.h"

using namespace std;

int main()
{
    Car c_a;
    c_a.display();

    cout << endl;

    Helicopter h_a;
    h_a.display();


    return 0;
}