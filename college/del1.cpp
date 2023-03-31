#include <iostream>
using namespace std;

int queue[10], front = -1, back = -1, n = 10, d, ch;

void enqueue()
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
void dequeue()
{
    if (front == -1 && front > back)
        cout << "Underflow" << endl;
    else
    {
        cout << "Dequeued element: " << queue[front] << endl;
        front++;
    }
}
void peek()
{
    cout << "Peek element: " << queue[front] << endl;
}
void display()
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

    do
    {
        cout << "Enter choice 1, 2, 3, 4" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            enqueue();
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        default:
            cout << "Invalid choice" << endl;
        }
    } while (ch != 0);
    return 0;
}