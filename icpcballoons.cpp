#include<bits/stdc++.h>
using namespace std;
int main(){

  int t, n;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin>>s;
    bool visited[26] = {false};
    int res = 0;
    for(char c: s)
    {
      if(!visited[c-'A'])
      {
        res += 2;
        visited[c - 'A'] = true;
      }
      else{
        res++;
      }
    }
    cout << res << endl;
  }
    return 0;
}