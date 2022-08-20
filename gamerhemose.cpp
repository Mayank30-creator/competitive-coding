#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, H;
        cin >> n >> H;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[n];
        }
        sort(arr, arr + n);
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (H % (arr[n - 1] + arr[n - 2]) == 0)
            {
                ans += 2 * (H / arr[n - 1] + arr[n - 2]);
                cout << ans << "\n";
            }
            else if (H % (arr[n - 1] + arr[n - 2]) <= arr[n - 1])
            {
                ans += 2 * floor(H / (arr[n - 1] + arr[n - 2])) + 1;
                cout << ans << "\n";
            }
            else
            {
                ans += 2 * floor(H / (arr[n - 1] + arr[n - 2])) + 2;
                cout << ans << "\n";
            }
        }
    }
    return 0;
}