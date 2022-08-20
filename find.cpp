#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {5, 10, 7, 10, 20};
    auto it = find(v.begin(), v.end(), 25);
    if (it == v.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found at " << it - v.begin() << endl;
    }
    return 0;
}