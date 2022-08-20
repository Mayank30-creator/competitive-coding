#include <bits/stdc++.h>
using namespace std;

int DeleteArray(int *arr, int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    if (i == n)
        return n;
    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return (n - 1);
}
int main()
{

    int arr[] = {2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    n = DeleteArray(arr, n, x);
    cout << "NEW ARRAY :----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}