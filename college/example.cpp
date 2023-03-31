#include <iostream>
using namespace std;

int linear(int a[], int k, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (k == a[i])
        {
            cout << "Available at index: " << i << endl;
            return 1;
        }
    }
    cout << "Not available" << endl;
}

int binary(int a[], int size, int key)
{
    int l = 0;
    int h = size - 1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (a[mid] == key)
        {
            cout << "Element found at index: " << mid << endl;
            return 1;
        }
        else if (a[mid] < key)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return -1;
}

int selection(int a[], int size)
{
    int temp = 0;
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[min_index])
                min_index = j;
        }
        temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }
}

void display(int a[], int n)
{
    cout << "New sorted aay:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    cout << "TOtal number of round: " << n - 1 << endl;
}

int bubble(int a[], int n)
{
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j + 1] < a[j])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    return 0;
}

void insertion(int a[], int n)
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

void heapify(int a[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[largest] < a[left])
    {
        largest = left;
    }
    if (right < n && a[largest] < a[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        heapify(a, n, largest);
    }
}

void heapsort(int a[], int n)
{
    // build heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }

    // sorting
    for (int size = n - 1; size >= 0; size--)
    {
        int temp = a[size];
        a[size] = a[0];
        a[0] = temp;
        heapify(a, size, 0);
    }
}

int main()
{
    int a[5];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << "ENter element  " << i + 1 << endl;
        cin >> a[i];
    }
    int ch;
    do
    {

        cout << endl;
        cout << endl;
        cout << "Available options:" << endl;
        cout << "Enter choice 1 for selection sorting" << endl;
        cout << "Enter choice 2 for bubble sorting" << endl;
        cout << "Enter choice 3 for insertion sorting" << endl;
        cout << "Enter choice 4 for linear search" << endl;
        cout << "Enter choice 5 for binary search" << endl;
        cout << "Enter choice 6 for heap sort" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            selection(a, n);
            display(a, n);
            break;
        }

        case 2:
        {
            bubble(a, n);
            display(a, n);
            break;
        }

        case 3:
        {
            insertion(a, n);
            display(a, n);
            break;
        }
        case 4:
        {
            int k;
            cout << "Enter the element to be searched" << endl;
            cin >> k;
            linear(a, k, n);
            break;
        }
        case 5:
        {
            int k;
            cout << "Enter the element to be searched" << endl;
            cin >> k;
            binary(a, n, k);
            break;
        }
        case 6:
        {
            heapsort(a, n);
            display(a, n);
            break;
        }

        default:
            cout << "invalid option" << endl;
        }
    } while (ch != 0);
    return 0;
}