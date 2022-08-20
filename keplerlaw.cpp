#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int t1, t2, r1, r2;
        cin >> t1 >> t2 >> r1 >> r2;
        float time1 = (t1 * t1) / (r1 * r1 * r1);
        float time2 = (t2 * t2) / (r2 * r2 * r2);
        if (time1 == time2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
