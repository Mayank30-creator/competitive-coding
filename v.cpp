#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator the_iterator;
    for (int i = 0; i <= 10; i++)
    {
        v.push_back(i);
    }
    int total = 0;
    the_iterator = v.begin();
    while (the_iterator != v.end())
    {
        total += *the_iterator;
        the_iterator++;
    }

    cout << "Total= " << total << endl;
}