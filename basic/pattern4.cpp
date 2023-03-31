/*
123
456
789

*/

#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    int n = 3;
    int f = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << f;
            f++;
            j++;
        }
        cout << endl;
        i++;
    }
}