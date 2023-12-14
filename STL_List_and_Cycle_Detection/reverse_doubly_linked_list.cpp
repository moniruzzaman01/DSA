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
    while(head!=NULL)
    {
        cout << head->value << endl;
        head = head->next;
    }
}
void insert_at_tail(Node *&tail, int value)
{
    Node *newNode = new Node(value);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
void reverse_linked_list(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while(i!=j && i->next!=j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *tail = new Node(20);
    head->next = tail;
    insert_at_tail(tail, 30);
    insert_at_tail(tail, 40);
    print_linked_list(head);
    reverse_linked_list(head,tail);
    print_linked_list(head);

    return 0;
}