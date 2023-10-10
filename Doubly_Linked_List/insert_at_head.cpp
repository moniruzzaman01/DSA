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

void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
    }
    else{
        newNode->next = head->next;
        head = newNode;
        if(head->next!=NULL)
            head->next->prev = newNode;
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

void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    head->next = a;
    a->prev = head;
    Node *b = new Node(30);
    a->next = b;
    b->prev = a;
    insert_at_head(head, 100);
    insert_at_head(head, 200);
    // insert_at_head(head, 10);
    print_linked_list(head);
    cout << endl;
    print_reverse(b);
    
    return 0;
}