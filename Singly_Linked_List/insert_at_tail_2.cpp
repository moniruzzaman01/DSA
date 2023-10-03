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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int value)
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

int main()
{
    Node *head = NULL;
    Node *tail = head;
    insert_at_tail(head, tail, 100);
    insert_at_tail(head, tail, 200);
    insert_at_tail(head, tail, 300);
    // print_linked_list(head);

    return 0;
}