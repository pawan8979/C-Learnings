#include <iostream>
using namespace std;

int main()
{

    int a = 0;
    int b = 1;
    cout << a << " ";
    cout << b << " ";

    for (int i = 0; i < 10; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}