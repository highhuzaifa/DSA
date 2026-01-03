#include <iostream>
using namespace std;

void binarysearch(int arr[], int size, int tar)
{
    int st = 0;
    int end = size - 1;
    

    while (st <= end)
    {

        int mid = st + (end - st) / 2;
        if (tar == arr[mid])
        {
            cout <<"Element is at index: " << mid << endl;
            return;
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
        }
        else if (tar > arr[mid])
        {
            st = mid + 1;
        }
    }
    cout << "Not found\n";
}
int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7, 8};
    int tar = 3;
    int size = 7;

    binarysearch(arr, size, tar);

    

    return 0;
}