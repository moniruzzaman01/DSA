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
void insert_at_tail(Node *&tail, int value)
{
    Node *newNode = new Node(value);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
void cycle_count(Node *head, Node *tail)
{
    Node *s = head;
    Node *f = tail;
    bool flag = false;
    while (f != NULL && f->next != NULL)
    {
        s = s->next;
        f = f->next->next;
        if(s==f)
        {
            flag = true;
            break;
        }
    }
    flag ? cout << "cycle found!!!" : cout<<"not found!!!";
}
int main()
{
    Node *head = new Node(10);
    Node *tail = new Node(20);
    head->next = tail;
    insert_at_tail(tail, 30);
    insert_at_tail(tail, 40);
    insert_at_tail(tail, 50);
    tail->next = head;
    cycle_count(head,tail);

    return 0;
}