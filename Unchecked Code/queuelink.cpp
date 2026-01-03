#include <iostream>
using namespace std;

struct Node
{
    string data;
    Node *next;
};

class Queue
{
    Node *front;
    Node *rear;

public:
    Queue()
    {
        rear = NULL;
        front = NULL;
    }

    void enqueue(string value)
    {
        Node *newnode = new Node();
        newnode->data = value;
        newnode->next = NULL;

        if (front == NULL)
        {
            front = newnode;
            rear = newnode;
        }
        else
        {
            front->next = newnode;
            rear = newnode;
        }
    }

    bool isEmpty()
    {
        if (front == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            Node *temp = front;
            string data = front->data;
            front = front->next;

            if (front == NULL)
            {
                rear = NULL;
            }
            delete temp;
            return data;
        }
    }
};

int main()
{

    return 0;
}