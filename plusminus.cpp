#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int total=n;
    int N;
    while(n--)
    cin>>N;
    float pos=0.,neg=0.,zero=0.;
    {
        if(N>0)
        {
            pos++;
        }
        else if(N<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    
    }
    
    cout << pos/total<< endl;
    cout << neg/total << endl;
    cout << zero/total << endl;
    return 0;
}