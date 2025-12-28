#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int top;
    string *container;

public:
    Stack(int s)
    {
        size = s;
        top = -1;
        container = new string[size]; // new = memory allocation , of data type string of size
    }
    void push(string value)
    {
        if (top >= size - 1)
        {
            cout << "Stack Overflow";
        }
        container[++top] = value;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string pop()
    {
        if (isEmpty())
        {
            return "UnderFlow";
        }
        else
        {
            string value = container[top--];
            return value;
        }
    }

    ~Stack()
    {
        delete[] container;
    }
};

int main()
{
    Stack s1(4);
    s1.push("Huzaifa");
    s1.push("Tariq");
    s1.push("Huzaifa");
    s1.push("push");
    // s1.push("Top");

    cout << s1.pop() << "\n";
    cout << s1.pop() << "\n";
    cout << s1.pop() << "\n";
    cout << s1.pop() << "\n";
    cout << s1.pop() << "\n";

    return 0;
}