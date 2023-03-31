// print the common element from two arrays

#include <iostream>
using namespace std;

void intersect(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        int temp = 0;
        for (int j = 0; j < size2; j++)
        {
            if ((arr1[i] == arr2[j]) && (i != j))
                temp++;
        }
        if (temp > 0)
            cout << arr1[i];
    }
}

int main()
{
    int arreven[6] = {5, 8, 1, 0, 7, 2};
    int arrodd[5] = {0, 6, 7, 5, 19};
    intersect(arreven, arrodd, 6, 5);
}