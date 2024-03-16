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
int maximumHeight(Node *root){
    if(root==NULL)
    {
        return 0;
    }
    int l = maximumHeight(root->left);
    int r = maximumHeight(root->right);
    return max(l, r) + 1;
}
int main()
{

    Node *root = takeInput();
    cout << maximumHeight(root) << endl;

    return 0;
}