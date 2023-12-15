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
void print_linked_list_asc(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    cout << head->value << " ";
    print_linked_list_asc(head->next);
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
void sort_DLL(Node *head)
{
    while (head->next!=NULL)
    {
        Node *temp = head->next;
        while (temp != NULL)
        {
            if(head->value > temp->value)
                swap(head->value, temp->value);
            temp = temp->next;
        }
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int x;
        cin >> x;
        if(x==-1) break;
        insert_at_tail(head, tail, x);
    }
    print_linked_list_asc(head);
    cout << endl;
    sort_DLL(head);
    print_linked_list_asc(head);

    return 0;
}