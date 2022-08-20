#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] - 'a' == str[i + 1] - 'a' || (str[i] - 'a') == (str[i + 1] - 'b'))
            count++;
    }
    cout << count << endl;
}