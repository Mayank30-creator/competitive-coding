#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll sec;
    cin >> sec;
    ll millisec = sec * 1000;
    ll microsec = sec * 1000000;
    ll nanosec = sec * 1000000000;
    cout << "MilliSecond = " << millisec << endl;
    cout << "MicroSecond=" << microsec << endl;
    cout << "NanoSecond =" << nanosec << endl;
    return 0;
}