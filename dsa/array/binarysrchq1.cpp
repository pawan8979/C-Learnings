/* First and last occurence of a element in an array*/

#include <iostream>
using namespace std;

first(int arr[], int size, int key)
{
    int l = 0;
    int h = size - 1;
    int mid = l + (h - l) / 2;
    int ans;
    while (l <= h)
    {
        if (key == arr[mid])
        {
            ans = mid;
            h = mid - 1;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }
        else
            l = mid + 1;
        mid = l + (h - l) / 2;
    }
    return ans;
}

last(int arr[], int size, int key)
{
    int l = 0;
    int h = size - 1;
    int mid = l + (h - l) / 2;
    int ans;
    while (l <= h)
    {
        if (key == arr[mid])
        {
            ans = mid;
            l = mid + 1;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }
        else
            l = mid + 1;
        mid = l + (h - l) / 2;
    }
    return ans;
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter array size" << endl;
    cin >> size;
    int key;
    cout << "key to be searched" << endl;
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number " << i + 1 << endl;
        cin >> arr[i];
    }
    cout << "leftmost index of key is  " << first(arr, size, key) << endl;
    cout << "Rightmost index of key is  " << last(arr, size, key);
}