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

void levelOrderTraversal(Node *root){
    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        // step1
        Node *front = q.front();
        q.pop();

        //step2
        cout << front->value << " ";

        //step3
        if(front->right)
            q.push(front->right);
        if(front->left)
            q.push(front->left);
    }
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

    levelOrderTraversal(root);

    return 0;
}