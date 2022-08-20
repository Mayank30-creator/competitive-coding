#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n, x;
      cin >> n >> x;
      vector<int> arr(2*n);
      for (int i = 0; i < 2*n;i++)
      {
        cin >> arr[i];
      }
      bool flag = true;
      for (int i = 0; i<n;i++)
      {
         if((arr[i+n]-arr[i])<x)
         {
           flag = false;
           break;
         }
      }
      if(flag==false)
        cout << "NO" << endl;
        else
          cout << "YES" << endl;
    }
    return 0;
}