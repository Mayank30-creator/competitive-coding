#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int ans = 0;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<pair<int, int>> vect;
        for (int i = 0; i < n; i++)
        {
            vect.push_back(make_pair(a[i], b[i]));
        }
        sort(vect.begin(), vect.end());
        ans = k;
        for (int i = 0; i < n; i++)
        {
            if (vect[i].first <= ans)
            {
                ans = ans + vect[i].second;
            }
            else if (vect[i].first > k)
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}