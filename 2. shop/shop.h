#include <iostream>

using namespace std;

class Product
{
    public:

    string name;
    int product_nr;
    double price;
    
    void loading();
    void out();
};
class Baner
{
    public:
    void showBaner();
};
class ShoppingCart
{
    public:
    
    void selectProduct();    
};