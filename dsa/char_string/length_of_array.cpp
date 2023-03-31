#include <iostream>
using namespace std;

int palindrome(char arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (arr[s] != arr[e])
            return 0;
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(arr[s++], arr[e--]);
    }
}
int length(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
        count++;
    return count;
}
int main()
{
    char arr[10];
    cout << "Enter the value" << endl;
    cin >> arr;
    int n = length(arr);
    reverse(arr, n);
    cout << arr;
    cout << "\n"
         << palindrome(arr, n);
}