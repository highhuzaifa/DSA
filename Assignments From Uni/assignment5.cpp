#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *tail = NULL;

void addNode(int x)
{
    Node *temp = new Node;
    temp->data = x;
    if (tail == NULL)
    {
        tail = temp;
        tail->next = tail;
    }
    else
    {
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
    }
}

void deleteNode(int x)
{
    if (tail == NULL)
        return;
    Node *curr = tail->next, *prev = tail;
    do
    {
        if (curr->data == x)
        {
            if (curr == tail && curr->next == tail)
            {
                delete curr;
                tail = NULL;
            }
            else
            {
                prev->next = curr->next;
                if (curr == tail)
                    tail = prev;
                delete curr;
            }
            return;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != tail->next);
}

void printList()
{
    if (tail == NULL)
    {
        cout << "Empty list\n";
        return;
    }
    Node *p = tail->next;
    cout << "Circular List: ";
    do
    {
        cout << p->data << " -> ";
        p = p->next;
    } while (p != tail->next);
    cout << "(head)\n";
}

int main()
{
    int ch, num;
    do
    {
        cout << "\n1. Add\n2. Delete\n3. Show\n4. Exit\nChoice: ";
        cin >> ch;
        if (ch == 1)
        {
            cout << "Enter value: ";
            cin >> num;
            addNode(num);
        }
        else if (ch == 2)
        {
            cout << "Enter value: ";
            cin >> num;
            deleteNode(num);
        }
        else if (ch == 3)
            printList();
    } while (ch != 4);
}
