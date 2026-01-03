#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void insertCircular(int element)
{
    Node *newnode = new Node();
    newnode->data = element;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        newnode->next = head;
    }
    else
    {
        newnode->next = head;
        tail->next = newnode;
        tail = newnode;
    }
}

void traversal()
{

    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    insertCircular(1);
    insertCircular(2);
    insertCircular(3);
    insertCircular(4);
    insertCircular(5);
    traversal();
    return 0;
}