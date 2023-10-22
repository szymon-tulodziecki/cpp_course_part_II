#include <iostream>
#include "calculator.h"
#include <vector>

using namespace std;

Values_B :: Values_B()
{
    val_B.resize(10);
    for(int i = 0; i < 10; i++)
    {
        val_B[i] = 0.0;
    }
}

void Values_B :: load_Values_B()
{
    cout << "Enter 10 values: " << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << i + 1 << ". ";
        cin >> val_B[i];
    }
    cout << endl;

}