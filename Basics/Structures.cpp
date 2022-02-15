#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // declaration
    struct Rectangle r;

    // declaration & init
    struct Rectangle r1 = {3, 4};

    // Array of structure
    struct Rectangle r2[50];

    // access
    r.breadth = 20;
    r.length = 10;

    cout << "Length Of rectangle " << r.length << endl;
    cout << "Breadth Of rectangle " << r.breadth << endl;

    cout << "Length Of rectangle " << r1.length << endl;
    cout << "Breadth Of rectangle " << r1.breadth << endl;
}