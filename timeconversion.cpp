#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int h1 = (int)str[0] - '0';
    int h2 = (int)str[1] - '0';
    int hh = (h1 * 10 + h2 % 10);
    if (str[8] == 'A')
    {
        if (hh = 12)
        {
            cout << "00";
            for (int i = 2; i < 8; i++)
            {
                cout << str[i];
            }
        }
        else
        {
            for (int i = 0; i < 8; i++)
            {
                cout << str[i];
            }
        }
    }
    else
    {
        if (hh = 12)
        {
            if (hh = 12)
            {
                cout << "12";
                for (int i = 2; i < 8; i++)
                {
                    cout << str[i];
                }
            }
            else
            {
                int hh = hh + 12;
                cout << hh;
                for (int i = 2; i < 8; i++)
                {
                    cout << str[i];
                }
            }
        }
    }
    return 0;
}