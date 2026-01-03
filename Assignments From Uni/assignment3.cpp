#include <iostream>
using namespace std;

int main()
{
    int arr[20], n = 10;
    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int choice;
    do
    {
        cout << "\nMenu:\n1. Insert\n2. Delete\n3. Search\n4. Update\n5. Display\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int pos, val;
            cout << "Enter position (0-" << n << ") and value: ";
            cin >> pos >> val;
            for (int i = n; i > pos; i--)
                arr[i] = arr[i - 1];
            arr[pos] = val;
            n++;
        }
        else if (choice == 2)
        {
            int pos;
            cout << "Enter position (0-" << n - 1 << "): ";
            cin >> pos;
            for (int i = pos; i < n - 1; i++)
                arr[i] = arr[i + 1];
            n--;
        }
        else if (choice == 3)
        {
            int val, found = -1;
            cout << "Enter value to search: ";
            cin >> val;
            for (int i = 0; i < n; i++)
                if (arr[i] == val)
                {
                    found = i;
                    break;
                }
            if (found != -1)
                cout << "Found at index " << found << endl;
            else
                cout << "Not found\n";
        }
        else if (choice == 4)
        {
            int pos, val;
            cout << "Enter index and new value: ";
            cin >> pos >> val;
            arr[pos] = val;
        }
        else if (choice == 5)
        {
            cout << "Array: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    } while (choice != 6);
}
