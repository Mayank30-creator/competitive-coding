#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int findGCD(long long arr[], int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);
  }
  return result * n;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    cout << findGCD(arr, n) << endl;
  }
  return 0;
}
