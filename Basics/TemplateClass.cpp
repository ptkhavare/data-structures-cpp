#include <iostream>
using namespace std;

template <class T>
class Rectangle
{
private:
    T length;
    T breadth;

public:
    Rectangle();
    Rectangle(T length, T breadth);
    T area();
    void changeBreadth(T breadth);
};

template <class T>
Rectangle<T>::Rectangle(T length, T breadth)
{
    this->length = length;
    this->breadth = breadth;
}

template <class T>
T Rectangle<T>::area()
{
    return this->length * this->breadth;
}

template <class T>
void Rectangle<T>::changeBreadth(T breadth)
{
    this->breadth = breadth;
}

int main(){

    Rectangle<int> r(10,5);
    
    cout<<"Area "<<r.area()<<endl;

    r.changeBreadth(4);

    cout<<"Area "<<r.area()<<endl;
}