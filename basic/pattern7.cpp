/*
ABC
ABC
ABC
*/

#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    int n = 3;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A';
        while (j <= n)
        {
            cout << ch;
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
}