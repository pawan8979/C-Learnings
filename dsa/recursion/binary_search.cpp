#include <iostream>
using namespace std;

int binary(int a[], int s, int e, int value)
{

    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    if (a[mid] == value)
        return mid;
    if (a[mid] > value)
        return binary(a, s, mid - 1, value);
    else
        return binary(a, mid + 1, e, value);
}
int main()
{

    int a[] = {1, 2, 23, 44, 55};
    int size;
    cout << "enter size" << endl;
    cin >> size;
    int start = 0;
    int ans = binary(a, start, size, 23);
    if (ans != -1)
        cout << "found at index-->" << ans << endl;
    else
        cout << "Not found" << endl;
    return 0;
}