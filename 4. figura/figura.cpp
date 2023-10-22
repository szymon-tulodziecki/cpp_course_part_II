#include <iostream>
#include "figura.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"
#include <cstdlib>

using namespace std;

Figura :: Figura(string ch)
{
    choice = ch;
}

void Figura :: displayMenu()
{
    cout << "Select figure: " << endl;
    cout << "--- CIRCLE ---" << endl;
    cout << "- RECTANGLE -"  << endl;
    cout << "-- SQUARE --" << endl;

    cout << endl;
}

void Figura :: select()
{
    cout << "Paste 'circle'/ 'rectangle'/ 'square : " << endl;
    cin >> choice;
    cout << endl;
}

void Figura :: connecting()
{
    if(choice == "circle")
    {
        float x;
        cout << "Enter radius: ";
        cin >> x;

        Circle c1(x);
        c1.Calculate_Area();
        c1.Display_Area();
    }
    else if(choice == "rectangle")
    {
        float z, k;
        cout << "Enter side A: ";
        cin >> z;

        cout << endl;

        cout << "Enter side B: ";
        cin >> k;

        cout << endl;

        Rectangle r1(z, k);
        r1.Calculate_Area();
        r1.Display_Area();
    }
    else if(choice == "square")
    {
        float n;
        cout << "Enter side A: ";
        cin >> n;

        Square s1(n);
        s1.Calculate_Area();
        s1.Display_Area();
    }
    else
    {
        cout << "Something went wrong!";
        exit(0);
    }
}