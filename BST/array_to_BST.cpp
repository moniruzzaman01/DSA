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
Node* conversion(int arr[], int n, int l, int r)
{
    if (l>r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);
    Node *left = conversion(arr, n, l, mid - 1);
    Node *right = conversion(arr, n, mid + 1, r);
    root->left = left;
    root->right = right;
    return root;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    Node *root = conversion(arr, n, 0, n - 1);
    cout << endl;
    LOP(root);

    return 0;
}