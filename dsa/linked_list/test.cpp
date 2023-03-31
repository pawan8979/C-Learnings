#include <iostream>
using namespace std;

class link
{
public:
    int data;
    link *next;

    link(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void display(link *&head)
{
    link *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << endl;
        temp = temp->next;
    }
}

insertfirst(link *&temp, int d)
{
    link *newnode = new link(d);
    newnode->next = temp;
    temp = newnode;
}

insertlast(link *&temp, int d)
{

    link *newnode = new link(d);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    temp = newnode;
}

insertmiddle(link *&head, link *&tail, int n, int d)
{
    if (n == 1)
    {
        insertfirst(head, d);
        return 1;
    }
    link *temp = head;
    for (int i = 1; i < n - 1; i++)
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        insertlast(tail, d);
        return 1;
    }

    link *middlenode = new link(d);
    middlenode->next = temp->next;
    temp->next = middlenode;
}

int main()
{

    link *first = new link(5);
    link *second = new link(10);
    link *third = new link(15);

    link *head = first;
    link *tail = first;

    first->next = second;

    second->next = third;

    third->next = NULL;

    cout << "before insertion at first" << endl;
    display(head);

    insertfirst(head, 50);

    cout << "After insertion at first" << endl;
    display(head);

    cout << "before insertion at last" << endl;
    display(head);

    insertlast(tail, 60);

    cout << "After insertion at last" << endl;
    display(head);

    cout << "before insertion at middle" << endl;
    display(head);
    int n;
    cout << "Which position you want to insert new node" << endl;
    cin >> n;
    insertmiddle(head, tail, n, 100);

    cout << "After insertion at position  " << n << endl;
    display(head);

    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;
}
