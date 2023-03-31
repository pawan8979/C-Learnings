#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    int visit[100] = {0};
    visit[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while (!q.empty())
    {
        int frontnode = q.front();
        q.pop();
        cout << frontnode << " ";

        for (auto it : adj[frontnode])
        {
            if (!visit[it])
            {
                visit[it] = 1;
                q.push(it);
            }
        }
    }
}

int main()
{
    int V = 4;          // Number of vertices in the graph
    vector<int> adj[V]; // Array of vectors to represent the graph

    // Add edges to the graph
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(2);
    adj[2].push_back(0);
    adj[2].push_back(3);
    adj[3].push_back(3);

    // Call the BFS function
    bfsOfGraph(V, adj);

    return 0;
}