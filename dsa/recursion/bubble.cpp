#include <iostream>
using namespace std;

int bubble(int a[], int n)
{
    if (n == 0 || n == 1)
        return 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            swap(a[i], a[i + 1]);
    }
    bubble(a, n - 1);
}

int main()
{
    int a[] = {5, 22, 0, 1, 6};
    int n = 5;
    bubble(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    return 0;
}