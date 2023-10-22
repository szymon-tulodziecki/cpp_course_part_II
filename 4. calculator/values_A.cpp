#include <iostream>
#include "calculator.h"
#include <vector>

using namespace std;

Values_A :: Values_A()
{
    val_A.resize(10);
    for(int i = 0; i < 10; i++)
    {
        val_A[i] = 0.0;
    }
}

void Values_A :: load_Values_A()
{
    cout << "Enter 10 values: " << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << i + 1 << ". ";
        cin >> val_A[i];
    }
    cout << endl;

}