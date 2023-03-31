#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    if (n < 0 | n == 0)
        cout << false;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
            n = n >> 1;
        }
    }
    if (count == 1)
        cout << true;
    else
        cout << false;
}
