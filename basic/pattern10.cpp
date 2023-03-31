/*
D
CD
BCD
ABCD
*/

#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    int n;
    cin >> n;
    char ch = 'A';

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {

            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}