/*

1234554321
1234**4321
123****321
12******21
1********1

*/

#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= (n - i + 1))
        {
            cout << j;
            ++j;
        }

        int k = 1;
        while (k <= (i * 2 + 3 - n))
        {
            cout << "*";
            ++k;
        }

        int l = 1;
        while (l <= (n + 1 - i))
        {
            cout << n - i - l + 2;
            ++l;
        }

        cout << endl;
        ++i;
    }
}