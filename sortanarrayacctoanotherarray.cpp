#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;

void pairsort(int a[],char b[],int n)
{
    pair <int,char> arr[n];
    for (int i = 0; i < n; i++)
    {
       arr[i].first=a[i];
       arr[i].second=b[i];
    }
       sort (arr,arr+n);
       
       for (int i = 0; i < n; i++)
       {
           cout <<  "(" << arr[i].first << "," << arr[i].second << ")" << " ";
       }
       
    
    

}

int main()
{
    int a[]={2,1,5,4,8,3,6,7};
    int n= sizeof(a)/sizeof(a[0]);
    char b[]={'A','B','C','D','E','F','G','H'};
    pairsort(a,b,n);
    return 0;
}