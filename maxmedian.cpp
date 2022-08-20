#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, s;
        cin >> n >> s;
        int l = 0;
        int r = s + 1;
        while (r - l > 1)
        {
            long long M = (l + r) / 2;
            long long m = n / 2 + 1;
            if (M * m <= s)
            {
                l = M;
            }
            else
            {
                r = M;
            }
        }
        cout << l << endl;
    }
    return 0;
}