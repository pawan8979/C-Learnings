#include <iostream>
using namespace std;

/*************ALternate approach***************************
void swappingg(int arr[], int size)
{
    int start = 0;
    int end = 1;

    while ((end < size - 1) || (start < size - 1))
    {
        swap(arr[start], arr[end]);
        start = start + 2;
        end = end + 2;
    }
}
****************/

void swappingg(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
            swap(arr[i], arr[i + 1]);
    }
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
    swappingg(arreven, 6);
    swappingg(arrodd, 5);

    printArray(arreven, 6);
    cout << endl;
    printArray(arrodd, 5);
}