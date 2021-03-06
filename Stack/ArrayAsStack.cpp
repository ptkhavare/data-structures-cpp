
/**
 * @file ArrayAsStack.cpp
 * @author Pranav Khavare (pranavkhavare@gmail.com)
 * @brief Stack implemented using Array
 * @details
 * Requirements:
 * 1. Size
 * 2. Array with Pointer
 * 3. Pointer To Traverse Stack(top)
 *
 * Conditions:
 *
 * Operations:
 * Constructor  - creates an array of size on heap and initializes top to -1.
 * push(T x)    - pushes a single value into the stack.
 * pull()       - pops a single value from the stack.
 * peek()       - returns value according to position.
 * stackTop()   - return value according to top.
 * isEmpty()    - returns true if stack is empty.
 * isFull()     - returns true if stack is full.
 *
 * @version 0.1
 * @date 2022-02-15
 *
 * @copyright Copyright (c) 2022
 *
 *
 */

#include <iostream>
using namespace std;

/**
 * @brief 
 * 
 */
class Stack
{
private:
    int size;
    int top;
    int *s;

public:
    /**
     * @brief Construct a new Stack object
     *
     */
    Stack();

    /**
     * @brief Construct a new Stack object
     *  Creates an array on heap.
     *  Initializes top top -1.
     * @param size
     */
    Stack(int size)
    {
        this->size = size;
        s = new int[this->size];
        this->top = -1;
    }

    /**
     * @brief Destroy the Stack object
     * Destroys array hel by s pointer.
     */
    ~Stack()
    {
        delete[] s;
    }

    /**
     * @brief Method to input sinlge value in the stack.
     * @details This method inputs a single value into the stack.
     * @Complexity - 1
     * @param x value to be inserted into the stack.
     * @return bool false - unsuccessfu , true - succesful.
     */
    bool push(int x)
    {
        if (isFull())
        {
            cout << "Stack OverFlow";
            return false;
        }
        else
        {
            top++;
            s[top] = x;
            return true;
        }
    }

    /**
     * @brief  Pushes a single value into the stack.
     *
     * @return int value of the item that was popped.
     */
    int pop()
    {
        int x = -1;
        if (isEmpty())
        {
            cout << "Stack Underflow";
        }
        else
        {
            x = s[top];
            top--;
        }
        return x;
    }

    /**
     * @brief Returns value according to position
     * @details 
     * Index Position
     * 5        1
     * 4        2 
     * 3        3
     * 2        4
     * 1        5
     * 0        6
     * Formula = index-position+size
     * @param position from where to retrive.
     * @return int value from the item.
     */
    int peek(int position)
    {
        int x = -1;
        if ((top - position + size) < 0)
        {
            cout << "Invalid Position";
        }
        else
        {
            x = s[top - position + size];
        }
        return x;
    }

    /**
     * @brief Return value according to top
     *
     * @return int
     */
    int stackTop()
    {
        int x = -1;
        if (isEmpty())
        {
            cout << "Stack Underflow";
        }
        else
        {
            x = s[top];
        }
        return x;
    }
    /**
     * @brief Returns true if stack is empty.
     *
     * @return bool
     */
    bool isEmpty()
    {
        if (this->top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    /**
     * @brief Returns true if stack is full.
     *
     * @return true
     * @return false
     */
    bool isFull()
    {
        if (this->top == size - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int size;

    // getting size from user
    cout << "Enter Stack Size";
    cin >> size;

    Stack *s = new Stack(size);

    s->push(1);

    s->pop();

    s->push(4);

    cout<<"Value at Top : "<<s->stackTop()<<endl;

    cout<<"Value at position 6 : "<<s->peek(6)<<endl;
}