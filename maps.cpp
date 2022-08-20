#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        
        string name;int marks;
        map<string,int>m;
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 1: cin>>name>>marks;
            if(m.find(name)==m.end())
            {
                m.insert(make_pair(name,marks));
            }
            else {
              m[name]+=marks;
            }
             break;
             
             
            case 2:cin>>name;
                   m.erase(name);
                   break;
            
            
           case 3: cin>>name; 
            if(m.find(name)!=m.end())
            {
                cout << m[name]  << "\n";
            } 
            else {
              cout << "0" << endl;
            }
            break;
        }
    }
    return 0;
}



