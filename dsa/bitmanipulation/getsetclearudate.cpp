#include <iostream>
#include <math.h>
using namespace std;

int getbit(int n, int i)
{
    n = n & (1 << i);
    if (n > 0)
        return 1;
    else
        return 0;
    /********* Better Writing******
        int mask= (1<<i);
        return (n&mask)>0?1:0;
    ***********************************/
}

int changebit(int n, int i)
{
    int mask = 1 << i;
    if (getbit(n, i))
        return ((n & ~mask) | (0 << i));
    else
        return ((n & ~mask) | (1 << i));
}

int clearbit(int n, int i) // it clears the particular bit if 1 then o if 0 then o
{
    int mask = ~(1 << i);
    return (n & mask);
}
int clearlastbit(int n, int i) // It clear the i number of bits
{
    int mask = (-1 << i);
    return (n & mask);
}

int clearrangeofbit(int n, int i, int j) // It clear the range of bit btw i and j
{
    int mask1 = 1 << j + 1;
    int mask2 = 1 >> j + 1;
    return (n & mask);
}

int main()
{
    int n, i, j;
    cout << "Enter numnber" << endl;
    cin >> n;
    cout << "Enter the bit i" << endl;
    cin >> i;
    cout << "Enter the bit j" << endl;
    cin >> j;
    // cout << getbit(n, i);
    cout << endl;
    cout << changebit(n, i) << endl;
    cout << clearbit(n, i) << endl;
    cout << clearlastbit(n, i) << endl;
    cout << clearrangeofbit(n, i, j) << endl;
}

/*
Note : As pasticular bit value at the i'th bit was not given so I have used the getbit fucntion to check if the value is 1 or 0 and accordingly modified the expresssion
*/