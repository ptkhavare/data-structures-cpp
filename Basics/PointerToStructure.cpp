#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{

    Rectangle r = {10, 5};

    // declaration and init
    Rectangle *p = &r;

    // accesing
    p->breadth = 20;

    p->length = 10;

    cout << p->breadth << endl;

    cout << p->length << endl;

    Rectangle *p1 = new Rectangle();

    p1->breadth = 40;
    p1->length = 50;

    cout << p1->breadth << endl;

    cout << p1->length << endl;
}