#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node *previous;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void append(char value)
{
    Node *newnode = new Node();
    newnode->data = value;
    newnode->next = NULL;
    newnode->previous = NULL;

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->previous = tail;
        tail = newnode;
    }
}

void prepend(char value)
{
    Node *newnode = new Node();
    newnode->data = value;
    newnode->next = NULL;
    newnode->previous = NULL;

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        head->previous = newnode;
        head = newnode;
    }
}

void remove(char value)
{
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            if (temp->previous != NULL)
            {
                temp->previous->next = temp->next;
            }
            else
            {
                head = temp->next;
            }

            if (temp->next != NULL)
            {
                temp->next->previous = temp->previous;
            }
            else
            {
                tail = temp->previous;
            }

            delete temp;
            return;
        }
        temp = temp->next;
    }
}

void traversal()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    append('a');
    append('b');
    prepend('z');
    traversal();
    
    remove('b');


    traversal();

    return 0;
}