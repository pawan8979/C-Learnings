// bubble sort with optimization

#include <iostream>
using namespace std;

int bubble(int a[], int n)
{
    bool swapped = false;
    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            if (a[j + 1] < a[j])
                swap(a[j], a[j + 1]);
            swapped = true;
        }
        if (swapped == false)
            break;
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

    bubble(a, n);
    cout << endl;
    cout << "New sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}