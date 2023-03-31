/*
ABC
BCD
CDE
*/

#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    int n = 3;
    char ch = 'A';

    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << ch;
            j++;
            ch++;
        }
        ch = ch - 2;
        cout << endl;
        i++;
    }
}