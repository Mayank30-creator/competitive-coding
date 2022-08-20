#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n + 1, true);
    v[0] = v[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (v[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
            {
                v[j] = false;
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << v[j] << " ";
    }
}