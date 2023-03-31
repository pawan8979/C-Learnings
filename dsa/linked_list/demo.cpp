// merge sort a linked list

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(d)
    {
        this->data = d;
        this->next = NULL;
    }
};

ndoe *getmid(node *head)
{
    node *fast = head->next;
    node *slow = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if(fast->next!=NULL{
            fast = fast->next;
        }
        slow=slow->next;
    }
    return slow;
}

node *merge(node *left, node *right)
{
    if (left == NULL)
        return right;
    if (right == NULL)
        return left;
    node *ans = new node(-1);
    temp = ans;
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
}
node *mergesort(node *head)
{
    // mid
    node *mid = getmid(head);

    // break in halve
    node *left = head;
    node *right = mid->next;
    mid->next = NULL;

    // sort the two halves
    left = mergesort(left);
    right = mergesprt(right);

    // merge
    node *result = merge(left, right);
    return result;
}

int main()
{
    return 0;
}