#include <bits/stdc++.h>
using namespace std;

int cost(string &s1, string &s2)
{
  int res = 0;
  for (int i = 0; i < s1.length(); i++)
  {
    res += abs(s1[i] - s2[i]);
  }
  return res;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        ans = min(ans, cost(arr[i], arr[j]));
      }
    }
    cout << ans << endl;
  }
  return 0;
}