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
        //step1 ber kore ano
        Node *temp = q.front();
        q.pop();

        //step2 ja kaj ache koro
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

        //step3 queue te children push koro
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
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
int getSum(Node *root)
{
    if(root==NULL)
        return 0;
    int left = getSum(root->left);
    int right = getSum(root->right);
    return left + right + root->value;
}
int main()
{
    Node *root = takeInput();
    LOP(root);
    int x = getSum(root);
    cout << endl
         << "x-" << x << endl;

    return 0;
}