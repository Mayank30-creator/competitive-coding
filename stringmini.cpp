#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 1; i <= n; i++)
    {
      cin >> arr[i];
    }
    string s(m, 'B');
    for (int i = 1; i <= n; i++)
    {

      if (s[arr[i]] == 'B')
      {
        s[arr[i]] = 'A';
      }
      else
      {
        s[m + 1 - arr[i]] = 'A';
      }
    }
    cout << s << endl;
  }
  return 0;
}