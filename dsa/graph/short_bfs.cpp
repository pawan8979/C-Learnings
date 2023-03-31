#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
vector<int> g[10000]; // adjacency list
int main()
{
    int n; // vertices
    cout << "Enter no. of vetices" << endl;
    cin >> n;
    int edges;
    cout << "Enter no. of edges" << endl;
    cin >> edges;
    while (edges--)
    {
        int x, y;
        cout << "Enter the edge" << endl;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int visited[n] = {0};
    int d[n], p[n];
    int s = 0;
    visited[s] = 1;
    d[s] = 0;
    p[s] = -1;
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : g[v])
        {
            if (!visited[u])
            {
                visited[u] = 1;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
    cout << "Shortest distance:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << d[i] << " ";
    }
    // path till destination
    cout << endl;
    int dest = 5;
    vector<int> path;
    if (visited[dest] == 0)
    {
        cout << "No path" << endl;
    }
    else
    {

        int x = dest;
        while (x != -1)
        {
            path.push_back(x);
            x = p[x];
        }

        reverse(path.begin(), path.end());
    }

    cout << "Shortest path: " << endl;
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
    cout << endl;
    return 0;
}