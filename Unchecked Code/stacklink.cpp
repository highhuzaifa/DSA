#include <iostream>
using namespace std;

struct Node
{
    string data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(string value)
    {
        Node *newnode = new Node();
        newnode->data = value;
        newnode->next = NULL;

        if (top == NULL)
        {
            top = newnode;
        }
        else
        {
            newnode->next = top;
            top = newnode;
        }
    }

    bool isEmpty()
    {
        if (top == NULL)
            return true;
        else
            return false;
    }

    string pop()
    {
        if (isEmpty())
        {
            cout << "UnderFlow" << endl;
        }
        else
        {
            string poppedValue = top->data;
            Node *temp = top;
            top = top->next;
            delete temp;
            return poppedValue;
        }
    }
};

int main()
{
    Stack s1;
    s1.push("H");
    s1.push("U");

    while (!s1.isEmpty())
    {
        cout << "Stack Of Number" << "\n";
    }

    return 0;
}