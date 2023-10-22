#include <iostream>
#include "figura.h"

using namespace std;

int main()
{   
    int t;
    cout << "Enter amount of tests: ";
    cin >> t;
    cout << endl;
    
    while (t--)
    {  
        Figura f1;
        f1.displayMenu();
        f1.select();
        f1.connecting();
        cout << endl << "----------------------------------" << endl;
    }
    
    

    return 0;
}