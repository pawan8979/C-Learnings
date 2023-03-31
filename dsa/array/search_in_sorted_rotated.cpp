
#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] > arr[0])
            s = mid + 1;
        else
            e = mid;
        mid = s + (e - s) / 2;
    }
    return s;
}

int binary(int array[], int size, int key, int l, int h)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (array[mid] == key)
        {
            cout << "Element found at index: ";
            return mid;
        }
        else if (array[mid] < key)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[10];
    int size, h, l;
    cout << "Enter array size" << endl;
    cin >> size;
    int key;
    cout << "Enter element to search:  " << endl;
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number " << i + 1 << endl;
        cin >> arr[i];
    }
    int getpivot = pivot(arr, size);
    if (key >= arr[getpivot] && key <= arr[size - 1])
        cout << binary(arr, size, key, getpivot, size - 1);
    else
        cout << binary(arr, size, key, 0, getpivot);
}