#include<bits/stdc++.h>
using namespace std;

int Min(int a,int b,int c)
{
     if(a<b && a<c)
     return a;
     else if(b<a && b<c)
     return b;
     else 
     return c;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,sum,p;
	    cin>>a>>b>>c;

	    sum=a+b+c;
	    p=Min(a,b,c);
	    cout << sum-p << endl;
	}
	return 0;
}   
