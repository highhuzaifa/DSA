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
        tail->previous = tail;
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
    Node *current = head;
    Node *temp = NULL;

    if (current == head)
    {
        temp = head;
        head = head->next;
        head->previous = NULL;
        delete temp;
        return;
    }
    else if (current == tail)
    {
        temp = tail;
        tail = tail->previous;
        tail->next = NULL;
        delete temp;
        return;
    }
    else
    {
        current = temp;
        current->previous->next = current->next;
        current->next->previous = current->previous;
        delete temp;
        return;
    }
    current = current->next;
}
int main()
{
    return 0;
}