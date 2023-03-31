#include <iostream>
using namespace std;

int sum(int arr[], int size)
{

    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    int faith = sum(arr + 1, size - 1);
    return arr[0] + faith;
}

int main()
{
    int arr[5] = {10, 20, 50, 10, 10};
    cout << sum(arr, 5);
}
