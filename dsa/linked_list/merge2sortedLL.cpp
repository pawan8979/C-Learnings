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
node *print(node *&head)
{
    node *tempo = head;
    while (tempo != NULL)
    {
        cout << tempo->data << " -> ";
        tempo = tempo->next;
    }
}
node *insertattail(node *&head, int data)
{
    node *temp = head;
    node *newnode = new node(data);
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        temp = newnode;
    }
}

node *merge(node *&head1, node *&head2)
{
    if (head1 == NULL)
        return head2;

    if (head2 == NULL)
        return head1;

    node *temp = new node(-1);
    node *ans = temp;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            temp->next = head1;
            temp = head1;
            head1 = head1->next;
        }
        else
        {
            temp->next = head2;
            temp = head2;
            head2 = head2->next;
        }
    }
    while (head1 != NULL)
    {
        temp->next = head1;
        temp = head1;
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        temp->next = head2;
        temp = head2;
        head2 = head2->next;
    }
    return ans->next;
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    int arr1[] = {1, 5, 7, 10};

    int arr2[] = {2, 4, 4, 8};

    for (int i = 0; i < 4; i++)
    {
        insertattail(head1, arr1[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        insertattail(head2, arr2[i]);
    }
    cout << "first list:" << endl;
    print(head1);
    cout << endl;
    cout << "second list:" << endl;
    print(head2);
    cout << endl;
    node *result = merge(head1, head2);
    cout << "sorted merged linked list:" << endl;
    print(result);

    return 0;
}