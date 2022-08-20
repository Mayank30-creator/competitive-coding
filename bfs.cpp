#include <bits/stdc++.h>
using namespace std;
void BFS(vector<int> adj[], int s, int v)
{
    bool visited[v + 1];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int i = 0; i < v; i++)
        {
            for (int v : adj[i])
            {
                if (visited[i] == false)
                {
                    visited[i] = true;
                    q.push(v);
                }
            }
        }
    }
}
int main()
{
}