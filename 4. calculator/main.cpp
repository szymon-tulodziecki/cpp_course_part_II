#include <iostream>
#include "calculator.h"

using namespace std;

void displayResults(Values_A &vA, Values_B &vB, Operations &ops)
{
    cout << "Results based on Values_A, Values_B, and Operations:" << endl;
    
    for (int i = 0; i < 10; i++) {
        float result = 0.0;
        
        if (ops.oPer[i] == '+') {
            result = vA.val_A[i] + vB.val_B[i];
        }

        else if (ops.oPer[i] == '-') {
            result = vA.val_A[i] - vB.val_B[i];
        }
        
        else if (ops.oPer[i] == '*') {
            result = vA.val_A[i] * vB.val_B[i];
        }

         
        else if (ops.oPer[i] == '/') {
            if(vA.val_A[i] == 0.0 || vB.val_B[i] == 0.0)
            {
                cout << "Cannot be divided by zero!" << endl;
            }
            else
            {
                result = vA.val_A[i] / vB.val_B[i];
            }
    
        }
        cout << "Result " << i + 1 << ": " << result << endl;
    }
}
int main()
{
    Values_A vA;
    vA.load_Values_A();
    cout << "----------------------------------" << endl;

    Values_B vB;
    vB.load_Values_B();
    cout << "----------------------------------" << endl;

    Operations ops;
    ops.load_Operations();
    cout << "----------------------------------" << endl;

    cout << endl;

    
    displayResults(vA, vB, ops);
    
    return 0;
}