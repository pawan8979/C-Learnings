#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[10];
    int size;
    cout << "Enter the size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element" << i + 1 << endl;
        cin >> arr[i];
    }

    cout << sum(arr, size);
}