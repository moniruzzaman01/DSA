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

void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void delete_at_position(Node *head, int pos)
{
    Node *temp = head;
    int i = 1;
    while(temp!=NULL)
    {
        if(i==pos)
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
            break;
        }
        temp = temp->next;
        i++;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insert_at_tail(head, tail, 10);
    insert_at_tail(head, tail, 20);
    insert_at_tail(head, tail, 30);
    insert_at_tail(head, tail, 40);

    delete_at_position(head, 2);

    print_linked_list(head);
    cout << endl;
    print_reverse(tail);

    return 0;
}