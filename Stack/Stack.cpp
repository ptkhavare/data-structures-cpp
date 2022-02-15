
#include <iostream>
using namespace std;

struct Stack{
    
     int size;
     int top;
     int *s;
};

void push()

int main(){

    //instance of structure
    struct Stack s;

    //getting size from user
    cout<<"Enter Stack Size";
    cin>>s.size;

    //creating a new array of size on the heap
    s.s = new int[s.size];

    //pointing top to -1
    s.top = -1;

}