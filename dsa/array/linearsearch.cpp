#include <iostream>
using namespace std;

bool search(int arr[], int size, int k)
{
    for (int i = 0; i < size; i++)
    {
        if (k == arr[i])
            return 1;
    }
    return 0;
}
int main()
{
    int arr[5] = {9, -1, 6, 0, -8};
    int key;
    cout << "enter the element to search " << endl;
    cin >> key;
    bool found = search(arr, 5, key);
    if (found)
        cout << "Present";
    else
        cout << "Not present";
}