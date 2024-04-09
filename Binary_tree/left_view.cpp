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

vector<int> leftView(Node* root)
{
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

    vector<int> x = leftView(root);
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }

        return 0;
}