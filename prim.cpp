#include <bits/stdc++.h>
using namespace std;
#define V 5

int PrimMST(int graph[V][V])
{
  int key[V];
  bool MstSet[V] = {false};
  fill(key, key + V, INT_MAX);
  key[0] = 0;
  int res = 0;

  for (int count = 0; count < V; count++)
  {
    int u = -1;
    for (int i = 0; i < V; i++)
    {

      if (!MstSet[i] && (u == -1 || key[i] < key[u]))
      {
        u = i;
      }
    }
    MstSet[u] = true;
    res += key[u];
    for (int v = 0; v < V; v++)
    {
      if (!graph[u][v] && !MstSet[v])
      {
        key[u] = min(graph[u][v], key[v]);
      }
    }
  }
  return res;
}
int main()
{
  int graph[V][V] = {{0, 2, 0, 6, 0},
                     {2, 0, 3, 8, 5},
                     {0, 3, 0, 0, 7},
                     {6, 8, 0, 0, 9},
                     {0, 5, 7, 9, 0}};
  cout << PrimMST(graph) << endl;
  return 0;
}