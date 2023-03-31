#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int ans = 0;
    while (x != o)
    {
        int digit = x % 10;
        if ((ans * 10 > INT_MAX) || ans * 10 < INT_MIN)
            return 0;

        ans = ans * 10 + digit;
        x = x / 10;
    }