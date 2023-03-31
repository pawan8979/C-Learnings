/* find mountain peak element in an array*/

#include <iostream>
using namespace std;

int peak(int arr[], int size)
{
    int l = 0;
    int h = size - 1;
    int mid = l + (h - l) / 2;
    while (l < h)
    {
        if (arr[mid] < arr[mid + 1])
            l = mid + 1;
        else
            h = mid;
        mid = l + (h - l) / 2;
    }
    return l;
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
    cout << "peak element is at index  " << peak(arr, size) << endl;
}