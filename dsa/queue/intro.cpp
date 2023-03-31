#include <iostream>
#include <queue>
using namespace std;

class Queue
{
public:
    int *arr;
    int qfront;
    int rear;
    int n;

    Queue(int n)
    {
        arr = new int[n];
        qfront = -1;
        rear = -1;
    }

    void enqueue(int data)
    {
        if (rear == n)
            cout << "FUll" << endl;
        else
        {
            rear++;
            arr[rear] = data;
            if (qfront == -1)
                qfront++;
        }
    }

    void dequeue()
    {
        if (qfront > rear)
            cout << "Empty" << endl;
        else
        {
            cout << "dequed element" << arr[qfront] << endl;

            qfront++;
        }
    }

    void front()
    {
        if (qfront >= rear)
            cout << "Empty" << endl;
        else
        {
            arr[qfront];
        }
    }

    void empty()
    {
        if (qfront >= rear)
            cout << "Empty" << endl;
        else
        {
            cout << "Not empty" << endl;
        }
    }
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{

    Queue q(5);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.display();
    cout << endl;
    q.empty();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.empty();
}