#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << sum - max << " " << sum - min << endl;
    return 0;
}
