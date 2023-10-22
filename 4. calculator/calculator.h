#include <iostream>
#include <vector>

using namespace std;

class Values_B;
class Operations;

class Values_A
{
    private:

    vector<float> val_A;

    public:

    Values_A();
    void load_Values_A();
    friend void displayResults(Values_A &vA, Values_B &vB, Operations &ops);

};

class Values_B
{
    private:

    vector<float> val_B;

    public:

    Values_B();
    void load_Values_B();
    friend void displayResults(Values_A &vA, Values_B &vB, Operations &ops);

};

class Operations
{
    private:

    vector<char> oPer;

    public:

    Operations();
    void load_Operations();
    friend void displayResults(Values_A &vA, Values_B &vB, Operations &ops);

};


