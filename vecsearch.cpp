// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int Search(vector<int> arr, int x)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int j = Search(arr, x);
    cout << j << endl;
    return 0;
}