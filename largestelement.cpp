#include <bits/stdc++.h>
using namespace std;
int GetLargest(int arr[], int n)
{
    int i;
    bool flag;
    for (i = 0; i < n; i++)
    {
        flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
            return i;
    }

    return -1;
}
int main()
{

    int arr[] = {89, 102, 65, 47, 77, 23, 22};
    int n = 7;
    cout << GetLargest(arr, 7);
}