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

int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    head->next = b;
    b->next = c;
    c->next = d;

    d->prev = c;
    c->prev = b;
    b->prev = head;

    Node *temp = d;
    while (temp!=NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }

        return 0;
}