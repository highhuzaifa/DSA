#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

Node *start = NULL;

void insertFront(int x)
{
    Node *temp = new Node;
    temp->value = x;
    temp->next = start;
    start = temp;
}

void insertBack(int x)
{
    Node *temp = new Node;
    temp->value = x;
    temp->next = NULL;

    if (start == NULL)
    {
        start = temp;
        return;
    }
    Node *p = start;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = temp;
}

void removeNode(int x)
{
    if (start == NULL)
        return;
    if (start->value == x)
    {
        Node *del = start;
        start = start->next;
        delete del;
        return;
    }
    Node *p = start;
    while (p->next != NULL && p->next->value != x)
    {
        p = p->next;
    }
    if (p->next != NULL)
    {
        Node *del = p->next;
        p->next = del->next;
        delete del;
    }
}

void findNode(int x)
{
    Node *p = start;
    int index = 0;
    while (p != NULL)
    {
        if (p->value == x)
        {
            cout << "Element " << x << " found at index " << index << endl;
            return;
        }
        index++;
        p = p->next;
    }
    cout << "Element not found\n";
}

void showList()
{
    Node *p = start;
    cout << "List: ";
    while (p != NULL)
    {
        cout << p->value << " -> ";
        p = p->next;
    }
    cout << "NULL\n";
}

int main()
{
    int ch, num;
    while (true)
    {
        cout << "\nMenu:\n1. Add at Front\n2. Add at Back\n3. Remove\n4. Search\n5. Print\n6. Exit\nChoice: ";
        cin >> ch;
        if (ch == 6)
            break;
        switch (ch)
        {
        case 1:
            cout << "Enter number: ";
            cin >> num;
            insertFront(num);
            break;
        case 2:
            cout << "Enter number: ";
            cin >> num;
            insertBack(num);
            break;
        case 3:
            cout << "Enter number to remove: ";
            cin >> num;
            removeNode(num);
            break;
        case 4:
            cout << "Enter number to search: ";
            cin >> num;
            findNode(num);
            break;
        case 5:
            showList();
            break;
        }
    }
}
