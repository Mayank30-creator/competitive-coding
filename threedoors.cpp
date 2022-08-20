#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    vector<int> arr(3);
    for (int i = 1; i <= 3; i++)
    {
      cin >> arr[i];
    }
    int count = 1;
    if (x == 0)
    {
      cout << "NO" << endl;
      return 0;
    }

    else
    {
      if (arr[x] == 1 || arr[x] == 2 || arr[x] == 3)
        count++;
      else
      {
        cout << "NO" << endl;
        return 0;
      }
    }
    if (count == 2)
    {
      if (arr[x] == 1 || arr[x] == 2 || arr[x] == 3)
        count++;
      else
      {
        cout << "NO" << endl;
        return 0;
      }
    }
    if (count == 3)
      cout << "YES" << endl;
  }
  return 0;
}