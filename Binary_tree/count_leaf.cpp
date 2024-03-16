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
Node *takeInput(){
    int n;
    cin >> n;
    Node *root;
    if (n == -1)
        root = NULL;
    else
        root = new Node(n);
        
    queue<Node *> q;
    if(root)
        q.push(root);

    while (!q.empty())
    {
        //step1
        Node *temp = q.front();
        q.pop();

        //step2
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if(l==-1)
            left = NULL;
        else
            left = new Node(l);
        if(r==-1)
            right = NULL;
        else
            right = new Node(r);

        temp->left = left;
        temp->right = right;

        //step3
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    return root;
}
int count(Node *root){
    if(root==NULL)
        return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l + r + 1;
}
int countLeaf(Node *root){
    if(root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else
    {
        int l = countLeaf(root->left);
        int r = countLeaf(root->right);
        return l + r;
    }
}
int main()
{

    Node *root = takeInput();
    cout << countLeaf(root) << endl;

    return 0;
}