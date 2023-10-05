#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head,Node *&tail, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void print_linked_list(Node *head)
{
    if(head==NULL)return;
    print_linked_list(head->next);
    cout << head->value << " ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while(true)
    {
        int x;
        cin >> x;
        if(x==-1)break;
        insert_at_tail(head, tail, x);
    }

    print_linked_list(head);

    return 0;
}