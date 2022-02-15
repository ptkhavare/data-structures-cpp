#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int x, y;
    x = 10;
    y = 20;

    /*actual parameters -
    new variables created on stack
    i.e a,b created on stack then destroyed
    after call*/
    int result = add(x, y);

    cout << "Result " << result << endl;
}