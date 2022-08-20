#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    int n = s.length();
    int i = 0;
    int count = 0;
    while (n > i)
    {
        if (s[i] == '0' && s[i + 1] == '1')
        {
            count++;
            s[i] = '1';
            s[i + 1] = '0';
            i = 0;
        }
        i++;
    }
    cout << count << endl;
}