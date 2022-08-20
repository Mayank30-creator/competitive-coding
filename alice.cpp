#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    if(s=="A" || s=="E" || s=="I" || s=="O" || s=="U" || s=="Y")
    {
        cout << "invalid" << endl;
    }
    else
    {
        int a= s[0]+s[1];
        int b= s[3]+s[4];
        int c= s[4]+s[5];
        int d= s[7]+s[8];
        if(a%2==0 && b%2==0 && c%2==0 && d%2==0)
        {
            cout << "valid" << "\n";
        }
        else
        {
            cout << "invalid" << "\n";
        }
    }
    

}