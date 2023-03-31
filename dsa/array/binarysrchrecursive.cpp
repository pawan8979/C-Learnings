#include <iostream>
using namespace std;

int binary(int array[], int size, int key, int l, int h)
{
    if (l == h)
    {
        if (array[l] == key)
        {
            cout << "Element found at index: ";
            return l;
        }
        else
            return -1;
    }
    else
    {
        int mid = (l + h) / 2;
        if (array[mid] == key)
        {
            cout << "Element found at index: ";
            return mid;
        }
        else if (key > array[mid])
            binary(array, size, key, mid + 1, h);
        else
            binary(array, size, key, l, mid - 1);
    }
}

int main()
{
    int array[5] = {5, 10, 11, 40, 84};
    cout << binary(array, 5, 10, 0, 4);
}

// Optimisation of binary search is using the formula
// mid= l+ (h-l)/2