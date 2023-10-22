#include <iostream>
#include "calculator.h"
#include <vector>

using namespace std;

Operations :: Operations()
{
    oPer.resize(10);
    for(int i = 0; i < 10; i++)
    {
        oPer[i] = '+';
    }
}

void Operations :: load_Operations()
{
    cout << "Enter 10 operations '+'/ '-' / '*'/ '/' " << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << i + 1 << ". ";
        cin >> oPer[i];
    }
    cout << endl;
}
