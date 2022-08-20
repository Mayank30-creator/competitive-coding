#include <iostream>

using namespace std;
typedef long long ll; 

int main() {
	ll n;
	cin >> n;
    ll arr[n];
	for(ll i=0;i<n; i++)
	{
		cin>>arr[i];
	}
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
	   ll temp;
	   temp=arr[i] % 10;
       sum=temp+sum*10;
	}
	if(sum%10==0)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}


}


