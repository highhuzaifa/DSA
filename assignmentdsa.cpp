#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int vertices = 4;
    vector<int> adj[4]; // adjacency list

    // Adding edges
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(3);
    adj[3].push_back(1);

    // Printing adjacency list
    cout << "Adjacency List:\n";
    for (int i = 0; i < vertices; i++)
    {
        cout << i << " -> ";
        for (int j : adj[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
