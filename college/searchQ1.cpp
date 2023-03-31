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

void display(int a[], int n)
{
    cout << "Elemets in Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[5] = {34, 23, 56, 10};
    cout << "\n*************************";
    cout << "\n-> PAWAN NEGI - 22MCA0348 <-";
    cout << "\n*************************";
    int ch;
    do
    {

        cout << endl;
        cout << endl;
        cout << "Available options:" << endl;
        cout << "Enter choice 0 Exit" << endl;
        cout << "Enter choice 1 for linear search" << endl;
        cout << "Enter choice 2 for binary search" << endl;
        cout << "Enter choice 3 for insertion sorting" << endl;
        cout << "Enter choice 4 for display" << endl;

        cin >> ch;

        switch (ch)
        {
        case 0:
        {
            exit(1);
            break;
        }
        case 1:
        {
            int k;
            cout << "Enter the element to be searched" << endl;
            cin >> k;
            linear(a, k, 5);
            break;
        }
        case 2:
        {
            int k;
            cout << "Enter the element to be searched" << endl;
            cin >> k;
            binary(a, 5, k);
            break;
        }
        case 3:
        {
            insertion(a, 5);
            display(a, 5);
            break;
        }
        case 4:
        {
            display(a, 5);
            break;
        }

        default:
            cout << "invalid option" << endl;
        }
    } while (ch != 0);
    return 0;
}