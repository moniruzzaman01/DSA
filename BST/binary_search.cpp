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
Node* BTinput()
{
    int x;
    cin >> x;
    queue<Node *> q;
    Node *root;
    if (x == -1)
        root = NULL;
    else
        root = new Node(x);
    if(root)
        q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

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

        if(temp->left)
            q.push(left);
        if(temp->right)
            q.push(right);
    }
    return root;
}
void LOP(Node* root)
{
    queue<Node *> q;
    if(root)
        q.push(root);
    
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << temp->value << " ";

        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}
bool Bsearch(Node* root, int val)
{
    if(root==NULL)
        return false;
    if(root->value==val)
        return true;
    bool l, r;
    if (val < root->value)
        return Bsearch(root->left, val);
    if(val>root->value)
        return Bsearch(root->right, val);
    return false;
}
int main()
{
    Node *root = BTinput();
    LOP(root);
    cout << endl;
    cout << Bsearch(root, 2);

    return 0;
}