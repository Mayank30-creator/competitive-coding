#include <bits/stdc++.h>
using namespace std;
bool SortedArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    cout << SortedArray(arr, n) << endl;
    return 0;
}