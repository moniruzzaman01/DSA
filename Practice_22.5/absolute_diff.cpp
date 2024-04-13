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
void getA(Node* root, vector<int> &v)
{
    if(root==NULL)return;
    v.push_back(root->value);
    getA(root->left,v);
    getA(root->right,v);
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
    Node *root = takeInput();
    // LOP(root);
    vector<int> v;
    getA(root,v);
    int mn=100000;
    for(int i=0; i<v.size()-1; i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            mn = min(mn, abs(v[i] - v[j]));
        }
    }
    cout << mn << endl;

    return 0;
}