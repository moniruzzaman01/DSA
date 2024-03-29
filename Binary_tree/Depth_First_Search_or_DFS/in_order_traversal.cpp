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

void inOrder(Node *root){
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->value << " ";
    inOrder(root->right);
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    c->right = f;
    d->right = g;
    b->right = e;
    e->left = h;
    e->right = i;

    inOrder(root);

    return 0;
}