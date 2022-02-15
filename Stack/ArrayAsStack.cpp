
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
 * Constructor  -
 * push(T x)    - pushes a single value into the stack
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
     *
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
     *
     */
    ~Stack()
    {
        delete[] s;
    }

    /**
     * @brief Method to input sinlge value in the stack.
     * @details This method inputs a single value into the stack.
     * @Complexity -
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
     * @brief
     *
     * @return int
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
     * @brief
     * @details description
     * @param position
     * @return int
     */
    int peek(int position)
    {
        int x = -1;
        if ((top - position + 1) < 0)
        {
            cout << "Invalid Position";
        }
        else
        {
            x = s[top - position + 1];
        }
        return x;
    }

    /**
     * @brief
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
     * @brief
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
     * @brief
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

    Stack s(size);

    s.push(1);

    s.pop();

    s.push(4);

    cout<<"Value at Top : "<<s.stackTop()<<endl;

    cout<<"Value at position 4 : "<<s.peek(1)<<endl;
}