#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    long long mini = INT_MAX, sum = 0;
    for (int i = 0; i < n; i++)
    {
      sum += arr[i];
      mini = min(mini, arr[i]);
    }
    cout << sum - mini * arr.size() << endl;
  }
  return 0;
}