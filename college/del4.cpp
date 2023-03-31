#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Node deleted" << endl;
        cout << "Memory free for node with data " << value << endl;
    }
};

void insertatlast(node *&tail, node *&head)
{
    int d;
    cout << "Value to insert" << endl;
    cin >> d;
    if (tail == NULL)
    {
        node *newnode = new node(d);
        tail = newnode;
        head = newnode;
    }
    else
    {
        node *newnode = new node(d);
        tail->next = newnode;
        tail = newnode;
    }
}

void deleteatlast(node *head)
{

    if (head == NULL)
    {
        cout << "Linked list Empty";
        return;
    }
    else
    {
        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        node *curr = temp->next;
        temp->next = curr->next;
        delete curr;
    }
}

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    for (int i = 0; i < 10; i++)
    {
        insertatlast(tail, head);
    }
    display(head);
    deleteatlast(head);
    return 0;
}