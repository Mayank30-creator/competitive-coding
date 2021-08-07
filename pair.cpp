#include <iostream>
#include <utility>
using namespace std;
 
int main()
{
   pair<char, int>pair1 = make_pair('A', 1);
    pair<char, int>pair2 = make_pair('B', 2);
     pair1.swap(pair2) ;
     cout << pair1.first << " " << pair1.second << endl;
    return 0;
}