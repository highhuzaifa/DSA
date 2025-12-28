#include <iostream>
using namespace std;
int main()
{
    bool arr[5][6] = {
        {true, false, true, false, false, true},
        {false, true, true, true, false, false},
        {true, true, false, false, true, true},
        {false, false, true, true, false, false},
        {true, true, false, true, true, false}};

    int absentCount = 0;

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 6; j++)
        {
            if (arr[i][j])
            {
                cout << "Present";
            }
            else
            {
                cout << "Absent";
                absentCount++;
            }
            cout << " ";
        }
        cout << endl;
    }

    cout << "Absent Students :" << absentCount << endl;

    return 0;
}