/*int sum=0;
	for(int i=0;i<n;i++)
	{
       sum=max(res-arr[i]+k,res);
	}*/
  #include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	int n,k;
	cin>>n>>k;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int res=arr[0];
	int maxending=arr[0];
	for(int i=1;i<n;i++)
	{
		maxending=max(maxending+arr[i],arr[i]);
		res=max(maxending,res);
	}

  int maxi = 0;
  for (int i = 0; i < n;i++)
  {
    int sum = 0;
    for (int j = i+1; j < n;j++)
    {
      if(k>arr[j])
      {
        sum = max(res - arr[j] + k, sum);
      }
      else
      {
        sum += arr[j];
      }
      
    }
    maxi = max(maxi, sum);
  }
  cout << maxi << endl;
  return 0;
}