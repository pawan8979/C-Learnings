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
};

node *insertattail(node *&head, int d)
{
    node *newnode = new node(d);

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        temp = newnode;
    }
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

node *selection(node *&head)
{
    node *temp1 = head;

    while (temp1 != NULL)
    {
        node *min = temp1;
        node *temp2 = temp1->next;
        while (temp2 != NULL)
        {
            if (min->data > temp2->data)
            {
                min = temp2;
            }
            temp2 = temp2->next;
        }
        int demo = min->data;
        min->data = temp1->data;
        temp1->data = demo;
        temp1 = temp1->next;
    }
}
int main()
{
    node *head = NULL;
    int a[] = {4, 0, 2, 1};
    for (int i = 0; i < 4; i++)
    {
        insertattail(head, a[i]);
    }
    cout << "before sorting" << endl;
    display(head);
    cout << "after sorting " << endl;
    selection(head);
    display(head);
}