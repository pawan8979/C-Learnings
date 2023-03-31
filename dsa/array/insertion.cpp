
#include <iostream>
using namespace std;

// using for loop insertion with switch gives segmentation fault
void insertionfor(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j;
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] > temp)
                a[j + 1] = a[j];
            else
                break;
        }
        a[j + 1] = temp;
    }
}
void insertionwhile(int a[], int n)
{
    int i = 1;
    while (i < n)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (a[j] > temp)
                a[j + 1] = a[j];
            else
                break;
            j--;
        }
        i++;
        a[j + 1] = temp;
    }
}

int main()
{
    int a[10];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << "ENter element  " << i + 1 << endl;
        cin >> a[i];
    }

    insertionwhile(a, n);
    cout << endl;
    cout << "New sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}