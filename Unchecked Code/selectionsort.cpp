#include <iostream>
using namespace std;

void selectionSort(int array[], int size)
{
    int min = INT_MAX;
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        min = INT_MAX;
        for (int j = i; j < size; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                index = j;
            }
        }
        array[index] = array[i];
        array[i] = min;
    }
}

void insertionSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void arrayDisplay(int array[])
{
    cout << "{";

    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }
    cout << "}";
}

int main()
{
    int arr[] = {2, 5, 7, 8, 1, 0};
    selectionSort(arr, 6);
    arrayDisplay(arr);

    cout << endl;

    insertionSort(arr, 6);
    arrayDisplay(arr);

    return 0;
}