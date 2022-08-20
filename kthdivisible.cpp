#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        int count = 0;
        int i = 1;
        while (count <= k)
        {
            if (i % n != 0)
            {
                count++;
            }
            i++;
        }
        if (count == k)
        {
            cout << i << endl;
        }
    }

    return 0;
}