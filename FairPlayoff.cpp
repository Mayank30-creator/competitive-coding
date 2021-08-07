#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> a(4);
        for(int &x : a)
        cin>>x;
        if(min(a[0],a[1])> max (a[2],a[3]) ||  min(a[2],a[3]) > max (a[0],a[1]))
        cout << "NO" << endl;
        else
        cout << "YES"  << endl;
    
    }
}
