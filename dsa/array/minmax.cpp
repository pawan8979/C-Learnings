#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // maximum= max(maximum, arr[i]);
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // minimum= min(minimum, arr[i]);
        if (min > arr[i + 1])
            min = arr[i + 1];
    }
    return min;
}

int main()
{
    int arr[100];
    int size;
    cout << "enter size of array " << endl;
    cin >> size;
    // taking input in arrray

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << endl;
        cin >> arr[i];
    }
    cout << "Minimum no.is " << getMin(arr, size) << endl;
    cout << "Maximum no. is " << getMax(arr, size) << endl;
}
