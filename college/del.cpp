#include <iostream>
using namespace std;
int n = 10;
int stack[10], top1 = -1, top2 = n, ch, d;

void push1()
{
    if (top1 < top2 - 1)
    {
        cout << "Enter the element to be pushed" << endl;
        cin >> d;
        top1++;
        stack[top1] = d;
    }

    else
        cout << "Overflow" << endl;
}

void push2()
{
    if (top2 > top1 + 1)
    {
        cout << "Enter the element to be pushed" << endl;
        cin >> d;
        top2--;
        stack[top2] = d;
    }

    else
        cout << "Overflow" << endl;
}

void pop1()
{
    if (top1 == -1)
        cout << "Underflow" << endl;
    else
    {
        cout << "Popped element from stack 1 is : " << stack[top1] << endl;
        top1--;
    }
}
void pop2()
{
    if (top2 == n)
        cout << "Underflow" << endl;
    else
    {
        cout << "Popped element from stack 2 is : " << stack[top2] << endl;
        top2++;
    }
}
void display1()
{
    if (top1 > -1)
    {

        for (int i = top1; i >= 0; i--)
            cout << "Elements are " << stack[i] << "  ";
    }
    else
        cout << "stack empty" << endl;
}
void display2()
{
    if (top2 < n)
    {

        for (int i = top2; i < n; i++)
            cout << "Elements are " << stack[i] << "  ";
    }
    else
        cout << "stack empty" << endl;
}
void topp1()
{
    cout << stack[top1];
}
void topp2()
{
    cout << stack[top2];
}
int main()
{

    do
    {
        cout << "Enter the choice 1,2,3,4" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {

            push1();
            break;
        }
        case 2:
        {

            push2();
            break;
        }
        case 3:
        {
            pop1();
            break;
        }
        case 4:
        {
            pop2();
            break;
        }
        case 5:
        {
            cout << "Top element" << endl;
            topp1();
        }
        case 6:
        {
            cout << "Top element" << endl;
            topp2();
        }

        case 7:
        {
            display1();
        }

        case 8:
        {
            display2();
        }
        default:
            cout << "Invalid choice" << endl;
        }
    } while (ch != 0);

    return 0;
}