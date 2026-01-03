#include <iostream>
using namespace std;

int main()
{
    int arr[20], n = 10;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ch;
    while (true)
    {
        cout << "\nOptions:\n1. Insert\n2. Delete\n3. Search\n4. Update\n5. Show\n6. Exit\nChoice: ";
        cin >> ch;

        if (ch == 6)
            break;

        if (ch == 1)
        {
            int pos, val;
            cout << "Enter position and value: ";
            cin >> pos >> val;
            for (int i = n; i > pos; i--)
                arr[i] = arr[i - 1];
            arr[pos] = val;
            n++;
        }
        else if (ch == 2)
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            for (int i = pos; i < n - 1; i++)
                arr[i] = arr[i + 1];
            n--;
        }
        else if (ch == 3)
        {
            int val, idx = -1;
            cout << "Enter number: ";
            cin >> val;
            for (int i = 0; i < n; i++)
                if (arr[i] == val)
                {
                    idx = i;
                    break;
                }
            if (idx != -1)
                cout << "Found at index " << idx << endl;
            else
                cout << "Not found\n";
        }
        else if (ch == 4)
        {
            int pos, val;
            cout << "Enter index and new number: ";
            cin >> pos >> val;
            arr[pos] = val;
        }
        else if (ch == 5)
        {
            cout << "Array: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
}
