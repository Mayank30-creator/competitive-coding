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
        for (int i = 0; i <= 9; i++)
        {
            n = n + i;
            if (n % 7 == 0)
            {
                break;
            }
        }
        cout << n << endl;
    }
    return 0;
}