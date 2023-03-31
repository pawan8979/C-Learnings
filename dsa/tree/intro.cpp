#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter data for inseting in right of " << data << endl;
    root->right = buildtree(root->right);
    return root;
}

void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)

                q.push(temp->left);

            if (temp->right != NULL)

                q.push(temp->right);
        }
    }
}

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
        return;
    preorder(root->left);
    preorder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;
    // building tree
    root = buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //  level order
    cout << "Printing level order traversal" << endl;
    levelordertraversal(root);
    cout << "Inorder traversal" << endl;
    inorder(root);
    cout << endl;
    cout << "preorder traversal" << endl;
    preorder(root);
    cout << endl;
    cout << "postorder traversal" << endl;
    postorder(root);
    return 0;
}