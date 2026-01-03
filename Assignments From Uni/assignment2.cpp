#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *last = NULL;

void insertAtEnd(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    if (last == NULL)
    {
        last = newNode;
        last->next = last;
    }
    else
    {
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }
}

void deleteNode(int value)
{
    if (last == NULL)
        return;

    Node *curr = last->next, *prev = last;
    do
    {
        if (curr->data == value)
        {
            if (curr == last && curr->next == last)
            {
                delete curr;
                last = NULL;
            }
            else
            {
                prev->next = curr->next;
                if (curr == last)
                    last = prev;
                delete curr;
            }
            return;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != last->next);
}

void display()
{
    if (last == NULL)
    {
        cout << "List is empty\n";
        return;
    }
    Node *temp = last->next;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != last->next);
    cout << "(back to head)\n";
}

int main()
{
    int choice, val;
    do
    {
        cout << "\nOperations on Circular List:\n1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            insertAtEnd(val);
            break;
        case 2:
            cout << "Enter value to delete: ";
            cin >> val;
            deleteNode(val);
            break;
        case 3:
            display();
            break;
        }
    } while (choice != 4);
}
