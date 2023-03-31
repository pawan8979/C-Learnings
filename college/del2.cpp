#include <iostream>
using namespace std;

int front = -1, back = -1, n = 10, d, ch;

void enqueue(int queue[])
{
    if (back == n - 1)
        cout << "Overflow" << endl;
    else
    {

        cout << "Enter the element to push" << endl;
        cin >> d;
        queue[++back] = d;
        if (front == -1)
            front++;
    }
}
void dequeue(int queue[])
{
    if (front == -1 && front > back)
        cout << "Underflow" << endl;
    else
    {
        cout << "Dequeued element: " << queue[front] << endl;
        front++;
    }
}

void display(int queue[])
{
    if (back == -1 && front > back)
        cout << "Nothing to display" << endl;
    else
    {
        for (int i = front; i <= back; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int queue[10];
    for (int i = 0; i < 10; i++)
    {
        enqueue(queue);
    }
    for (int i = 0; i <= back - 5; i++)
    {
        dequeue(queue);
    }

    display(queue);

    return 0;
}