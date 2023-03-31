#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a1[n1];
    int a2[n2];

    // filling 1st array
    for (int i = 0; i < n1; i++)
        a1[i] = arr[l + i];

    // filling 2nd array
    for (int i = 0; i < n2; i++)
        a2[i] = arr[mid + 1 + i];

    // merging
    int i = 0;
    int j = 0;
    int k = l;

    // when both the array are not empty
    while (i < n1 && j < n2)
    {
        if (a1[i] < a2[j])
            arr[k++] = a1[i++];
        else
            arr[k++] = a2[j++];
    }

    // when array 1 didnt get empty and array 2 got empty
    while (i < n1)
    {
        arr[k++] = a1[i++];
    }

    // when array 2 didnt get empty and array 1 got empty
    while (j < n2)
    {
        arr[k++] = a2[j++];
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);

        // merging the divided array
        merge(arr, l, mid, r);
    }
}
int main()
{
    int arr[] = {99, 0, 1, 87, 3, 67, 4, 76, 5, 0};
    mergesort(arr, 0, 10);
    cout << "Sorted Array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}