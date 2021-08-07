#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,d,h,l=0,i;
	    string sol="NO";
	    cin>>n>>d>>h;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	    cin>>arr[i];
        }
        for(int i=0;i<n;i++){
	    if(arr[i]>0)
	    {
	        l+=arr[i];
	    }
	    else
	    {
	        l=max(l-d,0);
	    }
	    if(l>h)
	    {
	        sol ="YES" ;
	        cout<< sol <<endl;
	        break;
	    }
        }
	}
	return 0;
}
