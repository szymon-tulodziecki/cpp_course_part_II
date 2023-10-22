#include <iostream>
#include "friendship.h"

using namespace std;

void judge(Point pit, Rectangle rec)
{
    if((pit.x >= rec.x) && (pit.x <= rec.x + rec.width) &&
    (pit.y >= rec.y) && (pit.y <= rec.y + rec.height))
    {
        cout << endl << "Point " << pit.name << " occurs to rectangle. " << endl;
    }
    else
    {
        cout << endl << "Point " << pit.name << " don't occurs to rectangle. " << endl;
    }
}
int main()
{
    Point p1("A", 3, 1);
    Rectangle r1("rectangle", 0, 0, 6, 4);
    judge(p1, r1);

    return 0;
}