/* How many 100, 50, 20, 10 rupees note required for 1330*/

#include <iostream>
using namespace std;

int main()
{

    int amount;
    cout << "Please Enter Your total Amount to find the notes : ";
    cin >> amount;
    int x100, x50, x20, x10, x1;
    x100 = x20 = x50 = x10 = x1 = 0;

    switch (amount >= 100)
    {
    case 1:
        x100 = amount / 100;
        amount = amount - x100 * 100;

        break;
    }

    switch (amount >= 50)
    {
    case 1:
        x50 = amount / 50;
        amount = amount - x50 * 50;

        break;
    }

    switch (amount >= 20)
    {
    case 1:
        x20 = amount / 20;
        amount = amount - x20 * 20;

        break;
    }

    switch (amount >= 10)
    {
    case 1:
        x10 = amount / 10;
        amount = amount - x10 * 10;

        break;
    }

    switch (amount >= 1)
    {
    case 1:
        x1 = amount / 1;
        amount = amount - x1 * 1;

        break;
    }
    cout << "No. of 100 rupees notes needed is " << x100 << endl;
    cout << "No. of 50 rupees notes needed is " << x50 << endl;
    cout << "No. of 20 rupees notes needed is " << x20 << endl;
    cout << "No. of 10 rupees notes needed is " << x10 << endl;
    cout << "No. of 1 rupees notes needed is " << x1 << endl;
}
