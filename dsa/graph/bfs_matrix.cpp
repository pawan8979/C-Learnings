#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfsOfGraph(int v, vector<int> adj[])
{
    int visit[v] = {0};
    int dis[v] = {0};
    visit[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while (!q.empty())
    {
        int frontnode = q.front();
        q.pop();
        cout << frontnode << " " << endl;

        for (auto it : adj[frontnode])
        {
            if (!visit[it])
            {
                dis[it] = dis[frontnode] + 1;
                visit[it] = 1;
                q.push(it);
            }
        }
    }
    cout << "Distance" << endl;
    for (int i = 0; i < v; i++)
    {
        cout << dis[i] << " ";
    }
}

int main()
{
    int v = 4;          // Number of vertices in the graph
    vector<int> adj[v]; // Array of vectors to represent the graph

    // Add edges to the graph
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(2);
    adj[2].push_back(0);
    adj[2].push_back(3);
    adj[3].push_back(3);

    // Call the BFS function
    bfsOfGraph(v, adj);

    return 0;
}