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

void levelOrder(Node *root)
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

int countNodes(Node *root)
{
    if(root==NULL)
        return 0;

    int l = countNodes(root->left);
    int r = countNodes(root->right);
    return l + r + 1;
}

int countLeaves(Node *root){
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;
    int l = countLeaves(root->left);
    int r = countLeaves(root->right);
    return l + r;
}

int MHeight(Node *root)
{
    if(root==NULL)
        return 0;

    int l = MHeight(root->left);
    int r = MHeight(root->right);
    return (max(l, r) + 1);
}

vector<int> leftView(Node* root){
    bool freq[3005] = {false};
    vector<int> v;
    queue< pair<Node *, int> > q;
    if(root)
        q.push(make_pair(root, 1));

    while(!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();
        Node *temp = pr.first;
        int level = pr.second;

        if(freq[level]==false)
        {
            v.push_back(temp->value);
            freq[level] = true;
        }

        if(temp->left)
            q.push(make_pair(temp->left, level + 1));
        if(temp->right)
            q.push(make_pair(temp->right, level + 1));
    }
    return v;
}
int main()
{
    Node *root = BTinput();

    // preOrder(root);
    // levelOrder(root);
    cout << MHeight(root) << endl;
    vector<int> r = leftView(root);
    for(int c:r)
    {
        cout << c << " ";
    }

        return 0;
}