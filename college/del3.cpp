#include <iostream>
using namespace std;

int n = 10, top = -1, d;
void push(int stack[])
{
    if (top >= n - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        cout << "Enter element" << endl;
        cin >> d;
        ++top;
        stack[top] = d;
    }
}

void pop(int stack[])
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        cout << "Popped element is : " << stack[top] << endl;
        --top;
    }
}

void display(int stack[])
{
    if (top > -1)
    {

        for (int i = top; i >= 0; i--)
            cout << stack[i] << "  ";
    }
    else
        cout << "stack empty" << endl;
}
int main()
{
    int stack[10];
    for (int i = 0; i < 10; i++)
    {
        push(stack);
    }
    for (int i = 0; i <= 4; i++)
    {
        pop(stack);
    }
    display(stack);
    return 0;
}