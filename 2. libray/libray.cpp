#include <iostream>
#include <fstream>
#include <cstdlib>
#include "libray.h"

using namespace std;

void Book :: Bookloading()
{
    ifstream file("libray.txt");

    if(file.good() == false)
    {
        cout << "The file cannot been open!";
        exit(0);
    }
    
    int nr_l = (line_nr - 1) * 3 + 1;
    string line;
    int actual_nr = 1;

    while (getline(file, line))
    {
        if(actual_nr == nr_l)
        {
            title = line;
        }
        if(actual_nr == nr_l + 1)
        {
            author = line;
        }
        if(actual_nr == nr_l + 2)
        {
            publicationYear = stoi(line);
        }
        actual_nr++;
    }
}

void Book :: DisplayBooks()
{
    cout << title << " - " << author << " - " << publicationYear << endl;
    cout << "------------------------------------------------------------------" << endl;

}



