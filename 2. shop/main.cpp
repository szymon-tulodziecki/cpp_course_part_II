#include <iostream>
#include "shop.h"

using namespace std;

int main()
{
    Product prod[5];
    Baner deco;
    ShoppingCart cash;

    deco.showBaner();
    for(int i = 0; i < 5; i++)
    {   
        prod[i].product_nr = i + 1;
        prod[i].loading();
        cout << i + 1 << ". ";
        prod[i].out();
    }
    cash.selectProduct();

    return 0;
}