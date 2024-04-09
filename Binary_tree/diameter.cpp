#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int value;
        Node *left;
        Node *right;
    Node(int val){
        this->value = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *BTinput()
{
    int x;
    cin >> x;

    Node *root;
    if (x == -1)
        root = NULL;
    else
        root = new Node(x);

    queue<Node *> q;
    if(root)
        q.push(root);
    
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
//-------------------------
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);
        temp->left = left;
        temp->right = right;
//------------------------
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    return root;
}
void preOrder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout << root->value << " ";
    preOrder(root->left);
    preOrder(root->right);
}
int dm = 0;
int mxHeight(Node *root)
{
    if(!root)
        return 0;
    int l = mxHeight(root->left);
    int r = mxHeight(root->right);
    dm = max(dm, l + r);
    return max(l, r) + 1; 
}
int diameter(Node *root)
{
    mxHeight(root);
    return dm;
}

int main()
{
    Node *root = BTinput();
    preOrder(root);
    cout << diameter(root);

    return 0;
}