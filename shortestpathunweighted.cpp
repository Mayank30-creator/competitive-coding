#include <bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj[], int s, int dest)
{
    adj[s].push_back(dest);
    adj[dest].push_back(s);
}

void BFS(vector<int> adj[], int s, int dest)
{
    int dist[dest] = {INT_MAX};
    dist[s] = 0;
    queue<int> q;
    bool visited[dest];
    for (int i = 0; i < dest; i++)
    {
        visited[i] = false;
    }
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : adj[u])
        {
            if (visited[dest] == false)
            {
                dist[dest] = dist[s] + 1;
                visited[dest] = true;
                q.push(s);
            }
        }
    }
    for (int i = 0; i <= dest; i++)
    {
        cout << dist[i] << " ";
    }
}

/*void printdist(vector<int> dist, int s, int dest)
{
    for (int i = s; i <= dest; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;
}*/

int main()
{
    int v = 8;
    vector<int> adj[v];
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 3);
    add_edge(adj, 1, 2);
    add_edge(adj, 3, 4);
    add_edge(adj, 3, 7);
    add_edge(adj, 4, 5);
    add_edge(adj, 4, 6);
    add_edge(adj, 4, 7);
    add_edge(adj, 5, 6);
    add_edge(adj, 6, 7);
}