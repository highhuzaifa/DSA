#include <iostream>
using namespace std;

void linearsearch(int arr[], int tar, int size)
{
    for (int i = 0; i <= size; i++)
    {
        if (tar == arr[i])
        {

            cout << "Element fount at index = " << i << "\n Element = " << arr[i] << endl;
        }
    }
    cout << "Not Found" << endl;
}

int reclinearsearch(int arr[], int tar, int size, int i = 0)
{
    if (i == size)
    {
        return -1;
    }

    if (tar == arr[i])
    {
        cout << "Element fount at index = " << i << "\n Element = " << arr[i] << endl;
        return i;
    }
    return reclinearsearch(arr, tar, size, i + 1);
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7, 8, 9};

    int tar = 2;

    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    linearsearch(arr, tar, size);
    cout << reclinearsearch(arr, tar, size, i);

    return 0;
}