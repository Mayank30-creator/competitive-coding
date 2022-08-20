#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,i=0,temp=0,c=1;
        cin>>k;
        while(i<k)
        {
            if(i%3!=0 && i%10!=3)
            {
                   temp=c;
                   i++;
            }
            c++;
        }

     cout << temp << endl;

    }
    return 0;
}