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
    cout << head->value << " ";
    print_linked_list(head->next);
}

int linked_list_size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while(true)
    {
        int x;
        cin >> x;
        if(x==-1)break;
        insert_at_tail(head, tail, x);
    }
    while(true)
    {
        int x;
        cin >> x;
        if(x==-1)break;
        insert_at_tail(head1, tail1, x);
    }
    
    int s1 = linked_list_size(head);
    int s2 = linked_list_size(head1);
    s1 == s2 ? cout << "YES" : cout << "NO";

    return 0;
}