#include <iostream>
using namespace std;

int binary(int array[], int size, int key)
{
    int l = 0;
    int h = size - 1;
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
    int array[5] = {5, 10, 11, 40, 84};
    cout << binary(array, 5, 84);
}

// Optimisation of binary search is using the formula 
// mid= l+ (h-l)/2