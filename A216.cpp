#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin>>n;
    int x,y;
    x=(int)n;
    y=(int)(n*10)%10;
    if(y>=0 && y<=2)
    {
        cout << x << "-" << endl;
    }
    else if(y>=3 && y<=6)
    {
        cout << x << endl;
    } 
    else
    {
        cout << x << "+" << endl;
    }

return 0;
}