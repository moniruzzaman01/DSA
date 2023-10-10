#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node *prev;
        int value;
        Node *next;
    Node(int value)
    {
        this->prev = NULL;
        this->value = value;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void print_reverse(Node *head)
{
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    while (temp!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
}

void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
    }
    else 
    {
        Node *temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

int main()
{
    Node *head = new Node(10);
    insert_at_tail(head, 20);
    insert_at_tail(head, 30);
    insert_at_tail(head, 40);

    print_linked_list(head);
    cout << endl;
    print_reverse(head);

    return 0;
}