#include <iostream>
#include "constructor.h"

using namespace std;


int main()
{

    Person person1;
    Person person2("John", 30);
    person1.printInfo();
    cout << endl;
    person2.printInfo();
}