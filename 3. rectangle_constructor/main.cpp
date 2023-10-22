#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
    int x, y;

    cout << "Paste lenght: ";
    cin >> x;

    cout << "Paste width: ";
    cin >> y;

    
    Rectangle rect (x, y); 
    rect.calculateArea();

    return 0;
}