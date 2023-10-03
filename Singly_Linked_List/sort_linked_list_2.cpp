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

void print_using_recursive(Node *head)
{
    if(head==NULL)
        return;
    print_using_recursive(head->next);
    cout << head->value << " ";
}

void sort_linked_list(Node *&head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        if(temp->value>temp->next->value)
        {
            Node *address = temp->next;
            temp->next = temp->next->next;
            temp->next->next = address;
        }
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = head;
    insert_at_tail(head, tail, 100);
    insert_at_tail(head, tail, 200);
    insert_at_tail(head, tail, 500);
    insert_at_tail(head, tail, 400);
    insert_at_tail(head, tail, 300);

    sort_linked_list(head);
    
    print_linked_list(head);
    // print_using_recursive(head);

    return 0;
}