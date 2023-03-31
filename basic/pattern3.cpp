/*
1234
1234
1234
1234
*/

#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    int n = 4;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}