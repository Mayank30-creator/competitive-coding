#include <iostream>
using namespace std;
int main()
{
    int n, k, t = 0;
    cin >> n >> k;
    while (k <= 240)
    {
        t++;
        k += 5 * t;
    }
    cout << min(t - 1, n);
}
