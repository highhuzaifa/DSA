#include <iostream>
using namespace std;

void insertion(int arr[], int element, int index, int size, int capacity)
{
    if (size - 1 >= capacity)
    {
        cout << "capacity is full" << endl;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        size = size + 1;
    }
}

void traversal(int arr[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int array[100] = {10, 20, 30, 40};
    insertion(array, 4, 3, 4, 100);
    traversal(array, 4);
    return 0;
}