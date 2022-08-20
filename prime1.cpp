#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, i, j;
        cin >> a >> b;
        if (a <= 2)
        {
            a = 2;
            if (b >= 2)
            {
                cout << a << " ";
                a++;
            }
        }

        // MAKING SURE THAT a IS ODD BEFORE WE BEGIN
        // THE LOOP
        if (a % 2 == 0)
            a++;

        // NOTE : WE TRAVERSE THROUGH ODD NUMBERS ONLY
        for (i = a; i <= b; i = i + 2)
        {

            // flag variable to tell
            // if i is prime or not
            bool flag = 1;

            // WE TRAVERSE TILL SQUARE ROOT OF j only.
            // (LARGEST POSSIBLE VALUE OF A PRIME FACTOR)
            for (j = 2; j * j <= i; ++j)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }

            // flag = 1 means i is prime
            // and flag = 0 means i is not prime
            if (flag == 1)
                cout << i << " ";
        }
    }
    return 0;
}