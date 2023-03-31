#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *a;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        a = new int[size];
        top = -1;
    }

    void push(int val)
    {
        if (top >= size - 1)
        {
            cout << "stack overflow" << endl;
        }
        else
        {
            top++;
            a[top] = val;
        }
    }

    void pop()
    {
        if (top <= -1)
            cout << "Underflow" << endl;
        else
        {
            cout << "Element deleted is: " << a[top] << endl;
            top--;
        }
    }
    void peek()
    {
        if (top <= -1)
            cout << "Underflow" << endl;
        else
        {
            cout << a[top] << endl;
        }
    }
    bool empty()
    {
        if (top <= -1)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack s(5);
    int val;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value" << i + 1 << endl;
        cin >> val;
        s.push(val);
    }
    s.pop();
    s.peek();
    cout << "Empty or not " << s.empty();
}

/*
main()
{
    stack<int> s;
    int val;
    for (int i = 0; i < 5; i++)
    {

        cout << "Enter val" << endl;
        cin >> val;
        s.push(val);
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}*/