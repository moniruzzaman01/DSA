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
Node* toBST(vector<int>a,int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *left = toBST(a, l, mid - 1);
    Node *right = toBST(a, mid + 1, r);
    root->left = left;
    root->right = right;
    return root;
}
vector<int> LOP(Node* root)
{
    vector<int> v;
    queue<Node *> q;
    if(root)
        q.push(root);
    
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        v.push_back(temp->value);
        cout << temp->value << " ";

        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    return v;
}

int main()
{
    vector<int> v = {-10, -3, 0, 5, 9};
    Node *root = toBST(v, 0, v.size() - 1);
    vector<int> x = LOP(root);
    cout << endl;
    for (int i : x)
    {
        cout << i << " ";
    }

    return 0;
}