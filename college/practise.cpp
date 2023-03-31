#include <iostream>
using namespace std;
int ch;
int a[5], n = 5, top = -1;
void push(int d)
{
    if (top >= n - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        ++top;
        a[top] = d;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        cout << "Popped element is : " << a[top] << endl;
        --top;
    }
}

void topp()
{
    cout << a[top];
}

void display()
{
    if (top > -1)
    {

        for (int i = top; i >= 0; i--)
            cout << "Elements are " << a[i] << "  ";
    }
    else
        cout << "stack empty" << endl;
}
int main()
{

    int d;
    do
    {
        cout << "Enter the choice 1,2,3,4" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter the element to be pushed" << endl;
            cin >> d;
            push(d);
            break;
        }
        case 2:
        {
            pop();
            break;
        }

        case 3:
        {
            cout << "Top element" << endl;
            topp();
        }

        case 4:
        {
            display();
        }
        default:
            cout << "Invalid choice" << endl;
        }
    } while (ch != 0);

    return 0;
}