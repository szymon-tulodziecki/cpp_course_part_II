#include <iostream>
#include "libray.h"

using namespace std;

int main()
{
    Book b1[10];

    cout << endl;
    cout << "------------------------------LIBRAY------------------------------" << endl;
    cout << endl;

    for(int i = 0; i < 10; i++)
    {
        b1[i].line_nr = i + 1;
        b1[i].Bookloading();
        b1[i].DisplayBooks();
    }

    return 0;
}