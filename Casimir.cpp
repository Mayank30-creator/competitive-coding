#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        ll aCount = 0, bCount = 0, cCount = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'A')
                aCount++;
            if (str[i] == 'B')
                bCount++;
            if (str[i] == 'C')
                cCount++;
        }
            if (aCount == bCount && cCount == 0)
            {
                cout << "YES" << endl;
                continue;
            }
            if (bCount == cCount && aCount == 0)
            {
                cout << "YES" << endl;
                continue;
            }
            if (bCount - cCount == aCount)
            {
                cout << "YES" << endl;
                continue;
            }
            if (bCount - aCount == cCount)
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
            }
        
    }
    return 0;
}