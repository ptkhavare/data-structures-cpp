/*
// pass by value
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
//call
int add(10, 20);

// pass by address
int swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
//call
int swap(&a, &b);

// pass by reference
int swap(int &x, int &y)
{
    int c;
    c = x;
    x = y;
    y = c;
}
//call
int swap(a,b);
*/