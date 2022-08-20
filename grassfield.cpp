#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d;
    cin>> a >> b >> c >> d;
    int sum = a + b + c + d;
    if(sum==4)
      cout << 2 << endl;
      else if(sum==2)
        cout << 1 << endl;
      else
        cout << 0 << endl;
    }
      return 0;
}