#include <bits/stdc++.h>

using namespace std;

void minimumOperations(string S, int N)
{
    int ans = 0;

    int cntOne = 0;

    for (int i = N - 1; i >= 0; i--)
    {

        if (S[i] == '0')
        {
            ans++;
        }

        else
        {
            cntOne++;
        }
    }

    cout << max(ans, cntOne + 1);
}

// Driver Code
int main()
{
    string S;
    cin >> S;
    int N = S.length();
    minimumOperations(S, N);

    return 0;
}
