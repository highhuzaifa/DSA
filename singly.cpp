#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void append(char element) // insertion at end
{
    Node *newnode = new Node();
    newnode->data = element;
    newnode->next = NULL;

    if (head == NULL) // agar pehla node hi null ha to head or tail barabar honge
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode; // purana tail ka address (tail->next) = naya address
        tail = newnode;       // phr naye address ko tail bana dia to end
    }
}

void prepend(char element) // insertion at the beginning
{
    Node *newnode = new Node();
    newnode->data = element;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head; // we take new node to the start thats why , alag se newnode ka next ko head kia
        head = newnode;       // or phr head ko change kia
    }
}

bool search(char value)
{
    Node *temp = head;
    while (head != NULL)
    {
        if (temp->data == value)
        {
            return true;
        }
    }
    {
        temp = temp->next;
    }

    return false;
}

void update(char value, char replace)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            temp->data = replace;
            break;
        }
        temp = temp->next;
    }
}

void remove(char element)
{
    Node *current = head;
    Node *previous = NULL;
    Node *temp = NULL;

    while (current != NULL)
    {
        if (current == head)
        {
            temp = head;       // temp jaega head pe
            head = head->next; // head ka next ko head bana dega
            delete temp;       // or purana head jo temp tha woh delete hojae ga
            return;
        }
        else if (current == tail)
        {
            temp = tail;
            previous->next = NULL;
            tail = previous;
            delete temp;
            return;
        }
        else
        {
            temp = current;                 // agar woh element kaheen middle me hai to current temp kiu k delete
            previous->next = current->next; // previous or current ka secound ka link
            delete temp;
            return;
        }
    }
    previous = current;
    current = current->next;
}

void traversal()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    prepend('a');
    append('A');
    append('b');

    traversal();
    return 0;
}