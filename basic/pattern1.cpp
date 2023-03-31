/*
***
***
***
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
        while (j <= n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
