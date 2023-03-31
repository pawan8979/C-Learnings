
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    // Destructor
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Node deleted" << endl;
        cout << "Memory free for node with data " << val << endl;
    }
};

void insertAtHead(Node *&tail, Node *&head, int d)
{

    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void deleteAtHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty!!\n";
        return;
    }
    else
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp; // free the memory using destructor
    }
}

void deleteAtTail(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty!!\n";
        return;
    }
    else
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        Node *last = temp->next;
        temp->next = NULL;
        delete last; // free the memory using destructor
    }
}

// displaying a linked list
void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "<=>";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    cout << "\n*************************";
    cout << "\n-> PAWAN NEGI - 22MCA0348 <-";
    cout << "\n*************************";
    int ch;
    do
    {
        cout << "\n-----------------------";
        cout << "\nAvailable options:" << endl;
        cout << "Enter choice 0 Exit" << endl;
        cout << "Enter choice 1 for Insertion at head" << endl;
        cout << "Enter choice 2 for Insertion at tail" << endl;
        cout << "Enter choice 3 for deletion at head" << endl;
        cout << "Enter choice 4 for deletion at tail" << endl;
        cout << "Enter choice 5 for display" << endl;
        cout << "-----------------------\n";
        cout << "Enter the choice" << endl;
        cin >> ch;
        cout << endl;

        switch (ch)
        {
        case 0:
        {
            exit(1);
            break;
        }
        case 1:
        {
            cout << "Enter value to be inserted" << endl;
            int d;
            cin >> d;
            insertAtHead(tail, head, d);
            break;
        }
        case 2:
        {
            cout << "Enter value to be inserted" << endl;
            int d;
            cin >> d;
            insertAtTail(tail, head, d);
            break;
        }
        case 3:
        {
            deleteAtHead(head);
            break;
        }
        case 4:
        {
            deleteAtTail(head);
            break;
        }
        case 5:
        {
            display(head);
            break;
        }
        default:
        {
            cout << "Invalid choice" << endl;
        }
        }
    } while (ch != 0);
    return 0;
}
