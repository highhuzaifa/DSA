#include <iostream>
using namespace std;

void binarysearch(int arr[], int size, int tar)
{
    int st = 0;
    int end = size - 1;
    int mid = st + (end - st) / 2;

    while (st <= end)
    {
        if (tar == arr[mid])
        {
            cout << arr[mid];
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
        }
        else if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            cout << "Not found";
        }
    }
}
int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7, 8};
    int tar = 2;
    int size = 7;

    binarysearch(arr, size, tar);

    return 0;
}