#include <iostream>
using namespace std;

void merge(int array1[], int array2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n && array1[i] != 0 && array2[j] != 0)
    {
        if (array1[i] < array2[j])
        {
            i++;
        }
        else
            array1[i] = array2[j++];
    }

    while (i < m && array1[i] != 0)
    {
        i++;
    }

    while (j < n && array2[j] != 0)
    {
        array1[i] = array2[j++];
    }
}

void print(int array1[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << array1[i] << endl;
    }
}

int main()
{
    int array1[4] = {1, 3, 0, 0};

    int array2[2] = {2, 4};

    merge(array1, array2, 4, 2);
    print(array1, 4);
}