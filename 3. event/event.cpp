#include <iostream>
#include "event.h"

using namespace std;

void event :: load()
{
    cout << endl << "Nazwa wydarzenia: ";
    cin >> name;

    cout << endl << "Dzien: ";
    cin >> day;

    cout << endl << "Miesiac: ";
    cin >> month;
    
    cout << endl << "Rok: ";
    cin >> year;

    cout << endl << "Godzina: ";
    cin >> hour;
    
    cout << endl << "Minuta: ";
    cin >> minutes;

}

void event :: show()
{
    cout << endl << name << " " << day << "." << month << "." << year
    << " " << hour << ":" << minutes << endl; 
}

event :: event(string n, int d, int m, int y, int h, int min)
{
    name = n;
    day = d;
    month = m; 
    year = y;
    hour = h;
    minutes = min;
}

