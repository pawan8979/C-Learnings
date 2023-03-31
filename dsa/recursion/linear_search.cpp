#include <iostream>
using namespace std;

int search(int a[], int n, int value)
{
    n--;
    if (n < 0)
        return -1;
    if (a[n] == value)
        return n;
    return search(a, n, value);
}

int main()
{
    int a[] = {3, 6, 2, 5, 10};
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    int ans = search(a, size, 2);
    if (ans != -1)
        cout << "Element found at index->" << ans;
    else
        cout << "not found" << endl;
}