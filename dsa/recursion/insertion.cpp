#include <iostream>
using namespace std;

void insertion(int a[], int end, int start)
{
    if (start >= end)
        return;
    int temp = a[start];
    int i = start - 1;
    while (i >= 0)
    {
        if (a[i] > temp)
            a[i + 1] = a[i];
        else
            break;
        i--;
    }
    a[i + 1] = temp;
    insertion(a, end, start + 1);
}

int main()
{
    int a[] = {6, 3, 1, 0, 5};
    int end = 5;
    insertion(a, end, 1);
    for (int i = 0; i < end; i++)
    {
        cout << a[i] << "  ";
    }
    return 0;
}