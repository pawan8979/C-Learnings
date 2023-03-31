#include <iostream>
using namespace std;

int ch;
int stack[10], n = 10, top = -1;

void push(int val)
{
    if (top >= n - 1)
        cout << "OVERFLOW" << endl;
    else
    {
        top++;
        stack[top] = val;
    }
}

void pop()
{
    if (top <= -1)
        cout << "UNDERFLOW" << endl;
    else
    {
        cout << "Popped element is " << stack[top] << endl;
        top--;
    }
}

void display()
{
    if (top > -1)
    {
        cout << "stack elements are" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
            cout << endl;
        }
    }
    else
        cout << "Stack is empty";
}

int main()
{
    int val;
    cout << "\n*************************";
    cout << "\n-> PAWAN NEGI - 22MCA0348 <-";
    cout << "\n*************************";

    do
    {
        cout << "\n-----------------------";
        cout << "\nAvailable options:" << endl;
        cout << "1 for Push" << endl;
        cout << "2 for Pop" << endl;
        cout << "3 for display" << endl;
        cout << "4 for Exit" << endl;
        cout << "-----------------------\n";
        cout << "Enter the choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter value to be pushed" << endl;
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        default:
        {
            cout << "Invalid choice" << endl;
        }
        }
    } while (ch != 4);
    return 0;
}
