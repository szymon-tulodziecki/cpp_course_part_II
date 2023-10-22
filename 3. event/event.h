#include <iostream>

using namespace std;

class event
{
    int day, month, year;
    int hour, minutes;
    string name;

    public:

    event(string = "brak", int = 1, int = 1, int = 2015, int = 12, int = 0);

    void load();
    void show();


};