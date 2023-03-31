#include <iostream>
using namespace std;

void unique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && (i != j))
                temp++;
        }
        if (temp == 0)
            cout << arr[i];
    }
}

int main()
{
    int arreven[6] = {5, 2, 7, 2, 9, 5};
    int arrodd[5] = {1, 1, 1, 1, 0};
    unique(arreven, 6);
    cout << endl;
    unique(arrodd, 5);
}