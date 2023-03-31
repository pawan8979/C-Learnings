// The painter’s partition problem

#include <iostream>
using namespace std;

bool ispossans(int a[], int k, int n, int mid)
{
    int boardsum = 0;
    int painter = 1;
    for (int i = 0; i < n; i++)
    {
        if ((boardsum + a[i]) <= mid)
        {
            boardsum += a[i];
        }
        else
        {
            painter++;
            if (painter > k || a[i] > mid)
            {
                return false;
            }
            boardsum = 0;
            boardsum += a[i];
        }
    }
    return true;
}

int main()
{
    int a[4] = {10, 20, 30, 40};
    int n = 4;
    int k = 2; // no of painter
    int sum;
    int s = 0;
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (ispossans(a, k, n, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << ans;
}