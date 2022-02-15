
#include <iostream>
using namespace std;

int main()
{

    // declaration
    int A[5];

    // declaration & initialization
    int B[5] = {2, 3, 4, 5, 6};

    // traversing
    cout << "Uninitialized Array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }

    cout << "Initialized Array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << B[i] << endl;
    }
}