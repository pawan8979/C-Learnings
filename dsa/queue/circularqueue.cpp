#include <iostream>
#include <queue>
using namespace std;

class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int n;

    Queue(int n)
    {
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    void enqueue(int data)
    {
        if ((front == 0 && rear == n - 1) || (rear == (front - 1) % (n - 1)))
        {
            cout << "full" << endl;
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (rear == n - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "Empty" << endl;
            return;
        }

        if (front == rear)
        {
            cout << "deleted element" << arr[front] << endl;
            front = rear = -1;
        }
        else if (front == n - 1)
        {
            cout << "deleted element " << arr[front] << endl;
            front = 0;
        }
        else
        {
            cout << "deleted element " << arr[front] << endl;
            front++;
        }
    }

    void display()
    {
        if (front == -1)
        {
            printf("\nQueue is Empty");
            return;
        }
        printf("\nElements in Circular Queue are: ");
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        }
        else
        {
            for (int i = front; i < n; i++)
                cout << arr[i] << " ";

            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
    }
};

int main()
{

    Queue q(5);

    // Inserting elements in Circular Queue
    q.enqueue(14);
    q.enqueue(22);
    q.enqueue(13);
    q.enqueue(-6);
    q.enqueue(16);

    // Display elements present in Circular Queue
    q.display();
    cout << endl;
    // Deleting elements from Circular Queue
    q.dequeue();
    q.dequeue();

    q.enqueue(9);
    q.enqueue(20);
    q.enqueue(5);

    q.display();

    q.enqueue(20);
    return 0;
}