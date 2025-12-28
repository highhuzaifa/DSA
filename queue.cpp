#include <iostream>
using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    string *container;

public:
    Queue(int s)
    {
        size = s;
        front = rear = -1;
        container = new string[size];
    }

    void enqueue(string value)
    {
        if (front == size - 1)
        {
            cout << "Queue is alredy Full" << endl;
        }
        else
        {
            container[++rear] = value;
        }
    }

    bool isEmpty()
    {
        if (front == rear)
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
            cout << "Queue is empty";
        }
        else
        {
            string value = container[++front];

            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            return value;
        }
    }
};

int main()
{
    Queue cars(3);
    cars.enqueue("BMW");
    cars.enqueue("BMW");
    cars.enqueue("BMW");

    while (!cars.isEmpty())
    {
        cout << cars.dequeue() << "\n";
    }
    return 0;
}