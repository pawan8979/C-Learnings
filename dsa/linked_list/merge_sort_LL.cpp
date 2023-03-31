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
    // ~node()
    // {
    //     int value = this->data;
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         next = NULL;
    //     }
    //     cout << "node free for data" << value << endl;
    // }
};
node *head = NULL;
node *getmid(node *head)
{
    node *fast = head->next;
    node *slow = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
            fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
void print(node *newhead)
{
    node *tempo = newhead;
    while (tempo != NULL)
    {
        cout << tempo->data << " -> ";
        tempo = tempo->next;
    }
}
node *merge(node *left, node *right)
{
    if (left == NULL)
        return right;
    if (right == NULL)
        return left;

    node *ans = new node(-1);
    node *temp = ans;
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}
node *mergesort(node *&head)
{

    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return head;
    if (head->next->next == NULL)
        return head->next;

    // finding mid of linked list
    node *mid = getmid(head);

    // diving linked list in 2 half
    node *left = head;
    node *right = mid->next;
    mid->next = NULL;
    // sorting the two halves
    left = mergesort(left);
    right = mergesort(right);

    // merge krdo
    node *result = merge(left, right);
    return result;
}
node *insertattail(node *&head, int data)
{

    node *newnode = new node(data);
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

int main()
{

    int arr[] = {4, 7, 1, 2};
    for (int i = 0; i < 4; i++)
    {
        insertattail(head, arr[i]);
    }
    node *newhead = mergesort(head);
    print(newhead);

    return 0;
}