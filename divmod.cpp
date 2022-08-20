#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r, a;
        cin >> l >> r >> a;
        long long max, maxi = 0;
        while (l <= r)
        {
            max = floor(l / a) + l % a;
            if (max > maxi)
            {
                maxi = max;
            }
            l++;
        }
        cout << maxi << endl;
    }
}