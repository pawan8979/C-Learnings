#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n)
{
    // creating max heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int size = n - 1; size >= 0; size--)
    {
        int temp = arr[size];
        arr[size] = arr[0];
        arr[0] = temp;
        heapify(arr, size, 0);
    }
}

int main()
{
    int arr[] = {54, 53, 55, 52, 50};
    int n = 5;

    cout << "After sorting" << endl;
    heapsort(arr, n);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}