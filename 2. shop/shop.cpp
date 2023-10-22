#include <iostream>
#include <fstream>
#include "shop.h"
#include <vector>

using namespace std;

void Product :: loading()
{
    ifstream file("products.txt");

    if(file.good() == false)
    {
        cout << "The file cannot be open!";
    }   
    
    string line;

    int line_nr = (product_nr - 1) * 2 + 1;
    int actual_nr = 1;
    while(getline(file, line))
    {
        if(actual_nr == line_nr) name = line;
        if(actual_nr == line_nr + 1) price = stod(line);    
        actual_nr++;

    }   
        
    file.close();
}

void Product :: out()
{
    cout << name << "  -  " << price << " pln" << endl;
    cout << "------------------------------------------" << endl;
}
void Baner :: showBaner()
{
    cout << "------------------------------------------" << endl;
    cout << "----------------PRL SHOP------------------" << endl;
    cout << "------------------------------------------" << endl;

}
void ShoppingCart :: selectProduct()
{
    vector<double>price;
    int numOfproduct;

    cout << "Enter number of product 'or paste -1 to stop: ";
    while(numOfproduct != -1)
    {
        cin >> numOfproduct;
        price.push_back(numOfproduct);
    }

    double totalPrice = 0;
    for(int i = 0; i < price.size(); i++)
    {
        if(price[i] == 1) totalPrice += 50033.23;
        if(price[i] == 2) totalPrice += 9334.90;
        if(price[i] == 3) totalPrice += 19343.01;
        if(price[i] == 4) totalPrice += 1430005;
        if(price[i] == 5) totalPrice += 2400000.99;
    }

    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "Total price of your shopping -> " << totalPrice << endl;
}


