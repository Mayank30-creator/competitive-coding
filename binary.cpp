#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int start = 0;
        int end = n - 1;
        int count = 0;
        while (end < start)
        {
            if (s[start] != s[end])
            {
                count++;
            }
            end--;
            start++;
        }
        int ans = k - count;
        if ((ans >= 0 && ans % 2 == 0) || (ans >= 0 && n % 2 == 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
