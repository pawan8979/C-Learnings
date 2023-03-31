#include <iostream>
using namespace std;

void merge(int array1[], int array2[], int array3[], int m, int n)
{
    int k = 0;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (array1[i] < array2[j])
        {
            array3[k++] = array1[i++];
        }
        else
            array3[k++] = array2[j++];
    }

    while (i < m)
    {
        array3[k++] = array1[i++];
    }

    while (j < n)
    {
        array3[k++] = array2[j++];
    }
}

void print(int array3[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << array3[i] << endl;
    }
}

int main()
{
    int array1[5] = {1, 3, 5, 7};

    int array2[5] = {2, 4, 6};

    int array3[10] = {0};

    merge(array1, array2, array3, 4, 3);
    print(array3, 7);
}