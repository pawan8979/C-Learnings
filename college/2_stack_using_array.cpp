
#include <iostream>
using namespace std;
void push1();
void pop1();
void push2();
void pop2();
void display1();
void display2();
const int size = 10;
int stack[size], top1 = -1, top2 = size;

void push1()
{
    if (top1 == top2 - 1)
    {
        cout << "Stack overflow";
    }
    else
    {
        int value;
        cout << "\nEnter the value to be inserted: ";
        cin >> value;
        stack[++top1] = value;
        cout << "\nValue Inserted";
    }
}
void push2()
{
    if (top1 == top2 - 1)
    {
        cout << "Stack overflow";
    }
    else
    {
        int value;
        cout << "\nEnter the value to be inserted: ";
        cin >> value;
        stack[--top2] = value;
        cout << "\nValue Inserted";
    }
}
void pop1()
{
    if (top1 == -1)
    {
        cout << "\nStack underflow";
    }
    else
    {
        cout << "\nValue popped: " << stack[top1--];
    }
}
void pop2()
{
    if (top2 == size)
    {
        cout << "\nStack underflow";
    }
    else
    {
        cout << "\nValue popped: " << stack[top2++];
    }
}
void display1()
{
    if (top1 == -1)
    {
        cout << "\nStack 1 is empty.";
    }
    else
    {
        int temp = top1;
        while (temp != -1)
        {
            cout << "\n"
                 << stack[temp--];
        }
    }
}
void display2()
{
    if (top2 == size)
    {
        cout << "\nStack 2 is empty.";
    }
    else
    {
        int temp = top2;
        while (temp != size)
        {
            cout << "\n"
                 << stack[temp++];
        }
    }
}

int main()
{
    cout << "\n*************************";
    cout << "\n-> PAWAN NEGI - 22MCA0348 <-";
    cout << "\n*************************";
    int choice;
    do
    {
        cout << "\n-----------------------";
        cout << "\nAvailable options:" << endl;
        cout << "Enter 1 for Push 1" << endl;
        cout << "Enter 2 for Push 2" << endl;
        cout << "Enter 3 for Pop 1" << endl;
        cout << "Enter 4 for Pop 2" << endl;
        cout << "Enter 5 for display 1" << endl;
        cout << "Enter 6 for display 2" << endl;
        cout << "Enter 7 for Exit" << endl;
        cout << "-----------------------\n";
        cout << "Enter the choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            push1();
            break;
        case 2:
            push2();
            break;
        case 3:
            pop1();
            break;
        case 4:
            pop2();
            break;
        case 5:
            display1();
            break;
        case 6:
            display2();
            break;
        case 7:
            cout << "Exiting...";
            break;
        default:
            cout << "\n*** Invalid choice ***";
        }
    } while (choice != 7);
    return 0;
}