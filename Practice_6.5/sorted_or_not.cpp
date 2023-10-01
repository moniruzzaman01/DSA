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

void insert_at_tail(Node *&head,int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    if(head==NULL)
    {
        head = newNode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

bool sorted_or_not(Node *head)
{
    Node *temp = head;
    while (temp->next!=NULL)
    {
        if(temp->value>temp->next->value)
            return false;
        temp = temp->next;
    }
    return true;
}

int main()
{
    Node *head = NULL;
    int x;
    while (true)
    {
        cin >> x;
        if(x==-1)
            break;
        insert_at_tail(head, x);
    }
    sorted_or_not(head) ? cout<<"YES" : cout<<"NO";

    // print_linked_list(head);

    return 0;
}