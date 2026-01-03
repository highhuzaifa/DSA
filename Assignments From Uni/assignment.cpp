#include <iostream>
using namespace std;
int main()
{

    int studentIds[] = {101, 104, 105, 107, 109};
    int updatedIds[5];

    for (int i = 0; i <= 4; i++)
    {
        updatedIds[i] = studentIds[i];
    }

    for (int i = 0; i <= 6; i++)
    {
        cout << updatedIds[i] << " ";
    }

    return 0;
}