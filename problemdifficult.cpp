#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
       int arr[4];
       for (int i = 0; i < 4; i++)
       {
          cin>> arr[i];
       }
       int res=1;
       for (int i = 1; i < 4; i++)
       {
           if(arr[i]=arr[res-1])
           {
              arr[i]=arr[res];
              res++;
           }
       }
       cout << res-1 << endl;
    }
    return 0;
}