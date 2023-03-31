#include <iostream>
using namespace std;

int selection(int a[], int n)
{
    // int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[minindex] > a[j])
                minindex = j;
        }
        swap(a[minindex], a[i]);
        /* temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;*/
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

    selection(a, n);
    cout << endl;
    cout << "New sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    cout << "TOtal number of round: " << n - 1;
}