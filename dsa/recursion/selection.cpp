#include <iostream>
using namespace std;

void selection(int a[], int end, int start)
{
    if (start >= end)
        return;
    int min = start;
    for (int i = start + 1; i < end; i++)
    {
        if (a[min] > a[i])
        {
            min = i;
        }
    }
    swap(a[min], a[start]);
    selection(a, end, start + 1);
}

int main()
{

    int a[] = {4, 2, 6, 2, 3};
    int n = 5;
    selection(a, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    return 0;
}