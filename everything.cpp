#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        long long sum = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        for (int i = 1; i <= n - 1; i++)
        {
            if (sum - arr[i] == arr[i] * (n - 1))
            {
                flag = false;
                break;
            }
            else
            {
                continue;
            }
        }
        if (flag = false)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
