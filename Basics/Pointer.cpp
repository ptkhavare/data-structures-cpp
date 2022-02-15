#include <iostream>
using namespace std;

int main()
{
    // data variable
    int a = 20;

    // pointer variable
    int *p;

    // initialization - p assigned address of a
    p = &a;

    // accessing (de-referencing)
    cout << *p << endl;

    // array on heap with pointer.
    int *p2;

    p2 = new int[5];

    for (int i = 0; i < 5; i++)
    {
        p2[i] = 10;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << p2[i] << endl;
    }
}
