#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        char c;
        cin >> s >> c;
        int n = s.size();
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c && (i % 2) == 0)
            {
                flag = true;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}