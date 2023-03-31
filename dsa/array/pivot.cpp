

#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int rsum = 0;
    for (int i = 0; i < size; i++)
    {
        rsum = rsum + arr[i];
    }
    int lsum = 0;
    for (int i = 0; i < size; i++)
    {
        rsum = rsum - arr[i];
        if (rsum == lsum)
            return i;
        lsum = lsum + arr[i];
    }
}

int main()
{
    int arr[10];
    int size;
    cout << "Enter array size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number " << i + 1 << endl;
        cin >> arr[i];
    }
    cout << "pivot element is at index  " << pivot(arr, size) << endl;
}