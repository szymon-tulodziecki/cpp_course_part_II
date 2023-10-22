#include <iostream>

using namespace std;

class car
{
    public:

    string brand;
    string model;
    int vintage;
    int course;

    void save()
    {
        cout << " ----------------------" << endl;
        cout << "|     *BEST CARS*      |" << endl;
        cout << " ----------------------" << endl;
        cout << "ENTER BRAND -> ";
        cin >> brand;
        cout << " ----------------------" << endl;
        cout << "ENETER MODEL -> ";
        cin >> model;
        cout << " ----------------------" << endl;
        cout << "ENTER VINTAGE -> ";
        cin >> vintage;
        cout << " ----------------------" << endl;
        cout << "ENTER COURSE ->  ";
        cin >> course;
    }
    void out()
    {
        cout << " ----------------------"        << endl;
        cout << " MODEL: "    << model           << endl;
        cout << " BRAND: "    << brand           << endl;
        cout << " VINTAGE: "  << vintage         << endl;
        cout << " COURSE: "   << course << "km"  << endl;
        cout << " ----------------------"        << endl;
    }

};

int main()
{
    car car1;

    car1.save();
    cout << endl;

    car1.out();
}