
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