#include <iostream>
using namespace std;

void duplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        for (int j = i; j < size; j++)
        {
            if (arr[i] == arr[j] && (i != j))
                temp++;
        }
        if (temp == 1)
            cout << arr[i];
    }
}

int main()
{
    int arreven[6] = {5, 2, 5, 2, 5, 2};
    int arrodd[5] = {0, 0, 1, 0, 1};
    duplicate(arreven, 6);
    cout << endl;
    duplicate(arrodd, 5);
}