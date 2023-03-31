/*
AAA
BBB
CCC
*/

#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    int n = 3;
    char f = 'A';

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << f;
            j++;
        }
        f++;
        cout << endl;
        i++;
    }
}