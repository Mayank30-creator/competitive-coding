#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N, D;
        cin >> N >> D;
        long long d = 0;
        long long infected = 1;
        for (int d = 1; d <= D; d++)
        {
            if (d <= 10)
            {
                infected = 2 * infected;
            }
            else
            {
                infected = 3 * infected;
            }
        }
        if (infected >= N)
        {
            cout << N << endl;
        }
        else
        {
            cout << infected << endl;
        }
    }
    return 0;
}