#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int r[5];
	    int count1=0,count2=0,count3=0;
	    for(int i=0;i<5;i++)
	    {
	        cin>>r[i];
	    }
	    for(int i=0;i<5;i++)
	    {
	        if(r[i]==2)
	        {
	            count3++;
	        }
	        else if(r[i]==1)
	        {
	            count2++;
	        }
	        else
	        {
	            count1++;
	        }
	    }
	    if(count1>count2 && count1>count3)
	    {
	        cout << "DRAW" << endl;
	    }
	    else if(count2>count1 && count2>count3)
	    {
	        cout << "INDIA" <<endl;
	    }
	    else
	    {
	        cout << "ENGLAND" << endl;
	    }
	     
	}
	return 0;
}
