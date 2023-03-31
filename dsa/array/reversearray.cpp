#include <iostream>
using namespace std;

int reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arreven[6] = {5, 2, 7, 3, 9, 0};
    int arrodd[5] = {2, 5, 3, 9, 6};
    reverse(arreven, 6);
    reverse(arrodd, 5);

    printArray(arreven, 6);
    cout << endl;
    printArray(arrodd, 5);
}